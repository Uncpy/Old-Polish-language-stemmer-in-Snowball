
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int H_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_prefixes(struct SN_env * z);
static int r_exceptions(struct SN_env * z);
static int r_Step_1b(struct SN_env * z);
static int r_Step_1a(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * H_create_env(void);
extern void H_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[5] = { 'b', 'i', 'e', 'd', 'z' };
static const symbol s_0_1[5] = { 'b', 'y', 'd', 0xC5, 0xBA };
static const symbol s_0_2[7] = { 'f', 'r', 'a', 'n', 'c', 'u', 'z' };
static const symbol s_0_3[3] = { 'k', 'e', 'd' };
static const symbol s_0_4[3] = { 'k', 'e', 'l' };
static const symbol s_0_5[4] = { 'm', 'a', 'r', 'j' };
static const symbol s_0_6[5] = { 'm', 'a', 'r', 'y', 'j' };
static const symbol s_0_7[5] = { 'm', 0xC3, 0xB3, 'd', 'z' };

static const struct among a_0[8] =
{
/*  0 */ { 5, s_0_0, -1, 2, 0},
/*  1 */ { 5, s_0_1, -1, 3, 0},
/*  2 */ { 7, s_0_2, -1, 6, 0},
/*  3 */ { 3, s_0_3, -1, 7, 0},
/*  4 */ { 3, s_0_4, -1, 8, 0},
/*  5 */ { 4, s_0_5, -1, 5, 0},
/*  6 */ { 5, s_0_6, -1, 4, 0},
/*  7 */ { 5, s_0_7, -1, 1, 0}
};

static const symbol s_1_0[3] = { 'd', 'y', 'a' };
static const symbol s_1_1[4] = { 'g', 'i', 'e', 'o' };
static const symbol s_1_2[5] = { 'j', 'e', 'n', 'e', 'r' };
static const symbol s_1_3[3] = { 'k', 'i', 'e' };

static const struct among a_1[4] =
{
/*  0 */ { 3, s_1_0, -1, 3, 0},
/*  1 */ { 4, s_1_1, -1, 1, 0},
/*  2 */ { 5, s_1_2, -1, 4, 0},
/*  3 */ { 3, s_1_3, -1, 2, 0}
};

static const symbol s_2_0[6] = { 'y', 'j', 'o', 't', 'k', 'a' };
static const symbol s_2_1[5] = { 'y', 'j', 'o', 't', 'a' };
static const symbol s_2_2[2] = { 'y', 'a' };
static const symbol s_2_3[3] = { 'd', 'y', 'a' };
static const symbol s_2_4[3] = { 'f', 'y', 'a' };
static const symbol s_2_5[3] = { 'g', 'y', 'a' };
static const symbol s_2_6[3] = { 'l', 'y', 'a' };
static const symbol s_2_7[3] = { 'r', 'y', 'a' };
static const symbol s_2_8[3] = { 't', 'y', 'a' };
static const symbol s_2_9[3] = { 'd', 'y', 'e' };
static const symbol s_2_10[3] = { 'y', 'j', 'i' };
static const symbol s_2_11[5] = { 'y', 'j', 'a', 'm', 'i' };
static const symbol s_2_12[6] = { 'y', 'o', 't', 'a', 'm', 'i' };
static const symbol s_2_13[3] = { 'e', 'm', 'i' };
static const symbol s_2_14[2] = { 'y', 'i' };
static const symbol s_2_15[6] = { 'y', 'e', 'n', 'c', 'y', 'i' };
static const symbol s_2_16[3] = { 'd', 'y', 'i' };
static const symbol s_2_17[3] = { 'f', 'y', 'i' };
static const symbol s_2_18[3] = { 'g', 'y', 'i' };
static const symbol s_2_19[3] = { 'l', 'y', 'i' };
static const symbol s_2_20[3] = { 'r', 'y', 'i' };
static const symbol s_2_21[3] = { 't', 'y', 'i' };
static const symbol s_2_22[3] = { 'n', 'i', 'j' };
static const symbol s_2_23[2] = { 'y', 'j' };
static const symbol s_2_24[3] = { 'c', 'y', 'j' };
static const symbol s_2_25[3] = { 'd', 'y', 'j' };
static const symbol s_2_26[2] = { 'e', 'm' };
static const symbol s_2_27[3] = { 'i', 'e', 'm' };
static const symbol s_2_28[5] = { 'y', 's', 'z', 'e', 'm' };
static const symbol s_2_29[4] = { 'r', 'y', 'u', 'm' };
static const symbol s_2_30[3] = { 'r', 'y', 'm' };
static const symbol s_2_31[6] = { 'y', 'o', 't', 'y', 'z', 'm' };
static const symbol s_2_32[4] = { 'd', 's', 'z', 'y' };
static const symbol s_2_33[4] = { 'y', 'i', 0xC4, 0x85 };
static const symbol s_2_34[3] = { 'y', 0xC4, 0x85 };
static const symbol s_2_35[4] = { 'f', 'y', 0xC4, 0x85 };
static const symbol s_2_36[4] = { 'g', 'y', 0xC4, 0x85 };
static const symbol s_2_37[4] = { 'l', 'y', 0xC4, 0x85 };
static const symbol s_2_38[4] = { 'r', 'y', 0xC4, 0x85 };
static const symbol s_2_39[4] = { 't', 'y', 0xC4, 0x85 };
static const symbol s_2_40[3] = { 'y', 0xC4, 0x99 };
static const symbol s_2_41[4] = { 'f', 'y', 0xC4, 0x99 };
static const symbol s_2_42[4] = { 'g', 'y', 0xC4, 0x99 };
static const symbol s_2_43[4] = { 'l', 'y', 0xC4, 0x99 };
static const symbol s_2_44[4] = { 'r', 'y', 0xC4, 0x99 };
static const symbol s_2_45[4] = { 't', 'y', 0xC4, 0x99 };

static const struct among a_2[46] =
{
/*  0 */ { 6, s_2_0, -1, 42, 0},
/*  1 */ { 5, s_2_1, -1, 43, 0},
/*  2 */ { 2, s_2_2, -1, 1, 0},
/*  3 */ { 3, s_2_3, 2, 36, 0},
/*  4 */ { 3, s_2_4, 2, 17, 0},
/*  5 */ { 3, s_2_5, 2, 13, 0},
/*  6 */ { 3, s_2_6, 2, 9, 0},
/*  7 */ { 3, s_2_7, 2, 21, 0},
/*  8 */ { 3, s_2_8, 2, 27, 0},
/*  9 */ { 3, s_2_9, -1, 37, 0},
/* 10 */ { 3, s_2_10, -1, 6, 0},
/* 11 */ { 5, s_2_11, -1, 44, 0},
/* 12 */ { 6, s_2_12, -1, 41, 0},
/* 13 */ { 3, s_2_13, -1, 32, 0},
/* 14 */ { 2, s_2_14, -1, 2, 0},
/* 15 */ { 6, s_2_15, 14, 45, 0},
/* 16 */ { 3, s_2_16, 14, 38, 0},
/* 17 */ { 3, s_2_17, 14, 20, 0},
/* 18 */ { 3, s_2_18, 14, 16, 0},
/* 19 */ { 3, s_2_19, 14, 12, 0},
/* 20 */ { 3, s_2_20, 14, 24, 0},
/* 21 */ { 3, s_2_21, 14, 30, 0},
/* 22 */ { 3, s_2_22, -1, 34, 0},
/* 23 */ { 2, s_2_23, -1, 3, 0},
/* 24 */ { 3, s_2_24, 23, 8, 0},
/* 25 */ { 3, s_2_25, 23, 39, 0},
/* 26 */ { 2, s_2_26, -1, 31, 0},
/* 27 */ { 3, s_2_27, 26, 33, 0},
/* 28 */ { 5, s_2_28, 26, 46, 0},
/* 29 */ { 4, s_2_29, -1, 25, 0},
/* 30 */ { 3, s_2_30, -1, 26, 0},
/* 31 */ { 6, s_2_31, -1, 40, 0},
/* 32 */ { 4, s_2_32, -1, 35, 0},
/* 33 */ { 4, s_2_33, -1, 7, 0},
/* 34 */ { 3, s_2_34, -1, 4, 0},
/* 35 */ { 4, s_2_35, 34, 18, 0},
/* 36 */ { 4, s_2_36, 34, 14, 0},
/* 37 */ { 4, s_2_37, 34, 10, 0},
/* 38 */ { 4, s_2_38, 34, 22, 0},
/* 39 */ { 4, s_2_39, 34, 28, 0},
/* 40 */ { 3, s_2_40, -1, 5, 0},
/* 41 */ { 4, s_2_41, 40, 19, 0},
/* 42 */ { 4, s_2_42, 40, 15, 0},
/* 43 */ { 4, s_2_43, 40, 11, 0},
/* 44 */ { 4, s_2_44, 40, 23, 0},
/* 45 */ { 4, s_2_45, 40, 29, 0}
};

static const symbol s_3_0[4] = { 0xC4, 0x85, 'c', 'i' };
static const symbol s_3_1[6] = { 0xC3, 0xB3, 'r', 'e', 'm', 'i' };
static const symbol s_3_2[4] = { 'i', 'y', 'm', 'i' };
static const symbol s_3_3[4] = { 'a', 'l', 'e', 'm' };
static const symbol s_3_4[4] = { 'b', 'r', 'e', 'm' };
static const symbol s_3_5[5] = { 0xC3, 0xB3, 'r', 'e', 'm' };
static const symbol s_3_6[4] = { 'o', 'k', 'i', 'm' };
static const symbol s_3_7[5] = { 0xC5, 0x84, 'c', 'y', 'm' };
static const symbol s_3_8[4] = { 'o', 'd', 'y', 'm' };
static const symbol s_3_9[5] = { 0xC4, 0x99, 'd', 'y', 'm' };
static const symbol s_3_10[3] = { 'i', 'y', 'm' };
static const symbol s_3_11[4] = { 'a', 'l', 'y', 'm' };
static const symbol s_3_12[3] = { 'r', 'y', 'm' };
static const symbol s_3_13[4] = { 'k', 't', 'y', 'm' };
static const symbol s_3_14[4] = { 'o', 't', 'y', 'm' };
static const symbol s_3_15[4] = { 'p', 't', 'y', 'm' };
static const symbol s_3_16[4] = { 's', 't', 'y', 'm' };
static const symbol s_3_17[4] = { 'e', 'w', 'y', 'm' };
static const symbol s_3_18[4] = { 'a', 'z', 'y', 'm' };
static const symbol s_3_19[5] = { 'a', 'r', 'z', 'y', 'm' };
static const symbol s_3_20[5] = { 't', 'r', 'z', 'y', 'm' };
static const symbol s_3_21[4] = { 0xC5, 0x82, 'y', 'm' };
static const symbol s_3_22[4] = { 0xC5, 0xBC, 'y', 'm' };
static const symbol s_3_23[4] = { 'a', 'i', 0xC4, 0x85 };

static const struct among a_3[24] =
{
/*  0 */ { 4, s_3_0, -1, 6, 0},
/*  1 */ { 6, s_3_1, -1, 11, 0},
/*  2 */ { 4, s_3_2, -1, 3, 0},
/*  3 */ { 4, s_3_3, -1, 12, 0},
/*  4 */ { 4, s_3_4, -1, 16, 0},
/*  5 */ { 5, s_3_5, -1, 10, 0},
/*  6 */ { 4, s_3_6, -1, 8, 0},
/*  7 */ { 5, s_3_7, -1, 13, 0},
/*  8 */ { 4, s_3_8, -1, 15, 0},
/*  9 */ { 5, s_3_9, -1, 21, 0},
/* 10 */ { 3, s_3_10, -1, 4, 0},
/* 11 */ { 4, s_3_11, -1, 22, 0},
/* 12 */ { 3, s_3_12, -1, 2, 0},
/* 13 */ { 4, s_3_13, -1, 9, 0},
/* 14 */ { 4, s_3_14, -1, 7, 0},
/* 15 */ { 4, s_3_15, -1, 17, 0},
/* 16 */ { 4, s_3_16, -1, 23, 0},
/* 17 */ { 4, s_3_17, -1, 20, 0},
/* 18 */ { 4, s_3_18, -1, 14, 0},
/* 19 */ { 5, s_3_19, -1, 18, 0},
/* 20 */ { 5, s_3_20, -1, 19, 0},
/* 21 */ { 4, s_3_21, -1, 1, 0},
/* 22 */ { 4, s_3_22, -1, 24, 0},
/* 23 */ { 4, s_3_23, -1, 5, 0}
};

static const symbol s_0[] = { 'm', 0xC3, 0xB3, 'c' };
static const symbol s_1[] = { 'b', 'i', 'e', 'c' };
static const symbol s_2[] = { 'b', 'y', 0xC4, 0x87 };
static const symbol s_3[] = { 'M', 'a', 'r', 'i' };
static const symbol s_4[] = { 'M', 'a', 'r', 'i' };
static const symbol s_5[] = { 'f', 'r', 'a', 'n', 'c', 'u', 's' };
static const symbol s_6[] = { 'k', 'i', 'e', 'd' };
static const symbol s_7[] = { 'k', 'i', 'e', 'l' };
static const symbol s_8[] = { 'g', 'e', 'o' };
static const symbol s_9[] = { 'k', 'e' };
static const symbol s_10[] = { 'd', 'i', 'a' };
static const symbol s_11[] = { 'g', 'e', 'n', 'e', 'r' };
static const symbol s_12[] = { 'j', 'a' };
static const symbol s_13[] = { 'j', 'i' };
static const symbol s_14[] = { 'e', 'j' };
static const symbol s_15[] = { 'j', 0xC4, 0x85 };
static const symbol s_16[] = { 'j', 0xC4, 0x99 };
static const symbol s_17[] = { 'j', 'i' };
static const symbol s_18[] = { 'j', 0xC4, 0x85 };
static const symbol s_19[] = { 'c', 'j', 'i' };
static const symbol s_20[] = { 'l', 'i', 'a' };
static const symbol s_21[] = { 'l', 'i', 0xC4, 0x85 };
static const symbol s_22[] = { 'l', 'i', 0xC4, 0x99 };
static const symbol s_23[] = { 'l', 'i', 'i' };
static const symbol s_24[] = { 'g', 'i', 'a' };
static const symbol s_25[] = { 'g', 'i', 0xC4, 0x85 };
static const symbol s_26[] = { 'g', 'i', 0xC4, 0x99 };
static const symbol s_27[] = { 'g', 'i', 'i' };
static const symbol s_28[] = { 'f', 'i', 'a' };
static const symbol s_29[] = { 'f', 'i', 0xC4, 0x85 };
static const symbol s_30[] = { 'f', 'i', 0xC4, 0x99 };
static const symbol s_31[] = { 'f', 'i', 'i' };
static const symbol s_32[] = { 'r', 'i', 'a' };
static const symbol s_33[] = { 'r', 'i', 0xC4, 0x85 };
static const symbol s_34[] = { 'r', 'i', 0xC4, 0x99 };
static const symbol s_35[] = { 'r', 'i', 'i' };
static const symbol s_36[] = { 'r', 'i', 'u', 'm' };
static const symbol s_37[] = { 'r', 'y', 'm' };
static const symbol s_38[] = { 't', 'i', 'a' };
static const symbol s_39[] = { 't', 'i', 0xC4, 0x85 };
static const symbol s_40[] = { 't', 'i', 0xC4, 0x99 };
static const symbol s_41[] = { 't', 'i', 'i' };
static const symbol s_42[] = { 'y', 'm' };
static const symbol s_43[] = { 'y', 'm', 'i' };
static const symbol s_44[] = { 'i', 'e', 'm' };
static const symbol s_45[] = { 'n', 'i' };
static const symbol s_46[] = { 'd', 0xC5, 0x82, 's', 'z', 'y' };
static const symbol s_47[] = { 'd', 'i', 'a' };
static const symbol s_48[] = { 'd', 'i', 'a' };
static const symbol s_49[] = { 'd', 'i', 'e' };
static const symbol s_50[] = { 'd', 'i', 'i' };
static const symbol s_51[] = { 'i', 'o', 't', 'y', 'z', 'm' };
static const symbol s_52[] = { 'i', 'o', 't', 'a', 'm', 'i' };
static const symbol s_53[] = { 'i', 'o', 't', 'k', 'a' };
static const symbol s_54[] = { 'i', 'o', 't', 'a' };
static const symbol s_55[] = { 'j', 'a', 'm', 'i' };
static const symbol s_56[] = { 'i', 'e', 'n', 'c', 'j', 'i' };
static const symbol s_57[] = { 'j', 's', 'z', 'y', 'm' };
static const symbol s_58[] = { 0xC5, 0x82, 'e', 'm' };
static const symbol s_59[] = { 'r', 'e', 'm' };
static const symbol s_60[] = { 'i', 'm', 'i' };
static const symbol s_61[] = { 'i', 'm' };
static const symbol s_62[] = { 'a', 'j', 0xC4, 0x85 };
static const symbol s_63[] = { 0xC4, 0x85, 'c', 'y' };
static const symbol s_64[] = { 'o', 't', 'e', 'm' };
static const symbol s_65[] = { 'o', 'k', 'i', 'e', 'm' };
static const symbol s_66[] = { 'k', 't', 'e', 'm' };
static const symbol s_67[] = { 0xC3, 0xB3, 'r', 'y', 'm' };
static const symbol s_68[] = { 0xC3, 0xB3, 'r', 'y', 'm', 'i' };
static const symbol s_69[] = { 'a', 'l', 'y', 'm' };
static const symbol s_70[] = { 0xC5, 0x84, 'c', 'e', 'm' };
static const symbol s_71[] = { 'a', 'z', 'e', 'm' };
static const symbol s_72[] = { 'o', 'd', 'e', 'm' };
static const symbol s_73[] = { 'b', 'r', 'y', 'm' };
static const symbol s_74[] = { 'p', 't', 'e', 'm' };
static const symbol s_75[] = { 'a', 'r', 'z', 'e', 'm' };
static const symbol s_76[] = { 't', 'r', 'z', 'e', 'm' };
static const symbol s_77[] = { 'e', 'w', 'e', 'm' };
static const symbol s_78[] = { 0xC4, 0x99, 'd', 'e', 'm' };
static const symbol s_79[] = { 'a', 'l', 'e', 'm' };
static const symbol s_80[] = { 's', 't', 'e', 'm' };
static const symbol s_81[] = { 0xC5, 0xBC, 'e', 'm' };

static int r_exceptions(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 10 */
    among_var = find_among(z, a_0, 8); /* substring, line 10 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 10 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 4, s_0); /* <-, line 11 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 4, s_1); /* <-, line 12 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 4, s_2); /* <-, line 13 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_3); /* <-, line 14 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_4); /* <-, line 15 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 7, s_5); /* <-, line 16 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 4, s_6); /* <-, line 17 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 4, s_7); /* <-, line 18 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_prefixes(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 23 */
    if (z->c + 2 >= z->l || z->p[z->c + 2] >> 5 != 3 || !((16418 >> (z->p[z->c + 2] & 0x1f)) & 1)) return 0;
    among_var = find_among(z, a_1, 4); /* substring, line 23 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 23 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 3, s_8); /* <-, line 24 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_9); /* <-, line 25 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 3, s_10); /* <-, line 26 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 5, s_11); /* <-, line 27 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1a(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 36 */
    among_var = find_among_b(z, a_2, 46); /* substring, line 36 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 36 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_12); /* <-, line 37 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_13); /* <-, line 38 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_14); /* <-, line 39 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 3, s_15); /* <-, line 40 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_16); /* <-, line 41 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 2, s_17); /* <-, line 42 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_18); /* <-, line 43 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 3, s_19); /* <-, line 44 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 3, s_20); /* <-, line 48 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 4, s_21); /* <-, line 49 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 4, s_22); /* <-, line 50 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 3, s_23); /* <-, line 51 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 3, s_24); /* <-, line 53 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 4, s_25); /* <-, line 54 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 4, s_26); /* <-, line 55 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 3, s_27); /* <-, line 56 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 3, s_28); /* <-, line 58 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 4, s_29); /* <-, line 59 */
                if (ret < 0) return ret;
            }
            break;
        case 19:
            {   int ret = slice_from_s(z, 4, s_30); /* <-, line 60 */
                if (ret < 0) return ret;
            }
            break;
        case 20:
            {   int ret = slice_from_s(z, 3, s_31); /* <-, line 61 */
                if (ret < 0) return ret;
            }
            break;
        case 21:
            {   int ret = slice_from_s(z, 3, s_32); /* <-, line 63 */
                if (ret < 0) return ret;
            }
            break;
        case 22:
            {   int ret = slice_from_s(z, 4, s_33); /* <-, line 64 */
                if (ret < 0) return ret;
            }
            break;
        case 23:
            {   int ret = slice_from_s(z, 4, s_34); /* <-, line 65 */
                if (ret < 0) return ret;
            }
            break;
        case 24:
            {   int ret = slice_from_s(z, 3, s_35); /* <-, line 66 */
                if (ret < 0) return ret;
            }
            break;
        case 25:
            {   int ret = slice_from_s(z, 4, s_36); /* <-, line 67 */
                if (ret < 0) return ret;
            }
            break;
        case 26:
            {   int ret = slice_from_s(z, 3, s_37); /* <-, line 68 */
                if (ret < 0) return ret;
            }
            break;
        case 27:
            {   int ret = slice_from_s(z, 3, s_38); /* <-, line 71 */
                if (ret < 0) return ret;
            }
            break;
        case 28:
            {   int ret = slice_from_s(z, 4, s_39); /* <-, line 72 */
                if (ret < 0) return ret;
            }
            break;
        case 29:
            {   int ret = slice_from_s(z, 4, s_40); /* <-, line 73 */
                if (ret < 0) return ret;
            }
            break;
        case 30:
            {   int ret = slice_from_s(z, 3, s_41); /* <-, line 74 */
                if (ret < 0) return ret;
            }
            break;
        case 31:
            {   int ret = slice_from_s(z, 2, s_42); /* <-, line 76 */
                if (ret < 0) return ret;
            }
            break;
        case 32:
            {   int ret = slice_from_s(z, 3, s_43); /* <-, line 77 */
                if (ret < 0) return ret;
            }
            break;
        case 33:
            {   int ret = slice_from_s(z, 3, s_44); /* <-, line 78 */
                if (ret < 0) return ret;
            }
            break;
        case 34:
            {   int ret = slice_from_s(z, 2, s_45); /* <-, line 80 */
                if (ret < 0) return ret;
            }
            break;
        case 35:
            {   int ret = slice_from_s(z, 6, s_46); /* <-, line 82 */
                if (ret < 0) return ret;
            }
            break;
        case 36:
            {   int ret = slice_from_s(z, 3, s_47); /* <-, line 83 */
                if (ret < 0) return ret;
            }
            break;
        case 37:
            {   int ret = slice_from_s(z, 3, s_48); /* <-, line 84 */
                if (ret < 0) return ret;
            }
            break;
        case 38:
            {   int ret = slice_from_s(z, 3, s_49); /* <-, line 85 */
                if (ret < 0) return ret;
            }
            break;
        case 39:
            {   int ret = slice_from_s(z, 3, s_50); /* <-, line 86 */
                if (ret < 0) return ret;
            }
            break;
        case 40:
            {   int ret = slice_from_s(z, 6, s_51); /* <-, line 88 */
                if (ret < 0) return ret;
            }
            break;
        case 41:
            {   int ret = slice_from_s(z, 6, s_52); /* <-, line 89 */
                if (ret < 0) return ret;
            }
            break;
        case 42:
            {   int ret = slice_from_s(z, 5, s_53); /* <-, line 90 */
                if (ret < 0) return ret;
            }
            break;
        case 43:
            {   int ret = slice_from_s(z, 4, s_54); /* <-, line 91 */
                if (ret < 0) return ret;
            }
            break;
        case 44:
            {   int ret = slice_from_s(z, 4, s_55); /* <-, line 92 */
                if (ret < 0) return ret;
            }
            break;
        case 45:
            {   int ret = slice_from_s(z, 6, s_56); /* <-, line 93 */
                if (ret < 0) return ret;
            }
            break;
        case 46:
            {   int ret = slice_from_s(z, 5, s_57); /* <-, line 94 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1b(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 100 */
    among_var = find_among_b(z, a_3, 24); /* substring, line 100 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 100 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 4, s_58); /* <-, line 101 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_59); /* <-, line 102 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 3, s_60); /* <-, line 103 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_61); /* <-, line 104 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_62); /* <-, line 105 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 4, s_63); /* <-, line 106 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 4, s_64); /* <-, line 107 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 5, s_65); /* <-, line 108 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 4, s_66); /* <-, line 109 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 5, s_67); /* <-, line 110 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 6, s_68); /* <-, line 111 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 4, s_69); /* <-, line 112 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 5, s_70); /* <-, line 113 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 4, s_71); /* <-, line 114 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 4, s_72); /* <-, line 115 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 4, s_73); /* <-, line 116 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 4, s_74); /* <-, line 117 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 5, s_75); /* <-, line 118 */
                if (ret < 0) return ret;
            }
            break;
        case 19:
            {   int ret = slice_from_s(z, 5, s_76); /* <-, line 119 */
                if (ret < 0) return ret;
            }
            break;
        case 20:
            {   int ret = slice_from_s(z, 4, s_77); /* <-, line 120 */
                if (ret < 0) return ret;
            }
            break;
        case 21:
            {   int ret = slice_from_s(z, 5, s_78); /* <-, line 121 */
                if (ret < 0) return ret;
            }
            break;
        case 22:
            {   int ret = slice_from_s(z, 4, s_79); /* <-, line 122 */
                if (ret < 0) return ret;
            }
            break;
        case 23:
            {   int ret = slice_from_s(z, 4, s_80); /* <-, line 123 */
                if (ret < 0) return ret;
            }
            break;
        case 24:
            {   int ret = slice_from_s(z, 4, s_81); /* <-, line 124 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) {
    {   int c1 = z->c; /* do, line 130 */
        {   int ret = r_prefixes(z);
            if (ret == 0) goto lab0; /* call prefixes, line 130 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 132 */

    {   int m2 = z->l - z->c; (void)m2; /* do, line 133 */
        {   int ret = r_Step_1a(z);
            if (ret == 0) goto lab1; /* call Step_1a, line 133 */
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 134 */
        {   int ret = r_Step_1b(z);
            if (ret == 0) goto lab2; /* call Step_1b, line 134 */
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    z->c = z->lb;
    {   int c4 = z->c; /* do, line 136 */
        {   int ret = r_exceptions(z);
            if (ret == 0) goto lab3; /* call exceptions, line 136 */
            if (ret < 0) return ret;
        }
    lab3:
        z->c = c4;
    }
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 0, 0); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }


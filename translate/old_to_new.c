
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
static const symbol s_0_3[6] = { 'k', 'a', 0xC5, 0xBA, 0xC5, 0x84 };
static const symbol s_0_4[3] = { 'k', 'e', 'd' };
static const symbol s_0_5[3] = { 'k', 'e', 'l' };
static const symbol s_0_6[4] = { 'm', 'a', 'r', 'j' };
static const symbol s_0_7[5] = { 'm', 'a', 'r', 'y', 'j' };
static const symbol s_0_8[5] = { 'm', 0xC3, 0xB3, 'd', 'z' };

static const struct among a_0[9] =
{
/*  0 */ { 5, s_0_0, -1, 2, 0},
/*  1 */ { 5, s_0_1, -1, 3, 0},
/*  2 */ { 7, s_0_2, -1, 6, 0},
/*  3 */ { 6, s_0_3, -1, 9, 0},
/*  4 */ { 3, s_0_4, -1, 7, 0},
/*  5 */ { 3, s_0_5, -1, 8, 0},
/*  6 */ { 4, s_0_6, -1, 5, 0},
/*  7 */ { 5, s_0_7, -1, 4, 0},
/*  8 */ { 5, s_0_8, -1, 1, 0}
};

static const symbol s_1_0[3] = { 'd', 'y', 'a' };
static const symbol s_1_1[4] = { 'g', 'i', 'e', 'o' };
static const symbol s_1_2[5] = { 'j', 'e', 'n', 'e', 'r' };
static const symbol s_1_3[4] = { 'k', 'a', 0xC5, 0xBA };
static const symbol s_1_4[3] = { 'k', 'i', 'e' };
static const symbol s_1_5[3] = { 'm', 'a', 'i' };

static const struct among a_1[6] =
{
/*  0 */ { 3, s_1_0, -1, 3, 0},
/*  1 */ { 4, s_1_1, -1, 1, 0},
/*  2 */ { 5, s_1_2, -1, 4, 0},
/*  3 */ { 4, s_1_3, -1, 5, 0},
/*  4 */ { 3, s_1_4, -1, 2, 0},
/*  5 */ { 3, s_1_5, -1, 6, 0}
};

static const symbol s_2_0[6] = { 'y', 'j', 'o', 't', 'k', 'a' };
static const symbol s_2_1[5] = { 'y', 'j', 'o', 't', 'a' };
static const symbol s_2_2[2] = { 'y', 'a' };
static const symbol s_2_3[3] = { 'c', 'y', 'a' };
static const symbol s_2_4[3] = { 's', 'y', 'a' };
static const symbol s_2_5[3] = { 'z', 'y', 'a' };
static const symbol s_2_6[2] = { 'y', 'e' };
static const symbol s_2_7[3] = { 'c', 'y', 'e' };
static const symbol s_2_8[3] = { 's', 'y', 'e' };
static const symbol s_2_9[3] = { 'z', 'y', 'e' };
static const symbol s_2_10[3] = { 'y', 'j', 'i' };
static const symbol s_2_11[4] = { 'c', 'y', 'j', 'i' };
static const symbol s_2_12[4] = { 's', 'y', 'j', 'i' };
static const symbol s_2_13[4] = { 'z', 'y', 'j', 'i' };
static const symbol s_2_14[5] = { 'y', 'j', 'a', 'm', 'i' };
static const symbol s_2_15[6] = { 'y', 'o', 't', 'a', 'm', 'i' };
static const symbol s_2_16[3] = { 'e', 'm', 'i' };
static const symbol s_2_17[2] = { 'y', 'i' };
static const symbol s_2_18[3] = { 'c', 'y', 'i' };
static const symbol s_2_19[6] = { 'y', 'e', 'n', 'c', 'y', 'i' };
static const symbol s_2_20[3] = { 'l', 'y', 'i' };
static const symbol s_2_21[3] = { 's', 'y', 'i' };
static const symbol s_2_22[3] = { 'z', 'y', 'i' };
static const symbol s_2_23[3] = { 'n', 'i', 'j' };
static const symbol s_2_24[2] = { 'y', 'j' };
static const symbol s_2_25[3] = { 'c', 'y', 'j' };
static const symbol s_2_26[4] = { 's', 'c', 'y', 'j' };
static const symbol s_2_27[4] = { 'z', 'c', 'y', 'j' };
static const symbol s_2_28[3] = { 's', 'y', 'j' };
static const symbol s_2_29[3] = { 'z', 'y', 'j' };
static const symbol s_2_30[2] = { 'e', 'm' };
static const symbol s_2_31[5] = { 'y', 's', 'z', 'e', 'm' };
static const symbol s_2_32[3] = { 'y', 'u', 'm' };
static const symbol s_2_33[6] = { 'y', 'o', 't', 'y', 'z', 'm' };
static const symbol s_2_34[4] = { 'y', 0xC3, 0xB3, 'w' };
static const symbol s_2_35[4] = { 'd', 's', 'z', 'y' };
static const symbol s_2_36[4] = { 'y', 'i', 0xC4, 0x85 };
static const symbol s_2_37[5] = { 'c', 'y', 'i', 0xC4, 0x85 };
static const symbol s_2_38[5] = { 's', 'y', 'i', 0xC4, 0x85 };
static const symbol s_2_39[5] = { 'z', 'y', 'i', 0xC4, 0x85 };
static const symbol s_2_40[3] = { 'y', 0xC4, 0x85 };
static const symbol s_2_41[4] = { 'c', 'y', 0xC4, 0x85 };
static const symbol s_2_42[4] = { 's', 'y', 0xC4, 0x85 };
static const symbol s_2_43[4] = { 'z', 'y', 0xC4, 0x85 };
static const symbol s_2_44[3] = { 'y', 0xC4, 0x99 };
static const symbol s_2_45[4] = { 'c', 'y', 0xC4, 0x99 };
static const symbol s_2_46[4] = { 's', 'y', 0xC4, 0x99 };
static const symbol s_2_47[4] = { 'z', 'y', 0xC4, 0x99 };

static const struct among a_2[48] =
{
/*  0 */ { 6, s_2_0, -1, 39, 0},
/*  1 */ { 5, s_2_1, -1, 40, 0},
/*  2 */ { 2, s_2_2, -1, 1, 0},
/*  3 */ { 3, s_2_3, 2, 11, 0},
/*  4 */ { 3, s_2_4, 2, 28, 0},
/*  5 */ { 3, s_2_5, 2, 19, 0},
/*  6 */ { 2, s_2_6, -1, 2, 0},
/*  7 */ { 3, s_2_7, 6, 12, 0},
/*  8 */ { 3, s_2_8, 6, 29, 0},
/*  9 */ { 3, s_2_9, 6, 20, 0},
/* 10 */ { 3, s_2_10, -1, 6, 0},
/* 11 */ { 4, s_2_11, 10, 17, 0},
/* 12 */ { 4, s_2_12, 10, 33, 0},
/* 13 */ { 4, s_2_13, 10, 25, 0},
/* 14 */ { 5, s_2_14, -1, 41, 0},
/* 15 */ { 6, s_2_15, -1, 38, 0},
/* 16 */ { 3, s_2_16, -1, 45, 0},
/* 17 */ { 2, s_2_17, -1, 3, 0},
/* 18 */ { 3, s_2_18, 17, 13, 0},
/* 19 */ { 6, s_2_19, 18, 42, 0},
/* 20 */ { 3, s_2_20, 17, 48, 0},
/* 21 */ { 3, s_2_21, 17, 34, 0},
/* 22 */ { 3, s_2_22, 17, 21, 0},
/* 23 */ { 3, s_2_23, -1, 46, 0},
/* 24 */ { 2, s_2_24, -1, 8, 0},
/* 25 */ { 3, s_2_25, 24, 14, 0},
/* 26 */ { 4, s_2_26, 25, 36, 0},
/* 27 */ { 4, s_2_27, 25, 27, 0},
/* 28 */ { 3, s_2_28, 24, 30, 0},
/* 29 */ { 3, s_2_29, 24, 22, 0},
/* 30 */ { 2, s_2_30, -1, 44, 0},
/* 31 */ { 5, s_2_31, 30, 43, 0},
/* 32 */ { 3, s_2_32, -1, 9, 0},
/* 33 */ { 6, s_2_33, -1, 37, 0},
/* 34 */ { 4, s_2_34, -1, 10, 0},
/* 35 */ { 4, s_2_35, -1, 47, 0},
/* 36 */ { 4, s_2_36, -1, 7, 0},
/* 37 */ { 5, s_2_37, 36, 18, 0},
/* 38 */ { 5, s_2_38, 36, 35, 0},
/* 39 */ { 5, s_2_39, 36, 26, 0},
/* 40 */ { 3, s_2_40, -1, 4, 0},
/* 41 */ { 4, s_2_41, 40, 15, 0},
/* 42 */ { 4, s_2_42, 40, 31, 0},
/* 43 */ { 4, s_2_43, 40, 23, 0},
/* 44 */ { 3, s_2_44, -1, 5, 0},
/* 45 */ { 4, s_2_45, 44, 16, 0},
/* 46 */ { 4, s_2_46, 44, 32, 0},
/* 47 */ { 4, s_2_47, 44, 24, 0}
};

static const symbol s_3_0[4] = { 0xC4, 0x85, 'c', 'i' };
static const symbol s_3_1[6] = { 0xC3, 0xB3, 'r', 'e', 'm', 'i' };
static const symbol s_3_2[4] = { 'i', 'y', 'm', 'i' };
static const symbol s_3_3[4] = { 'a', 'l', 'e', 'm' };
static const symbol s_3_4[4] = { 'b', 'r', 'e', 'm' };
static const symbol s_3_5[5] = { 0xC3, 0xB3, 'r', 'e', 'm' };
static const symbol s_3_6[4] = { 's', 't', 'e', 'm' };
static const symbol s_3_7[4] = { 'o', 'k', 'i', 'm' };
static const symbol s_3_8[5] = { 0xC5, 0x84, 'c', 'y', 'm' };
static const symbol s_3_9[4] = { 'o', 'd', 'y', 'm' };
static const symbol s_3_10[5] = { 0xC4, 0x99, 'd', 'y', 'm' };
static const symbol s_3_11[3] = { 'i', 'y', 'm' };
static const symbol s_3_12[4] = { 'a', 'l', 'y', 'm' };
static const symbol s_3_13[3] = { 'r', 'y', 'm' };
static const symbol s_3_14[4] = { 'a', 't', 'y', 'm' };
static const symbol s_3_15[4] = { 'k', 't', 'y', 'm' };
static const symbol s_3_16[4] = { 'o', 't', 'y', 'm' };
static const symbol s_3_17[4] = { 'p', 't', 'y', 'm' };
static const symbol s_3_18[4] = { 'e', 'w', 'y', 'm' };
static const symbol s_3_19[4] = { 'a', 'z', 'y', 'm' };
static const symbol s_3_20[5] = { 'a', 'r', 'z', 'y', 'm' };
static const symbol s_3_21[5] = { 't', 'r', 'z', 'y', 'm' };
static const symbol s_3_22[4] = { 0xC5, 0x82, 'y', 'm' };
static const symbol s_3_23[5] = { 'o', 0xC5, 0x82, 'y', 'm' };

static const struct among a_3[24] =
{
/*  0 */ { 4, s_3_0, -1, 5, 0},
/*  1 */ { 6, s_3_1, -1, 10, 0},
/*  2 */ { 4, s_3_2, -1, 3, 0},
/*  3 */ { 4, s_3_3, -1, 11, 0},
/*  4 */ { 4, s_3_4, -1, 15, 0},
/*  5 */ { 5, s_3_5, -1, 9, 0},
/*  6 */ { 4, s_3_6, -1, 24, 0},
/*  7 */ { 4, s_3_7, -1, 7, 0},
/*  8 */ { 5, s_3_8, -1, 12, 0},
/*  9 */ { 4, s_3_9, -1, 14, 0},
/* 10 */ { 5, s_3_10, -1, 20, 0},
/* 11 */ { 3, s_3_11, -1, 4, 0},
/* 12 */ { 4, s_3_12, -1, 21, 0},
/* 13 */ { 3, s_3_13, -1, 2, 0},
/* 14 */ { 4, s_3_14, -1, 23, 0},
/* 15 */ { 4, s_3_15, -1, 8, 0},
/* 16 */ { 4, s_3_16, -1, 6, 0},
/* 17 */ { 4, s_3_17, -1, 16, 0},
/* 18 */ { 4, s_3_18, -1, 19, 0},
/* 19 */ { 4, s_3_19, -1, 13, 0},
/* 20 */ { 5, s_3_20, -1, 17, 0},
/* 21 */ { 5, s_3_21, -1, 18, 0},
/* 22 */ { 4, s_3_22, -1, 1, 0},
/* 23 */ { 5, s_3_23, 22, 22, 0}
};

static const symbol s_0[] = { 'm', 0xC3, 0xB3, 'c' };
static const symbol s_1[] = { 'b', 'i', 'e', 'c' };
static const symbol s_2[] = { 'b', 'y', 0xC4, 0x87 };
static const symbol s_3[] = { 'M', 'a', 'r', 'i' };
static const symbol s_4[] = { 'M', 'a', 'r', 'i' };
static const symbol s_5[] = { 'f', 'r', 'a', 'n', 'c', 'u', 's' };
static const symbol s_6[] = { 'k', 'i', 'e', 'd' };
static const symbol s_7[] = { 'k', 'i', 'e', 'l' };
static const symbol s_8[] = { 'k', 'a', 0xC5, 0xBA, 0xC5, 0x84 };
static const symbol s_9[] = { 'g', 'e', 'o' };
static const symbol s_10[] = { 'k', 'e' };
static const symbol s_11[] = { 'd', 'i', 'a' };
static const symbol s_12[] = { 'g', 'e', 'n', 'e', 'r' };
static const symbol s_13[] = { 'k', 'a', 0xC5, 0xBC };
static const symbol s_14[] = { 'm', 'a', 'j' };
static const symbol s_15[] = { 'i', 'a' };
static const symbol s_16[] = { 'i', 'e' };
static const symbol s_17[] = { 'i', 'i' };
static const symbol s_18[] = { 'i', 0xC4, 0x85 };
static const symbol s_19[] = { 'i', 0xC4, 0x99 };
static const symbol s_20[] = { 'i', 'j', 'i' };
static const symbol s_21[] = { 'i', 0xC4, 0x85 };
static const symbol s_22[] = { 'e', 'j' };
static const symbol s_23[] = { 'i', 'u', 'm' };
static const symbol s_24[] = { 'i', 0xC3, 0xB3, 'w' };
static const symbol s_25[] = { 'c', 'j', 'a' };
static const symbol s_26[] = { 'c', 'j', 'e' };
static const symbol s_27[] = { 'c', 'j', 'i' };
static const symbol s_28[] = { 'c', 'e', 'j' };
static const symbol s_29[] = { 'c', 'j', 0xC4, 0x85 };
static const symbol s_30[] = { 'c', 'j', 0xC4, 0x99 };
static const symbol s_31[] = { 'c', 'j', 'i' };
static const symbol s_32[] = { 'c', 'j', 0xC4, 0x85 };
static const symbol s_33[] = { 'z', 'j', 'a' };
static const symbol s_34[] = { 'z', 'j', 'e' };
static const symbol s_35[] = { 'z', 'j', 'i' };
static const symbol s_36[] = { 'z', 'e', 'j' };
static const symbol s_37[] = { 'z', 'j', 0xC4, 0x85 };
static const symbol s_38[] = { 'z', 'j', 0xC4, 0x99 };
static const symbol s_39[] = { 'z', 'j', 'i' };
static const symbol s_40[] = { 'z', 'j', 0xC4, 0x85 };
static const symbol s_41[] = { 'z', 'c', 'j', 'i' };
static const symbol s_42[] = { 's', 'j', 'a' };
static const symbol s_43[] = { 's', 'j', 'e' };
static const symbol s_44[] = { 's', 'e', 'j' };
static const symbol s_45[] = { 's', 'j', 0xC4, 0x85 };
static const symbol s_46[] = { 's', 'j', 0xC4, 0x99 };
static const symbol s_47[] = { 's', 'j', 'i' };
static const symbol s_48[] = { 's', 'j', 'i' };
static const symbol s_49[] = { 's', 'j', 0xC4, 0x85 };
static const symbol s_50[] = { 's', 'c', 'j', 'i' };
static const symbol s_51[] = { 'i', 'o', 't', 'y', 'z', 'm' };
static const symbol s_52[] = { 'i', 'o', 't', 'a', 'm', 'i' };
static const symbol s_53[] = { 'i', 'o', 't', 'k', 'a' };
static const symbol s_54[] = { 'i', 'o', 't', 'a' };
static const symbol s_55[] = { 'j', 'a', 'm', 'i' };
static const symbol s_56[] = { 'i', 'e', 'n', 'c', 'j', 'i' };
static const symbol s_57[] = { 'j', 's', 'z', 'y', 'm' };
static const symbol s_58[] = { 'y', 'm' };
static const symbol s_59[] = { 'y', 'm', 'i' };
static const symbol s_60[] = { 'n', 'i' };
static const symbol s_61[] = { 'd', 0xC5, 0x82, 's', 'z', 'y' };
static const symbol s_62[] = { 'l', 'i' };
static const symbol s_63[] = { 0xC5, 0x82, 'e', 'm' };
static const symbol s_64[] = { 'r', 'e', 'm' };
static const symbol s_65[] = { 'i', 'm', 'i' };
static const symbol s_66[] = { 'i', 'm' };
static const symbol s_67[] = { 0xC4, 0x85, 'c', 'y' };
static const symbol s_68[] = { 'o', 't', 'e', 'm' };
static const symbol s_69[] = { 'o', 'k', 'i', 'e', 'm' };
static const symbol s_70[] = { 'k', 't', 'e', 'm' };
static const symbol s_71[] = { 0xC3, 0xB3, 'r', 'y', 'm' };
static const symbol s_72[] = { 0xC3, 0xB3, 'r', 'y', 'm', 'i' };
static const symbol s_73[] = { 'a', 'l', 'y', 'm' };
static const symbol s_74[] = { 0xC5, 0x84, 'c', 'e', 'm' };
static const symbol s_75[] = { 'a', 'z', 'e', 'm' };
static const symbol s_76[] = { 'o', 'd', 'e', 'm' };
static const symbol s_77[] = { 'b', 'r', 'y', 'm' };
static const symbol s_78[] = { 'p', 't', 'e', 'm' };
static const symbol s_79[] = { 'a', 'r', 'z', 'e', 'm' };
static const symbol s_80[] = { 't', 'r', 'z', 'e', 'm' };
static const symbol s_81[] = { 'e', 'w', 'e', 'm' };
static const symbol s_82[] = { 0xC4, 0x99, 'd', 'e', 'm' };
static const symbol s_83[] = { 'a', 'l', 'e', 'm' };
static const symbol s_84[] = { 'o', 0xC5, 0x82, 'e', 'm' };
static const symbol s_85[] = { 'a', 't', 'e', 'm' };
static const symbol s_86[] = { 's', 't', 'y', 'm' };

static int r_exceptions(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 10 */
    among_var = find_among(z, a_0, 9); /* substring, line 10 */
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
        case 9:
            {   int ret = slice_from_s(z, 6, s_8); /* <-, line 19 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_prefixes(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 24 */
    among_var = find_among(z, a_1, 6); /* substring, line 24 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 24 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 3, s_9); /* <-, line 25 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_10); /* <-, line 26 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 3, s_11); /* <-, line 27 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 5, s_12); /* <-, line 28 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_13); /* <-, line 29 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 3, s_14); /* <-, line 30 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1a(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 39 */
    among_var = find_among_b(z, a_2, 48); /* substring, line 39 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 39 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_15); /* <-, line 41 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_16); /* <-, line 42 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_17); /* <-, line 43 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 3, s_18); /* <-, line 44 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_19); /* <-, line 45 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 3, s_20); /* <-, line 46 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_21); /* <-, line 47 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 2, s_22); /* <-, line 48 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 3, s_23); /* <-, line 49 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 4, s_24); /* <-, line 50 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 3, s_25); /* <-, line 53 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 3, s_26); /* <-, line 54 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 3, s_27); /* <-, line 55 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 3, s_28); /* <-, line 56 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 4, s_29); /* <-, line 57 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 4, s_30); /* <-, line 58 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 3, s_31); /* <-, line 59 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 4, s_32); /* <-, line 60 */
                if (ret < 0) return ret;
            }
            break;
        case 19:
            {   int ret = slice_from_s(z, 3, s_33); /* <-, line 63 */
                if (ret < 0) return ret;
            }
            break;
        case 20:
            {   int ret = slice_from_s(z, 3, s_34); /* <-, line 64 */
                if (ret < 0) return ret;
            }
            break;
        case 21:
            {   int ret = slice_from_s(z, 3, s_35); /* <-, line 65 */
                if (ret < 0) return ret;
            }
            break;
        case 22:
            {   int ret = slice_from_s(z, 3, s_36); /* <-, line 66 */
                if (ret < 0) return ret;
            }
            break;
        case 23:
            {   int ret = slice_from_s(z, 4, s_37); /* <-, line 67 */
                if (ret < 0) return ret;
            }
            break;
        case 24:
            {   int ret = slice_from_s(z, 4, s_38); /* <-, line 68 */
                if (ret < 0) return ret;
            }
            break;
        case 25:
            {   int ret = slice_from_s(z, 3, s_39); /* <-, line 69 */
                if (ret < 0) return ret;
            }
            break;
        case 26:
            {   int ret = slice_from_s(z, 4, s_40); /* <-, line 70 */
                if (ret < 0) return ret;
            }
            break;
        case 27:
            {   int ret = slice_from_s(z, 4, s_41); /* <-, line 71 */
                if (ret < 0) return ret;
            }
            break;
        case 28:
            {   int ret = slice_from_s(z, 3, s_42); /* <-, line 74 */
                if (ret < 0) return ret;
            }
            break;
        case 29:
            {   int ret = slice_from_s(z, 3, s_43); /* <-, line 75 */
                if (ret < 0) return ret;
            }
            break;
        case 30:
            {   int ret = slice_from_s(z, 3, s_44); /* <-, line 76 */
                if (ret < 0) return ret;
            }
            break;
        case 31:
            {   int ret = slice_from_s(z, 4, s_45); /* <-, line 77 */
                if (ret < 0) return ret;
            }
            break;
        case 32:
            {   int ret = slice_from_s(z, 4, s_46); /* <-, line 78 */
                if (ret < 0) return ret;
            }
            break;
        case 33:
            {   int ret = slice_from_s(z, 3, s_47); /* <-, line 79 */
                if (ret < 0) return ret;
            }
            break;
        case 34:
            {   int ret = slice_from_s(z, 3, s_48); /* <-, line 80 */
                if (ret < 0) return ret;
            }
            break;
        case 35:
            {   int ret = slice_from_s(z, 4, s_49); /* <-, line 81 */
                if (ret < 0) return ret;
            }
            break;
        case 36:
            {   int ret = slice_from_s(z, 4, s_50); /* <-, line 82 */
                if (ret < 0) return ret;
            }
            break;
        case 37:
            {   int ret = slice_from_s(z, 6, s_51); /* <-, line 85 */
                if (ret < 0) return ret;
            }
            break;
        case 38:
            {   int ret = slice_from_s(z, 6, s_52); /* <-, line 86 */
                if (ret < 0) return ret;
            }
            break;
        case 39:
            {   int ret = slice_from_s(z, 5, s_53); /* <-, line 87 */
                if (ret < 0) return ret;
            }
            break;
        case 40:
            {   int ret = slice_from_s(z, 4, s_54); /* <-, line 88 */
                if (ret < 0) return ret;
            }
            break;
        case 41:
            {   int ret = slice_from_s(z, 4, s_55); /* <-, line 89 */
                if (ret < 0) return ret;
            }
            break;
        case 42:
            {   int ret = slice_from_s(z, 6, s_56); /* <-, line 90 */
                if (ret < 0) return ret;
            }
            break;
        case 43:
            {   int ret = slice_from_s(z, 5, s_57); /* <-, line 91 */
                if (ret < 0) return ret;
            }
            break;
        case 44:
            {   int ret = slice_from_s(z, 2, s_58); /* <-, line 94 */
                if (ret < 0) return ret;
            }
            break;
        case 45:
            {   int ret = slice_from_s(z, 3, s_59); /* <-, line 95 */
                if (ret < 0) return ret;
            }
            break;
        case 46:
            {   int ret = slice_from_s(z, 2, s_60); /* <-, line 96 */
                if (ret < 0) return ret;
            }
            break;
        case 47:
            {   int ret = slice_from_s(z, 6, s_61); /* <-, line 97 */
                if (ret < 0) return ret;
            }
            break;
        case 48:
            {   int ret = slice_from_s(z, 2, s_62); /* <-, line 98 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1b(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 103 */
    if (z->c - 2 <= z->lb || (z->p[z->c - 1] != 105 && z->p[z->c - 1] != 109)) return 0;
    among_var = find_among_b(z, a_3, 24); /* substring, line 103 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 103 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 4, s_63); /* <-, line 104 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_64); /* <-, line 105 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 3, s_65); /* <-, line 106 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_66); /* <-, line 107 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_67); /* <-, line 108 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 4, s_68); /* <-, line 109 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 5, s_69); /* <-, line 110 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 4, s_70); /* <-, line 111 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 5, s_71); /* <-, line 112 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 6, s_72); /* <-, line 113 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 4, s_73); /* <-, line 114 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 5, s_74); /* <-, line 115 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 4, s_75); /* <-, line 116 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 4, s_76); /* <-, line 117 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 4, s_77); /* <-, line 118 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 4, s_78); /* <-, line 119 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 5, s_79); /* <-, line 120 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 5, s_80); /* <-, line 121 */
                if (ret < 0) return ret;
            }
            break;
        case 19:
            {   int ret = slice_from_s(z, 4, s_81); /* <-, line 122 */
                if (ret < 0) return ret;
            }
            break;
        case 20:
            {   int ret = slice_from_s(z, 5, s_82); /* <-, line 123 */
                if (ret < 0) return ret;
            }
            break;
        case 21:
            {   int ret = slice_from_s(z, 4, s_83); /* <-, line 124 */
                if (ret < 0) return ret;
            }
            break;
        case 22:
            {   int ret = slice_from_s(z, 5, s_84); /* <-, line 125 */
                if (ret < 0) return ret;
            }
            break;
        case 23:
            {   int ret = slice_from_s(z, 4, s_85); /* <-, line 126 */
                if (ret < 0) return ret;
            }
            break;
        case 24:
            {   int ret = slice_from_s(z, 4, s_86); /* <-, line 127 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) {
    {   int c1 = z->c; /* do, line 133 */
        {   int ret = r_prefixes(z);
            if (ret == 0) goto lab0; /* call prefixes, line 133 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 135 */

    {   int m2 = z->l - z->c; (void)m2; /* do, line 136 */
        {   int ret = r_Step_1a(z);
            if (ret == 0) goto lab1; /* call Step_1a, line 136 */
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    z->c = z->lb;
    z->lb = z->c; z->c = z->l; /* backwards, line 138 */

    {   int m3 = z->l - z->c; (void)m3; /* do, line 139 */
        {   int ret = r_Step_1b(z);
            if (ret == 0) goto lab2; /* call Step_1b, line 139 */
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    z->c = z->lb;
    {   int c4 = z->c; /* do, line 141 */
        {   int ret = r_exceptions(z);
            if (ret == 0) goto lab3; /* call exceptions, line 141 */
            if (ret < 0) return ret;
        }
    lab3:
        z->c = c4;
    }
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 0, 0); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }



/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int H_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_exception2(struct SN_env * z);
static int r_exception1(struct SN_env * z);
static int r_Step_5(struct SN_env * z);
static int r_Step_4(struct SN_env * z);
static int r_Step_3(struct SN_env * z);
static int r_Step_2(struct SN_env * z);
static int r_Step_1c(struct SN_env * z);
static int r_Step_1b(struct SN_env * z);
static int r_Step_1a(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_shortv(struct SN_env * z);
static int r_mark_regions(struct SN_env * z);
static int r_postlude(struct SN_env * z);
static int r_prelude(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * H_create_env(void);
extern void H_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[5] = { 'a', 'r', 's', 'e', 'n' };
static const symbol s_0_1[6] = { 'c', 'o', 'm', 'm', 'u', 'n' };
static const symbol s_0_2[5] = { 'g', 'e', 'n', 'e', 'r' };

static const struct among a_0[3] =
{
/*  0 */ { 5, s_0_0, -1, -1, 0},
/*  1 */ { 6, s_0_1, -1, -1, 0},
/*  2 */ { 5, s_0_2, -1, -1, 0}
};

static const symbol s_1_0[1] = { '\'' };
static const symbol s_1_1[3] = { '\'', 's', '\'' };
static const symbol s_1_2[2] = { '\'', 's' };

static const struct among a_1[3] =
{
/*  0 */ { 1, s_1_0, -1, 1, 0},
/*  1 */ { 3, s_1_1, 0, 1, 0},
/*  2 */ { 2, s_1_2, -1, 1, 0}
};

static const symbol s_2_0[3] = { 'i', 'e', 'd' };
static const symbol s_2_1[6] = { 'a', 'l', 'a', 'b', 'y', 'm' };
static const symbol s_2_2[5] = { 'a', 'l', 'b', 'y', 'm' };
static const symbol s_2_3[1] = { 's' };
static const symbol s_2_4[3] = { 'i', 'e', 's' };
static const symbol s_2_5[4] = { 's', 's', 'e', 's' };
static const symbol s_2_6[2] = { 's', 's' };
static const symbol s_2_7[2] = { 'u', 's' };

static const struct among a_2[8] =
{
/*  0 */ { 3, s_2_0, -1, 4, 0},
/*  1 */ { 6, s_2_1, -1, 2, 0},
/*  2 */ { 5, s_2_2, -1, 1, 0},
/*  3 */ { 1, s_2_3, -1, 5, 0},
/*  4 */ { 3, s_2_4, 3, 4, 0},
/*  5 */ { 4, s_2_5, 3, 3, 0},
/*  6 */ { 2, s_2_6, 3, -1, 0},
/*  7 */ { 2, s_2_7, 3, -1, 0}
};

static const symbol s_3_1[2] = { 'b', 'b' };
static const symbol s_3_2[2] = { 'd', 'd' };
static const symbol s_3_3[2] = { 'f', 'f' };
static const symbol s_3_4[2] = { 'g', 'g' };
static const symbol s_3_5[2] = { 'b', 'l' };
static const symbol s_3_6[2] = { 'm', 'm' };
static const symbol s_3_7[2] = { 'n', 'n' };
static const symbol s_3_8[2] = { 'p', 'p' };
static const symbol s_3_9[2] = { 'r', 'r' };
static const symbol s_3_10[2] = { 'a', 't' };
static const symbol s_3_11[2] = { 't', 't' };
static const symbol s_3_12[2] = { 'i', 'z' };

static const struct among a_3[13] =
{
/*  0 */ { 0, 0, -1, 3, 0},
/*  1 */ { 2, s_3_1, 0, 2, 0},
/*  2 */ { 2, s_3_2, 0, 2, 0},
/*  3 */ { 2, s_3_3, 0, 2, 0},
/*  4 */ { 2, s_3_4, 0, 2, 0},
/*  5 */ { 2, s_3_5, 0, 1, 0},
/*  6 */ { 2, s_3_6, 0, 2, 0},
/*  7 */ { 2, s_3_7, 0, 2, 0},
/*  8 */ { 2, s_3_8, 0, 2, 0},
/*  9 */ { 2, s_3_9, 0, 2, 0},
/* 10 */ { 2, s_3_10, 0, 1, 0},
/* 11 */ { 2, s_3_11, 0, 2, 0},
/* 12 */ { 2, s_3_12, 0, 1, 0}
};

static const symbol s_4_0[2] = { 'e', 'd' };
static const symbol s_4_1[3] = { 'e', 'e', 'd' };
static const symbol s_4_2[3] = { 'i', 'n', 'g' };
static const symbol s_4_3[4] = { 'e', 'd', 'l', 'y' };
static const symbol s_4_4[5] = { 'e', 'e', 'd', 'l', 'y' };
static const symbol s_4_5[5] = { 'i', 'n', 'g', 'l', 'y' };

static const struct among a_4[6] =
{
/*  0 */ { 2, s_4_0, -1, 2, 0},
/*  1 */ { 3, s_4_1, 0, 1, 0},
/*  2 */ { 3, s_4_2, -1, 2, 0},
/*  3 */ { 4, s_4_3, -1, 2, 0},
/*  4 */ { 5, s_4_4, 3, 1, 0},
/*  5 */ { 5, s_4_5, -1, 2, 0}
};

static const symbol s_5_0[4] = { 'a', 'n', 'c', 'i' };
static const symbol s_5_1[4] = { 'e', 'n', 'c', 'i' };
static const symbol s_5_2[3] = { 'o', 'g', 'i' };
static const symbol s_5_3[2] = { 'l', 'i' };
static const symbol s_5_4[3] = { 'b', 'l', 'i' };
static const symbol s_5_5[4] = { 'a', 'b', 'l', 'i' };
static const symbol s_5_6[4] = { 'a', 'l', 'l', 'i' };
static const symbol s_5_7[5] = { 'f', 'u', 'l', 'l', 'i' };
static const symbol s_5_8[6] = { 'l', 'e', 's', 's', 'l', 'i' };
static const symbol s_5_9[5] = { 'o', 'u', 's', 'l', 'i' };
static const symbol s_5_10[5] = { 'e', 'n', 't', 'l', 'i' };
static const symbol s_5_11[5] = { 'a', 'l', 'i', 't', 'i' };
static const symbol s_5_12[6] = { 'b', 'i', 'l', 'i', 't', 'i' };
static const symbol s_5_13[5] = { 'i', 'v', 'i', 't', 'i' };
static const symbol s_5_14[6] = { 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_5_15[7] = { 'a', 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_5_16[5] = { 'a', 'l', 'i', 's', 'm' };
static const symbol s_5_17[5] = { 'a', 'l', 'b', 'y', 'm' };
static const symbol s_5_18[5] = { 'a', 't', 'i', 'o', 'n' };
static const symbol s_5_19[7] = { 'i', 'z', 'a', 't', 'i', 'o', 'n' };
static const symbol s_5_20[4] = { 'i', 'z', 'e', 'r' };
static const symbol s_5_21[4] = { 'a', 't', 'o', 'r' };
static const symbol s_5_22[7] = { 'i', 'v', 'e', 'n', 'e', 's', 's' };
static const symbol s_5_23[7] = { 'f', 'u', 'l', 'n', 'e', 's', 's' };
static const symbol s_5_24[7] = { 'o', 'u', 's', 'n', 'e', 's', 's' };

static const struct among a_5[25] =
{
/*  0 */ { 4, s_5_0, -1, 3, 0},
/*  1 */ { 4, s_5_1, -1, 2, 0},
/*  2 */ { 3, s_5_2, -1, 13, 0},
/*  3 */ { 2, s_5_3, -1, 16, 0},
/*  4 */ { 3, s_5_4, 3, 12, 0},
/*  5 */ { 4, s_5_5, 4, 4, 0},
/*  6 */ { 4, s_5_6, 3, 8, 0},
/*  7 */ { 5, s_5_7, 3, 14, 0},
/*  8 */ { 6, s_5_8, 3, 15, 0},
/*  9 */ { 5, s_5_9, 3, 10, 0},
/* 10 */ { 5, s_5_10, 3, 5, 0},
/* 11 */ { 5, s_5_11, -1, 8, 0},
/* 12 */ { 6, s_5_12, -1, 12, 0},
/* 13 */ { 5, s_5_13, -1, 11, 0},
/* 14 */ { 6, s_5_14, -1, 1, 0},
/* 15 */ { 7, s_5_15, 14, 7, 0},
/* 16 */ { 5, s_5_16, -1, 8, 0},
/* 17 */ { 5, s_5_17, -1, 17, 0},
/* 18 */ { 5, s_5_18, -1, 7, 0},
/* 19 */ { 7, s_5_19, 18, 6, 0},
/* 20 */ { 4, s_5_20, -1, 6, 0},
/* 21 */ { 4, s_5_21, -1, 7, 0},
/* 22 */ { 7, s_5_22, -1, 11, 0},
/* 23 */ { 7, s_5_23, -1, 9, 0},
/* 24 */ { 7, s_5_24, -1, 10, 0}
};

static const symbol s_6_0[5] = { 'i', 'c', 'a', 't', 'e' };
static const symbol s_6_1[5] = { 'a', 't', 'i', 'v', 'e' };
static const symbol s_6_2[5] = { 'a', 'l', 'i', 'z', 'e' };
static const symbol s_6_3[5] = { 'i', 'c', 'i', 't', 'i' };
static const symbol s_6_4[4] = { 'i', 'c', 'a', 'l' };
static const symbol s_6_5[6] = { 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_6_6[7] = { 'a', 't', 'i', 'o', 'n', 'a', 'l' };
static const symbol s_6_7[3] = { 'f', 'u', 'l' };
static const symbol s_6_8[4] = { 'n', 'e', 's', 's' };

static const struct among a_6[9] =
{
/*  0 */ { 5, s_6_0, -1, 4, 0},
/*  1 */ { 5, s_6_1, -1, 6, 0},
/*  2 */ { 5, s_6_2, -1, 3, 0},
/*  3 */ { 5, s_6_3, -1, 4, 0},
/*  4 */ { 4, s_6_4, -1, 4, 0},
/*  5 */ { 6, s_6_5, -1, 1, 0},
/*  6 */ { 7, s_6_6, 5, 2, 0},
/*  7 */ { 3, s_6_7, -1, 5, 0},
/*  8 */ { 4, s_6_8, -1, 5, 0}
};

static const symbol s_7_0[2] = { 'i', 'c' };
static const symbol s_7_1[4] = { 'a', 'n', 'c', 'e' };
static const symbol s_7_2[4] = { 'e', 'n', 'c', 'e' };
static const symbol s_7_3[4] = { 'a', 'b', 'l', 'e' };
static const symbol s_7_4[4] = { 'i', 'b', 'l', 'e' };
static const symbol s_7_5[3] = { 'a', 't', 'e' };
static const symbol s_7_6[3] = { 'i', 'v', 'e' };
static const symbol s_7_7[3] = { 'i', 'z', 'e' };
static const symbol s_7_8[3] = { 'i', 't', 'i' };
static const symbol s_7_9[2] = { 'a', 'l' };
static const symbol s_7_10[3] = { 'i', 's', 'm' };
static const symbol s_7_11[3] = { 'i', 'o', 'n' };
static const symbol s_7_12[2] = { 'e', 'r' };
static const symbol s_7_13[3] = { 'o', 'u', 's' };
static const symbol s_7_14[3] = { 'a', 'n', 't' };
static const symbol s_7_15[3] = { 'e', 'n', 't' };
static const symbol s_7_16[4] = { 'm', 'e', 'n', 't' };
static const symbol s_7_17[5] = { 'e', 'm', 'e', 'n', 't' };

static const struct among a_7[18] =
{
/*  0 */ { 2, s_7_0, -1, 1, 0},
/*  1 */ { 4, s_7_1, -1, 1, 0},
/*  2 */ { 4, s_7_2, -1, 1, 0},
/*  3 */ { 4, s_7_3, -1, 1, 0},
/*  4 */ { 4, s_7_4, -1, 1, 0},
/*  5 */ { 3, s_7_5, -1, 1, 0},
/*  6 */ { 3, s_7_6, -1, 1, 0},
/*  7 */ { 3, s_7_7, -1, 1, 0},
/*  8 */ { 3, s_7_8, -1, 1, 0},
/*  9 */ { 2, s_7_9, -1, 1, 0},
/* 10 */ { 3, s_7_10, -1, 1, 0},
/* 11 */ { 3, s_7_11, -1, 2, 0},
/* 12 */ { 2, s_7_12, -1, 1, 0},
/* 13 */ { 3, s_7_13, -1, 1, 0},
/* 14 */ { 3, s_7_14, -1, 1, 0},
/* 15 */ { 3, s_7_15, -1, 1, 0},
/* 16 */ { 4, s_7_16, 15, 1, 0},
/* 17 */ { 5, s_7_17, 16, 1, 0}
};

static const symbol s_8_0[1] = { 'e' };
static const symbol s_8_1[1] = { 'l' };

static const struct among a_8[2] =
{
/*  0 */ { 1, s_8_0, -1, 1, 0},
/*  1 */ { 1, s_8_1, -1, 2, 0}
};

static const symbol s_9_0[7] = { 's', 'u', 'c', 'c', 'e', 'e', 'd' };
static const symbol s_9_1[7] = { 'p', 'r', 'o', 'c', 'e', 'e', 'd' };
static const symbol s_9_2[6] = { 'e', 'x', 'c', 'e', 'e', 'd' };
static const symbol s_9_3[7] = { 'c', 'a', 'n', 'n', 'i', 'n', 'g' };
static const symbol s_9_4[6] = { 'i', 'n', 'n', 'i', 'n', 'g' };
static const symbol s_9_5[7] = { 'e', 'a', 'r', 'r', 'i', 'n', 'g' };
static const symbol s_9_6[7] = { 'h', 'e', 'r', 'r', 'i', 'n', 'g' };
static const symbol s_9_7[6] = { 'o', 'u', 't', 'i', 'n', 'g' };

static const struct among a_9[8] =
{
/*  0 */ { 7, s_9_0, -1, -1, 0},
/*  1 */ { 7, s_9_1, -1, -1, 0},
/*  2 */ { 6, s_9_2, -1, -1, 0},
/*  3 */ { 7, s_9_3, -1, -1, 0},
/*  4 */ { 6, s_9_4, -1, -1, 0},
/*  5 */ { 7, s_9_5, -1, -1, 0},
/*  6 */ { 7, s_9_6, -1, -1, 0},
/*  7 */ { 6, s_9_7, -1, -1, 0}
};

static const symbol s_10_0[5] = { 'a', 'n', 'd', 'e', 's' };
static const symbol s_10_1[5] = { 'a', 't', 'l', 'a', 's' };
static const symbol s_10_2[4] = { 'b', 'i', 'a', 's' };
static const symbol s_10_3[6] = { 'c', 'o', 's', 'm', 'o', 's' };
static const symbol s_10_4[5] = { 'd', 'y', 'i', 'n', 'g' };
static const symbol s_10_5[5] = { 'e', 'a', 'r', 'l', 'y' };
static const symbol s_10_6[6] = { 'g', 'e', 'n', 't', 'l', 'y' };
static const symbol s_10_7[4] = { 'h', 'o', 'w', 'e' };
static const symbol s_10_8[4] = { 'i', 'd', 'l', 'y' };
static const symbol s_10_9[5] = { 'l', 'y', 'i', 'n', 'g' };
static const symbol s_10_10[4] = { 'n', 'e', 'w', 's' };
static const symbol s_10_11[4] = { 'o', 'n', 'l', 'y' };
static const symbol s_10_12[6] = { 's', 'i', 'n', 'g', 'l', 'y' };
static const symbol s_10_13[5] = { 's', 'k', 'i', 'e', 's' };
static const symbol s_10_14[4] = { 's', 'k', 'i', 's' };
static const symbol s_10_15[3] = { 's', 'k', 'y' };
static const symbol s_10_16[5] = { 't', 'y', 'i', 'n', 'g' };
static const symbol s_10_17[4] = { 'u', 'g', 'l', 'y' };

static const struct among a_10[18] =
{
/*  0 */ { 5, s_10_0, -1, -1, 0},
/*  1 */ { 5, s_10_1, -1, -1, 0},
/*  2 */ { 4, s_10_2, -1, -1, 0},
/*  3 */ { 6, s_10_3, -1, -1, 0},
/*  4 */ { 5, s_10_4, -1, 3, 0},
/*  5 */ { 5, s_10_5, -1, 9, 0},
/*  6 */ { 6, s_10_6, -1, 7, 0},
/*  7 */ { 4, s_10_7, -1, -1, 0},
/*  8 */ { 4, s_10_8, -1, 6, 0},
/*  9 */ { 5, s_10_9, -1, 4, 0},
/* 10 */ { 4, s_10_10, -1, -1, 0},
/* 11 */ { 4, s_10_11, -1, 10, 0},
/* 12 */ { 6, s_10_12, -1, 11, 0},
/* 13 */ { 5, s_10_13, -1, 2, 0},
/* 14 */ { 4, s_10_14, -1, 1, 0},
/* 15 */ { 3, s_10_15, -1, -1, 0},
/* 16 */ { 5, s_10_16, -1, 5, 0},
/* 17 */ { 4, s_10_17, -1, 8, 0}
};

static const unsigned char g_v[] = { 17, 65, 16, 1 };

static const unsigned char g_v_WXY[] = { 1, 17, 65, 208, 1 };

static const unsigned char g_valid_LI[] = { 55, 141, 2 };

static const symbol s_0[] = { '\'' };
static const symbol s_1[] = { 'y' };
static const symbol s_2[] = { 'Y' };
static const symbol s_3[] = { 'y' };
static const symbol s_4[] = { 'Y' };
static const symbol s_5[] = { 'e', 'c' };
static const symbol s_6[] = { 'e', 'c' };
static const symbol s_7[] = { 's', 's' };
static const symbol s_8[] = { 'i' };
static const symbol s_9[] = { 'i', 'e' };
static const symbol s_10[] = { 'e', 'e' };
static const symbol s_11[] = { 'e' };
static const symbol s_12[] = { 'e' };
static const symbol s_13[] = { 'y' };
static const symbol s_14[] = { 'Y' };
static const symbol s_15[] = { 'i' };
static const symbol s_16[] = { 't', 'i', 'o', 'n' };
static const symbol s_17[] = { 'e', 'n', 'c', 'e' };
static const symbol s_18[] = { 'a', 'n', 'c', 'e' };
static const symbol s_19[] = { 'a', 'b', 'l', 'e' };
static const symbol s_20[] = { 'e', 'n', 't' };
static const symbol s_21[] = { 'i', 'z', 'e' };
static const symbol s_22[] = { 'a', 't', 'e' };
static const symbol s_23[] = { 'a', 'l' };
static const symbol s_24[] = { 'f', 'u', 'l' };
static const symbol s_25[] = { 'o', 'u', 's' };
static const symbol s_26[] = { 'i', 'v', 'e' };
static const symbol s_27[] = { 'b', 'l', 'e' };
static const symbol s_28[] = { 'l' };
static const symbol s_29[] = { 'o', 'g' };
static const symbol s_30[] = { 'f', 'u', 'l' };
static const symbol s_31[] = { 'l', 'e', 's', 's' };
static const symbol s_32[] = { 'e', 'c' };
static const symbol s_33[] = { 't', 'i', 'o', 'n' };
static const symbol s_34[] = { 'a', 't', 'e' };
static const symbol s_35[] = { 'a', 'l' };
static const symbol s_36[] = { 'i', 'c' };
static const symbol s_37[] = { 's' };
static const symbol s_38[] = { 't' };
static const symbol s_39[] = { 'l' };
static const symbol s_40[] = { 's', 'k', 'i' };
static const symbol s_41[] = { 's', 'k', 'y' };
static const symbol s_42[] = { 'd', 'i', 'e' };
static const symbol s_43[] = { 'l', 'i', 'e' };
static const symbol s_44[] = { 't', 'i', 'e' };
static const symbol s_45[] = { 'i', 'd', 'l' };
static const symbol s_46[] = { 'g', 'e', 'n', 't', 'l' };
static const symbol s_47[] = { 'u', 'g', 'l', 'i' };
static const symbol s_48[] = { 'e', 'a', 'r', 'l', 'i' };
static const symbol s_49[] = { 'o', 'n', 'l', 'i' };
static const symbol s_50[] = { 's', 'i', 'n', 'g', 'l' };
static const symbol s_51[] = { 'Y' };
static const symbol s_52[] = { 'y' };

static int r_prelude(struct SN_env * z) {
    z->B[0] = 0; /* unset Y_found, line 26 */
    {   int c1 = z->c; /* do, line 27 */
        z->bra = z->c; /* [, line 27 */
        if (!(eq_s(z, 1, s_0))) goto lab0;
        z->ket = z->c; /* ], line 27 */
        {   int ret = slice_del(z); /* delete, line 27 */
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* do, line 28 */
        z->bra = z->c; /* [, line 28 */
        if (!(eq_s(z, 1, s_1))) goto lab1;
        z->ket = z->c; /* ], line 28 */
        {   int ret = slice_from_s(z, 1, s_2); /* <-, line 28 */
            if (ret < 0) return ret;
        }
        z->B[0] = 1; /* set Y_found, line 28 */
    lab1:
        z->c = c2;
    }
    {   int c3 = z->c; /* do, line 29 */
        while(1) { /* repeat, line 29 */
            int c4 = z->c;
            while(1) { /* goto, line 29 */
                int c5 = z->c;
                if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab4;
                z->bra = z->c; /* [, line 29 */
                if (!(eq_s(z, 1, s_3))) goto lab4;
                z->ket = z->c; /* ], line 29 */
                z->c = c5;
                break;
            lab4:
                z->c = c5;
                {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                    if (ret < 0) goto lab3;
                    z->c = ret; /* goto, line 29 */
                }
            }
            {   int ret = slice_from_s(z, 1, s_4); /* <-, line 29 */
                if (ret < 0) return ret;
            }
            z->B[0] = 1; /* set Y_found, line 29 */
            continue;
        lab3:
            z->c = c4;
            break;
        }
        z->c = c3;
    }
    return 1;
}

static int r_mark_regions(struct SN_env * z) {
    z->I[0] = z->l;
    z->I[1] = z->l;
    {   int c1 = z->c; /* do, line 35 */
        {   int c2 = z->c; /* or, line 41 */
            if (z->c + 4 >= z->l || z->p[z->c + 4] >> 5 != 3 || !((2375680 >> (z->p[z->c + 4] & 0x1f)) & 1)) goto lab2;
            if (!(find_among(z, a_0, 3))) goto lab2; /* among, line 36 */
            goto lab1;
        lab2:
            z->c = c2;
            {    /* gopast */ /* grouping v, line 41 */
                int ret = out_grouping_U(z, g_v, 97, 121, 1);
                if (ret < 0) goto lab0;
                z->c += ret;
            }
            {    /* gopast */ /* non v, line 41 */
                int ret = in_grouping_U(z, g_v, 97, 121, 1);
                if (ret < 0) goto lab0;
                z->c += ret;
            }
        }
    lab1:
        z->I[0] = z->c; /* setmark p1, line 42 */
        {    /* gopast */ /* grouping v, line 43 */
            int ret = out_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab0;
            z->c += ret;
        }
        {    /* gopast */ /* non v, line 43 */
            int ret = in_grouping_U(z, g_v, 97, 121, 1);
            if (ret < 0) goto lab0;
            z->c += ret;
        }
        z->I[1] = z->c; /* setmark p2, line 43 */
    lab0:
        z->c = c1;
    }
    return 1;
}

static int r_shortv(struct SN_env * z) {
    {   int m1 = z->l - z->c; (void)m1; /* or, line 51 */
        if (out_grouping_b_U(z, g_v_WXY, 89, 121, 0)) goto lab1;
        if (in_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
        if (out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
        goto lab0;
    lab1:
        z->c = z->l - m1;
        if (out_grouping_b_U(z, g_v, 97, 121, 0)) return 0;
        if (in_grouping_b_U(z, g_v, 97, 121, 0)) return 0;
        if (z->c > z->lb) return 0; /* atlimit, line 52 */
    }
lab0:
    return 1;
}

static int r_R1(struct SN_env * z) {
    if (!(z->I[0] <= z->c)) return 0;
    return 1;
}

static int r_R2(struct SN_env * z) {
    if (!(z->I[1] <= z->c)) return 0;
    return 1;
}

static int r_Step_1a(struct SN_env * z) {
    int among_var;
    {   int m_keep = z->l - z->c;/* (void) m_keep;*/ /* try, line 59 */
        z->ket = z->c; /* [, line 60 */
        if (z->c <= z->lb || (z->p[z->c - 1] != 39 && z->p[z->c - 1] != 115)) { z->c = z->l - m_keep; goto lab0; }
        among_var = find_among_b(z, a_1, 3); /* substring, line 60 */
        if (!(among_var)) { z->c = z->l - m_keep; goto lab0; }
        z->bra = z->c; /* ], line 60 */
        switch(among_var) {
            case 0: { z->c = z->l - m_keep; goto lab0; }
            case 1:
                {   int ret = slice_del(z); /* delete, line 62 */
                    if (ret < 0) return ret;
                }
                break;
        }
    lab0:
        ;
    }
    z->ket = z->c; /* [, line 65 */
    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((532496 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_2, 8); /* substring, line 65 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 65 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_5); /* <-, line 66 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_6); /* <-, line 67 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_7); /* <-, line 68 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m1 = z->l - z->c; (void)m1; /* or, line 70 */
                {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2);
                    if (ret < 0) goto lab2;
                    z->c = ret; /* hop, line 70 */
                }
                {   int ret = slice_from_s(z, 1, s_8); /* <-, line 70 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m1;
                {   int ret = slice_from_s(z, 2, s_9); /* <-, line 70 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 5:
            {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                if (ret < 0) return 0;
                z->c = ret; /* next, line 71 */
            }
            {    /* gopast */ /* grouping v, line 71 */
                int ret = out_grouping_b_U(z, g_v, 97, 121, 1);
                if (ret < 0) return 0;
                z->c -= ret;
            }
            {   int ret = slice_del(z); /* delete, line 71 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_1b(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 77 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((33554576 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_4, 6); /* substring, line 77 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 77 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 79 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 2, s_10); /* <-, line 79 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m_test = z->l - z->c; /* test, line 82 */
                {    /* gopast */ /* grouping v, line 82 */
                    int ret = out_grouping_b_U(z, g_v, 97, 121, 1);
                    if (ret < 0) return 0;
                    z->c -= ret;
                }
                z->c = z->l - m_test;
            }
            {   int ret = slice_del(z); /* delete, line 82 */
                if (ret < 0) return ret;
            }
            {   int m_test = z->l - z->c; /* test, line 83 */
                if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((68514004 >> (z->p[z->c - 1] & 0x1f)) & 1)) among_var = 3; else
                among_var = find_among_b(z, a_3, 13); /* substring, line 83 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test;
            }
            switch(among_var) {
                case 0: return 0;
                case 1:
                    {   int c_keep = z->c;
                        int ret = insert_s(z, z->c, z->c, 1, s_11); /* <+, line 85 */
                        z->c = c_keep;
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    z->ket = z->c; /* [, line 88 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 88 */
                    }
                    z->bra = z->c; /* ], line 88 */
                    {   int ret = slice_del(z); /* delete, line 88 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    if (z->c != z->I[0]) return 0; /* atmark, line 89 */
                    {   int m_test = z->l - z->c; /* test, line 89 */
                        {   int ret = r_shortv(z);
                            if (ret == 0) return 0; /* call shortv, line 89 */
                            if (ret < 0) return ret;
                        }
                        z->c = z->l - m_test;
                    }
                    {   int c_keep = z->c;
                        int ret = insert_s(z, z->c, z->c, 1, s_12); /* <+, line 89 */
                        z->c = c_keep;
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
    }
    return 1;
}

static int r_Step_1c(struct SN_env * z) {
    z->ket = z->c; /* [, line 96 */
    {   int m1 = z->l - z->c; (void)m1; /* or, line 96 */
        if (!(eq_s_b(z, 1, s_13))) goto lab1;
        goto lab0;
    lab1:
        z->c = z->l - m1;
        if (!(eq_s_b(z, 1, s_14))) return 0;
    }
lab0:
    z->bra = z->c; /* ], line 96 */
    if (out_grouping_b_U(z, g_v, 97, 121, 0)) return 0;
    {   int m2 = z->l - z->c; (void)m2; /* not, line 97 */
        if (z->c > z->lb) goto lab2; /* atlimit, line 97 */
        return 0;
    lab2:
        z->c = z->l - m2;
    }
    {   int ret = slice_from_s(z, 1, s_15); /* <-, line 98 */
        if (ret < 0) return ret;
    }
    return 1;
}

static int r_Step_2(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 102 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((815616 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_5, 25); /* substring, line 102 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 102 */
    {   int ret = r_R1(z);
        if (ret == 0) return 0; /* call R1, line 102 */
        if (ret < 0) return ret;
    }
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 4, s_16); /* <-, line 103 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 4, s_17); /* <-, line 104 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 4, s_18); /* <-, line 105 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_19); /* <-, line 106 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_20); /* <-, line 107 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 3, s_21); /* <-, line 109 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 3, s_22); /* <-, line 111 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 2, s_23); /* <-, line 113 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 3, s_24); /* <-, line 114 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 3, s_25); /* <-, line 116 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 3, s_26); /* <-, line 118 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 3, s_27); /* <-, line 120 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            if (!(eq_s_b(z, 1, s_28))) return 0;
            {   int ret = slice_from_s(z, 2, s_29); /* <-, line 121 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 3, s_30); /* <-, line 122 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 4, s_31); /* <-, line 123 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            if (in_grouping_b_U(z, g_valid_LI, 99, 116, 0)) return 0;
            {   int ret = slice_del(z); /* delete, line 124 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 2, s_32); /* <-, line 125 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_3(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 130 */
    if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((528928 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_6, 9); /* substring, line 130 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 130 */
    {   int ret = r_R1(z);
        if (ret == 0) return 0; /* call R1, line 130 */
        if (ret < 0) return ret;
    }
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 4, s_33); /* <-, line 131 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_34); /* <-, line 132 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_35); /* <-, line 133 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_36); /* <-, line 135 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_del(z); /* delete, line 137 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = r_R2(z);
                if (ret == 0) return 0; /* call R2, line 139 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 139 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_4(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 144 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1864232 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_7, 18); /* substring, line 144 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 144 */
    {   int ret = r_R2(z);
        if (ret == 0) return 0; /* call R2, line 144 */
        if (ret < 0) return ret;
    }
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 147 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m1 = z->l - z->c; (void)m1; /* or, line 148 */
                if (!(eq_s_b(z, 1, s_37))) goto lab1;
                goto lab0;
            lab1:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 1, s_38))) return 0;
            }
        lab0:
            {   int ret = slice_del(z); /* delete, line 148 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_5(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 153 */
    if (z->c <= z->lb || (z->p[z->c - 1] != 101 && z->p[z->c - 1] != 108)) return 0;
    among_var = find_among_b(z, a_8, 2); /* substring, line 153 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 153 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int m1 = z->l - z->c; (void)m1; /* or, line 154 */
                {   int ret = r_R2(z);
                    if (ret == 0) goto lab1; /* call R2, line 154 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab1:
                z->c = z->l - m1;
                {   int ret = r_R1(z);
                    if (ret == 0) return 0; /* call R1, line 154 */
                    if (ret < 0) return ret;
                }
                {   int m2 = z->l - z->c; (void)m2; /* not, line 154 */
                    {   int ret = r_shortv(z);
                        if (ret == 0) goto lab2; /* call shortv, line 154 */
                        if (ret < 0) return ret;
                    }
                    return 0;
                lab2:
                    z->c = z->l - m2;
                }
            }
        lab0:
            {   int ret = slice_del(z); /* delete, line 154 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = r_R2(z);
                if (ret == 0) return 0; /* call R2, line 155 */
                if (ret < 0) return ret;
            }
            if (!(eq_s_b(z, 1, s_39))) return 0;
            {   int ret = slice_del(z); /* delete, line 155 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_exception2(struct SN_env * z) {
    z->ket = z->c; /* [, line 161 */
    if (z->c - 5 <= z->lb || (z->p[z->c - 1] != 100 && z->p[z->c - 1] != 103)) return 0;
    if (!(find_among_b(z, a_9, 8))) return 0; /* substring, line 161 */
    z->bra = z->c; /* ], line 161 */
    if (z->c > z->lb) return 0; /* atlimit, line 161 */
    return 1;
}

static int r_exception1(struct SN_env * z) {
    int among_var;
    z->bra = z->c; /* [, line 173 */
    if (z->c + 2 >= z->l || z->p[z->c + 2] >> 5 != 3 || !((42750482 >> (z->p[z->c + 2] & 0x1f)) & 1)) return 0;
    among_var = find_among(z, a_10, 18); /* substring, line 173 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 173 */
    if (z->c < z->l) return 0; /* atlimit, line 173 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 3, s_40); /* <-, line 177 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 3, s_41); /* <-, line 178 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 3, s_42); /* <-, line 179 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 3, s_43); /* <-, line 180 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 3, s_44); /* <-, line 181 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 3, s_45); /* <-, line 185 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 5, s_46); /* <-, line 186 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 4, s_47); /* <-, line 187 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 5, s_48); /* <-, line 188 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 4, s_49); /* <-, line 189 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 5, s_50); /* <-, line 190 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_postlude(struct SN_env * z) {
    if (!(z->B[0])) return 0; /* Boolean test Y_found, line 206 */
    while(1) { /* repeat, line 206 */
        int c1 = z->c;
        while(1) { /* goto, line 206 */
            int c2 = z->c;
            z->bra = z->c; /* [, line 206 */
            if (!(eq_s(z, 1, s_51))) goto lab1;
            z->ket = z->c; /* ], line 206 */
            z->c = c2;
            break;
        lab1:
            z->c = c2;
            {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                if (ret < 0) goto lab0;
                z->c = ret; /* goto, line 206 */
            }
        }
        {   int ret = slice_from_s(z, 1, s_52); /* <-, line 206 */
            if (ret < 0) return ret;
        }
        continue;
    lab0:
        z->c = c1;
        break;
    }
    return 1;
}

extern int H_stem(struct SN_env * z) {
    {   int c1 = z->c; /* or, line 210 */
        {   int ret = r_exception1(z);
            if (ret == 0) goto lab1; /* call exception1, line 210 */
            if (ret < 0) return ret;
        }
        goto lab0;
    lab1:
        z->c = c1;
        {   int c2 = z->c; /* not, line 211 */
            {   int ret = skip_utf8(z->p, z->c, 0, z->l, + 3);
                if (ret < 0) goto lab3;
                z->c = ret; /* hop, line 211 */
            }
            goto lab2;
        lab3:
            z->c = c2;
        }
        goto lab0;
    lab2:
        z->c = c1;
        {   int c3 = z->c; /* do, line 212 */
            {   int ret = r_prelude(z);
                if (ret == 0) goto lab4; /* call prelude, line 212 */
                if (ret < 0) return ret;
            }
        lab4:
            z->c = c3;
        }
        {   int c4 = z->c; /* do, line 213 */
            {   int ret = r_mark_regions(z);
                if (ret == 0) goto lab5; /* call mark_regions, line 213 */
                if (ret < 0) return ret;
            }
        lab5:
            z->c = c4;
        }
        z->lb = z->c; z->c = z->l; /* backwards, line 214 */

        {   int m5 = z->l - z->c; (void)m5; /* do, line 216 */
            {   int ret = r_Step_1a(z);
                if (ret == 0) goto lab6; /* call Step_1a, line 216 */
                if (ret < 0) return ret;
            }
        lab6:
            z->c = z->l - m5;
        }
        {   int m6 = z->l - z->c; (void)m6; /* or, line 218 */
            {   int ret = r_exception2(z);
                if (ret == 0) goto lab8; /* call exception2, line 218 */
                if (ret < 0) return ret;
            }
            goto lab7;
        lab8:
            z->c = z->l - m6;
            {   int m7 = z->l - z->c; (void)m7; /* do, line 220 */
                {   int ret = r_Step_1b(z);
                    if (ret == 0) goto lab9; /* call Step_1b, line 220 */
                    if (ret < 0) return ret;
                }
            lab9:
                z->c = z->l - m7;
            }
            {   int m8 = z->l - z->c; (void)m8; /* do, line 221 */
                {   int ret = r_Step_1c(z);
                    if (ret == 0) goto lab10; /* call Step_1c, line 221 */
                    if (ret < 0) return ret;
                }
            lab10:
                z->c = z->l - m8;
            }
            {   int m9 = z->l - z->c; (void)m9; /* do, line 223 */
                {   int ret = r_Step_2(z);
                    if (ret == 0) goto lab11; /* call Step_2, line 223 */
                    if (ret < 0) return ret;
                }
            lab11:
                z->c = z->l - m9;
            }
            {   int m10 = z->l - z->c; (void)m10; /* do, line 224 */
                {   int ret = r_Step_3(z);
                    if (ret == 0) goto lab12; /* call Step_3, line 224 */
                    if (ret < 0) return ret;
                }
            lab12:
                z->c = z->l - m10;
            }
            {   int m11 = z->l - z->c; (void)m11; /* do, line 225 */
                {   int ret = r_Step_4(z);
                    if (ret == 0) goto lab13; /* call Step_4, line 225 */
                    if (ret < 0) return ret;
                }
            lab13:
                z->c = z->l - m11;
            }
            {   int m12 = z->l - z->c; (void)m12; /* do, line 227 */
                {   int ret = r_Step_5(z);
                    if (ret == 0) goto lab14; /* call Step_5, line 227 */
                    if (ret < 0) return ret;
                }
            lab14:
                z->c = z->l - m12;
            }
        }
    lab7:
        z->c = z->lb;
        {   int c13 = z->c; /* do, line 230 */
            {   int ret = r_postlude(z);
                if (ret == 0) goto lab15; /* call postlude, line 230 */
                if (ret < 0) return ret;
            }
        lab15:
            z->c = c13;
        }
    }
lab0:
    return 1;
}

extern struct SN_env * H_create_env(void) { return SN_create_env(0, 2, 1); }

extern void H_close_env(struct SN_env * z) { SN_close_env(z, 0); }


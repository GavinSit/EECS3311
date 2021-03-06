/*
 * Class DATE_TIME_PARSER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1000 [] = {0xFF01,245,999,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1000 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1000 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1000 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1000 [] = {0xFF01,999,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1000 [] = {0xFF01,961,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_16_1000 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_17_1000 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_18_1000 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_19_1000 [] = {0xFF01,248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_20_1000 [] = {0xFF01,546,218,0xFFFF};
static const EIF_TYPE_INDEX egt_21_1000 [] = {0xFF01,158,0xFFFF};
static const EIF_TYPE_INDEX egt_22_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_23_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_24_1000 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_25_1000 [] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_26_1000 [] = {0xFF01,535,0xFF01,990,218,0xFFFF};
static const EIF_TYPE_INDEX egt_27_1000 [] = {248,0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_28_1000 [] = {248,0xFF01,232,0xFFFF};


static const struct desc_info desc_1000[] = {
	{EIF_GENERIC(NULL), 15364, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1000), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1000), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1000), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1000), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1000), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1000), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1000), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1000), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1000), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1000), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1000), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1000), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CF /*999*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1000), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13756, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13757, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1000), 13754, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_1000), 13755, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13783, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13784, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13785, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13786, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13787, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13788, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_1000), 13789, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_1000), 13790, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_1000), 13791, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_1000), 13792, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_1000), 13793, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13794, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13795, 0xFFFFFFFF},
	{EIF_GENERIC(egt_20_1000), 13796, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14002, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14003, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14004, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13987, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13988, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13989, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13990, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13808, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13993, 0xFFFFFFFF},
	{EIF_GENERIC(egt_21_1000), 6565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13769, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13770, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13771, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13774, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13780, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13781, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13782, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13779, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13778, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14005, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 14006, 48},
	{EIF_GENERIC(NULL), 13991, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13992, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13994, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13995, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13996, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13997, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13998, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13999, 0xFFFFFFFF},
	{EIF_GENERIC(egt_22_1000), 14000, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14001, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15247, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15248, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15249, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15250, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15251, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15252, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15253, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13758, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13759, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13760, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13761, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13762, 0xFFFFFFFF},
	{EIF_GENERIC(egt_23_1000), 13763, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 13772, 80},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13773, 44},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13775, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13776, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13777, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13764, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13765, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13766, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13767, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13768, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15297, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15298, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15299, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15330, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15331, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15332, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13742, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13743, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13744, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13745, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13746, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13747, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13748, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13749, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13750, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13751, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13752, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13753, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13728, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13729, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13730, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13731, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13732, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13733, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13734, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13735, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13736, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13737, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13738, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13739, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13740, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 13741, 0xFFFFFFFF},
	{EIF_GENERIC(egt_24_1000), 15184, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15185, 0xFFFFFFFF},
	{EIF_GENERIC(egt_25_1000), 15186, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15187, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15333, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 15334, 0},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15335, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15336, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15337, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15338, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15339, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 15340, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 15341, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15342, 40},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15343, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15344, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15345, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15346, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 15347, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15348, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15349, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15350, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15351, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15352, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15353, 52},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15354, 56},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15355, 60},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15356, 64},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15357, 68},
	{EIF_NON_GENERIC(0x019D /*206*/), 15358, 88},
	{EIF_NON_GENERIC(0x01D1 /*232*/), 15359, 8},
	{EIF_GENERIC(egt_26_1000), 15360, 16},
	{EIF_GENERIC(egt_27_1000), 15361, 24},
	{EIF_GENERIC(egt_28_1000), 15362, 32},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 15363, 72},
};
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 422, 999);
	IDSC(desc_1000 + 36, 410, 999);
	IDSC(desc_1000 + 50, 421, 999);
	IDSC(desc_1000 + 58, 127, 999);
	IDSC(desc_1000 + 60, 415, 999);
	IDSC(desc_1000 + 69, 408, 999);
	IDSC(desc_1000 + 81, 409, 999);
	IDSC(desc_1000 + 88, 417, 999);
	IDSC(desc_1000 + 94, 404, 999);
	IDSC(desc_1000 + 104, 405, 999);
	IDSC(desc_1000 + 107, 420, 999);
	IDSC(desc_1000 + 110, 423, 999);
	IDSC(desc_1000 + 136, 413, 999);
	IDSC(desc_1000 + 140, 412, 999);
}


#ifdef __cplusplus
}
#endif

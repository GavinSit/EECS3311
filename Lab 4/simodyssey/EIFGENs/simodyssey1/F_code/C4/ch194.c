/*
 * Code for class CHARACTER_32_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch194.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHARACTER_32_REF}.hash_code */
EIF_INTEGER_32 F1483_5608 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4108[Dtype(Current)-1482])(Current);
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.natural_32_code */
EIF_NATURAL_32 F1483_5609 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_NATURAL_32) tw1;
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_less */
EIF_BOOLEAN F1483_5613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4108[Dtype(Current)-1482])(Current);
	tu4_2 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4108[Dtype(RTCW(arg1))-1482])(arg1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_equal */
EIF_BOOLEAN F1483_5614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	tw2 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.plus */
EIF_CHARACTER_32 F1483_5615 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 + arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.minus */
EIF_CHARACTER_32 F1483_5616 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_CHARACTER_32) (EIF_NATURAL_32) (tu4_1 - arg1);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.set_item */
void F1483_5620 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	
	
	*(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_CHARACTER_32) arg1;
}

/* {CHARACTER_32_REF}.out */
EIF_REFERENCE F1483_5621 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), ((EIF_INTEGER_32) 6L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) 'U');
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '+');
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4108[Dtype(Current)-1482])(Current);
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = tu4_1;
	tr1 = F1501_6011(RTCW(tr1));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4823[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.to_character_8 */
EIF_CHARACTER_8 F1483_5624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tw1 = *(EIF_CHARACTER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	Result = (EIF_CHARACTER_8) tw1;
	RTLE;
	return Result;
}

/* {CHARACTER_32_REF}.is_character_8 */
EIF_BOOLEAN F1483_5630 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4108[Dtype(Current)-1482])(Current);
	tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 <= tu4_2);
	RTLE;
	return Result;
}

void EIF_Minit194 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

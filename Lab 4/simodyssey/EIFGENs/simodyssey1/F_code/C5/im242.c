/*
 * Code for class IMMUTABLE_STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im242.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMMUTABLE_STRING_32}.make_from_string_8 */
void F1568_7010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4766[Dtype(RTCW(arg1))-1560])(arg1);
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc5 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > loc5)) break;
		tc1 = 
			/* INLINED CODE (SPECIAL.item) */
			*((EIF_CHARACTER_8 *)RTCW(loc2) + (loc4))
			/* END INLINED CODE */;
		tw1 = (EIF_CHARACTER_32) tc1;
		F1208_3102(RTCW(loc1), tw1);
		loc3++;
		loc4++;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	F1208_3102(RTCW(loc1), tw1);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4768[Dtype(arg1)-1558]);
	F1568_7012(Current, loc1, ((EIF_INTEGER_32) 0L), ti4_2);
	RTLE;
}

/* {IMMUTABLE_STRING_32}.make_from_area_and_bounds */
void F1568_7012 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {IMMUTABLE_STRING_32}.copy */
void F1568_7014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
	}
	RTLE;
}

/* {IMMUTABLE_STRING_32}.item */
EIF_CHARACTER_32 F1568_7015 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tw2 = *((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tw2;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.code */
EIF_NATURAL_32 F1568_7017 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.item) */
	tw2 = *((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tw1 = tw2;
	Result = (EIF_NATURAL_32) tw1;
	RTLE;
	return Result;
}

/* {IMMUTABLE_STRING_32}.as_lower */
EIF_REFERENCE F1568_7021 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	/* INLINED CODE (SPECIAL.copy_data) */
	memmove((EIF_CHARACTER_32 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)*(EIF_REFERENCE *)(Current) + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L)));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L)));
	/* END INLINED CODE */
	;
	F1564_6892(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L)));
	tr1 = RTLNSMART(dftype);
	F1568_7012(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_32}.substring */
EIF_REFERENCE F1568_7023 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)*(EIF_REFERENCE *)(Current) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + loc2);
		/* END INLINED CODE */
		;
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		F1208_3102(RTCW(loc1), tw1);
		tr1 = RTLNSMART(dftype);
		F1568_7012(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) RTOUCR(117,F1568_7028, (Current));
	}/* NOTREACHED */
	
}

/* {IMMUTABLE_STRING_32}.is_empty */
EIF_BOOLEAN F1568_7026 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ((EIF_INTEGER_32) 0L));
}

/* {IMMUTABLE_STRING_32}.new_string */
EIF_REFERENCE F1568_7027 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F1564_6847(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {IMMUTABLE_STRING_32}.empty_string */
static EIF_REFERENCE F1568_7028_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(117)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1568_7028 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(117,F1568_7028_body,(Current));
}

/* {IMMUTABLE_STRING_32}.area_lower */
EIF_INTEGER_32 F1568_7029 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


/* {IMMUTABLE_STRING_32}.correct_mismatch */
void F1568_7030 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = RTOUCR(2,F948_3857, (Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr1 = F999_3929(RTCW(tr1), tr2);
		loc1 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1207,1484,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTRV(typres0,loc1);
		}
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	}
	RTLE;
}

void EIF_Minit242 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

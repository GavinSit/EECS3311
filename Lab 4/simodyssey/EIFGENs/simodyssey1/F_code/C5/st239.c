/*
 * Code for class STRING_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st239.h"
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

/* {STRING_32}.make_from_string_general */
void F1565_6898 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1563, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F1564_6849(Current, loc1);
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		F1564_6847(Current, ti4_1);
		F1565_6937(Current, arg1);
	}
	RTLE;
}

/* {STRING_32}.item */
EIF_CHARACTER_32 F1565_6904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tw2 = *((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	Result = tw2;
	RTLE;
	return Result;
}

/* {STRING_32}.code */
EIF_NATURAL_32 F1565_6906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tw2 = *((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	/* END INLINED CODE */
	tw1 = tw2;
	ti4_1 = (EIF_INTEGER_32) (tw1);
	Result = (EIF_NATURAL_32) ti4_1;
	RTLE;
	return Result;
}

/* {STRING_32}.extendible */
EIF_BOOLEAN F1565_6909 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {STRING_32}.fill_blank */
void F1565_6917 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	F1564_6886(Current, tw1);
	RTLE;
}

/* {STRING_32}.put */
void F1565_6925 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.put_code */
void F1565_6926 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tw1 = (EIF_CHARACTER_32) arg1;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)))) = tw1;
	/* END INLINED CODE */
	;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.prepend_character */
void F1565_6929 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == F1564_6866(Current))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_2 = F818_2556(Current);
		F1565_6969(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	}
	loc1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_32 *)RTCW(loc1) + (((EIF_INTEGER_32) 1L)),(EIF_CHARACTER_32 *)RTCW(loc1) + ((EIF_INTEGER_32) 0L), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_));
	RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 1L) + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_));
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(loc1) + (((EIF_INTEGER_32) 0L))) = arg1;
	/* END INLINED CODE */
	;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.append_string_general */
void F1565_6937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1563, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F1565_6938(Current, loc1);
	} else {
		F1560_6672(Current, arg1);
	}
	RTLE;
}

/* {STRING_32}.append */
void F1565_6938 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		if ((EIF_BOOLEAN) (loc3 > F1564_6866(Current))) {
			ti4_1 = F818_2556(Current);
			F1565_6969(Current, (EIF_INTEGER_32) (loc3 + ti4_1));
		}
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)RTCW(tr1) + (loc1),(EIF_CHARACTER_32 *)tr2 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)loc2);
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), loc1 + loc2);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_32}.plus */
EIF_REFERENCE F1565_6940 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	Result = F1565_6987(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2));
	F1565_6938(RTCW(Result), Current);
	F1565_6937(RTCW(Result), arg1);
	RTLE;
	return Result;
}

/* {STRING_32}.append_character */
void F1565_6952 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F1564_6866(Current))) {
		ti4_1 = F818_2556(Current);
		F1565_6969(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.extend */
void F1565_6953 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(loc1 == F1564_6866(Current))) {
		ti4_1 = F818_2556(Current);
		F1565_6969(Current, (EIF_INTEGER_32) (loc1 + ti4_1));
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(tr1) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.insert_string */
void F1565_6956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4910[Dtype(arg1)-1563]);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		if ((EIF_BOOLEAN) (loc2 > F1564_6866(Current))) {
			ti4_1 = F818_2556(Current);
			F1565_6969(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
		}
		loc4 = *(EIF_REFERENCE *)(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		/* INLINED CODE (SPECIAL.overlapping_move) */
		memmove((EIF_CHARACTER_32 *)RTCW(loc4) + ((EIF_INTEGER_32) (loc1 + loc3)),(EIF_CHARACTER_32 *)RTCW(loc4) + loc1, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), (EIF_INTEGER_32) (loc1 + loc3) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
		/* END INLINED CODE */
		;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4908[Dtype(RTCW(arg1))-1564])(arg1);
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)RTCW(loc4) + (loc1),(EIF_CHARACTER_32 *)tr1 + ti4_1, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)loc3);
		RT_SPECIAL_COUNT(loc4) = eif_max_int32(RT_SPECIAL_COUNT(loc4), loc1 + loc3);
		/* END INLINED CODE */
		;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		F1560_6659(Current);
	}
	RTLE;
}

/* {STRING_32}.insert_character */
void F1565_6957 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2);
	if ((EIF_BOOLEAN) (loc2 > F1564_6866(Current))) {
		ti4_1 = F818_2556(Current);
		F1565_6969(Current, (EIF_INTEGER_32) (loc2 + ti4_1));
	}
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_32 *)RTCW(loc3) + ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_32 *)RTCW(loc3) + loc1, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
	RT_SPECIAL_COUNT(loc3) = eif_max_int32(RT_SPECIAL_COUNT(loc3), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1));
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_CHARACTER_32 *)RTCW(loc3) + (loc1)) = arg1;
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.remove */
void F1565_6958 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	tr1 = *(EIF_REFERENCE *)(Current);
	/* INLINED CODE (SPECIAL.overlapping_move) */
	memmove((EIF_CHARACTER_32 *)RTCW(tr1) + ((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))),(EIF_CHARACTER_32 *)RTCW(tr1) + arg1, (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) (loc1 - arg1));
	RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) + (EIF_INTEGER_32) (loc1 - arg1));
	/* END INLINED CODE */
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.prune_all */
void F1565_6963 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		/* INLINED CODE (SPECIAL.item) */
		tw2 = *((EIF_CHARACTER_32 *)RTCW(loc4) + (loc1));
		/* END INLINED CODE */
		loc5 = tw2;
		if ((EIF_BOOLEAN)(loc5 != arg1)) {
			/* INLINED CODE (SPECIAL.put) */
			*((EIF_CHARACTER_32 *)RTCW(loc4) + (loc2)) = loc5;
			/* END INLINED CODE */
			;
			loc2++;
		}
		loc1++;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.wipe_out */
void F1565_6966 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.adapt_size */
void F1565_6968 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1565_6969(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_));
}

/* {STRING_32}.resize */
void F1565_6969 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	tr1 = F1208_3118(RTCW(tr1), tw1, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STRING_32}.grow */
void F1565_6970 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > F1564_6866(Current))) {
		F1565_6969(Current, arg1);
	}
	RTLE;
}

/* {STRING_32}.to_lower */
void F1565_6978 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1564_6892(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L)));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.to_upper */
void F1565_6979 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1564_6893(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L)));
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.linear_representation */
EIF_REFERENCE F1565_6980 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,964,1484,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 964, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F1564_6866(Current);
	F965_4073(RTCW(loc1), ti4_1);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) break;
		tw1 = F1565_6904(Current, loc2);
		F965_4114(RTCW(loc1), tw1);
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {STRING_32}.substring */
EIF_REFERENCE F1565_6984 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		Result = F1565_6987(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		/* INLINED CODE (SPECIAL.copy_data) */
		memmove((EIF_CHARACTER_32 *)RTCW(tr1) + (((EIF_INTEGER_32) 0L)),(EIF_CHARACTER_32 *)*(EIF_REFERENCE *)(Current) + (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (rt_uint_ptr)sizeof(EIF_CHARACTER_32) * (rt_uint_ptr)(EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		/* END INLINED CODE */
		;
		F1565_6986(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		Result = F1565_6987(Current, ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {STRING_32}.set_count */
void F1565_6986 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	F1560_6659(Current);
	RTLE;
}

/* {STRING_32}.new_string */
EIF_REFERENCE F1565_6987 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(Dftype(Current));
	F1564_6847(RTCW(tr1), arg1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {STRING_32}.correct_mismatch */
void F1565_6988 (EIF_REFERENCE Current)
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

void EIF_Minit239 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

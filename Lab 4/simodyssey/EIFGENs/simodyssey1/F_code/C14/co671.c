/*
 * Code for class COLLECTION [INTEGER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co671.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLLECTION}.fill */
void F645_2474 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(arg1))-715])(arg1);
	F959_4104(RTCW(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2218[dtype-818])(Current)) {
			tb2 = F860_3270(RTCW(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		ti1_1 = F959_4078(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, (EIF_REFERENCE) &ti1_1);
		F959_4106(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit671 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

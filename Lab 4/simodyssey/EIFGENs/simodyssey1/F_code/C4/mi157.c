/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi157.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F948_3856 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("Mismatch: ",10,1538098208);
	F1559_6607(RTCW(loc1), tr1);
	loc2 = RTLNS(eif_new_type(462, 0x01).id, 462, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F1423_5288(RTCV(F1_5(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
	F463_1401(RTCW(loc2), loc1);
	RTLE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F948_3857_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(2)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1007, 0x01).id, 1007, _OBJSIZ_9_3_0_7_0_0_0_0_);
	F1008_4043(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F948_3857 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(2,F948_3857_body,(Current));
}

void EIF_Minit157 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

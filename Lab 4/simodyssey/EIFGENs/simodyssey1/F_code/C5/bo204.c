/*
 * Code for class BOOLEAN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bo204.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BOOLEAN}.conjuncted */
EIF_BOOLEAN F1494_5800 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5792(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.conjuncted_semistrict */
EIF_BOOLEAN F1494_5801 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5793(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.implication */
EIF_BOOLEAN F1494_5802 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5794(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.negated */
EIF_BOOLEAN F1494_5803 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1492_5795(Current);
}

/* {BOOLEAN}.disjuncted */
EIF_BOOLEAN F1494_5804 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5796(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.disjuncted_semistrict */
EIF_BOOLEAN F1494_5805 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5797(Current, tr1);
	RTLE;
	return Result;
}

/* {BOOLEAN}.disjuncted_exclusive */
EIF_BOOLEAN F1494_5806 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1493, 0x00).id, 1493, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_BOOLEAN *)tr1 = arg1;
	Result = F1492_5798(Current, tr1);
	RTLE;
	return Result;
}

void EIF_Minit204 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

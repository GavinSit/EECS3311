/*
 * Code for class EV_DRAWABLE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1218.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DRAWABLE_ACTION_SEQUENCES_I}.expose_actions */
EIF_REFERENCE F307_12624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O10390[dtype-306]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(992, 0x01).id, 992, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		{
			/* INLINED CODE (EV_DRAWABLE_ACTION_SEQUENCES_I.init_expose_actions) */
			/* END INLINED CODE */
		}
		;
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O10390[dtype-306]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_ACTION_SEQUENCES_I}.init_expose_actions */
void F307_12626 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1218 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

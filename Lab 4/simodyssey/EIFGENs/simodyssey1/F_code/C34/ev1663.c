/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1663.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW}.implementation */
EIF_REFERENCE F1669_18789 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EV_MULTI_COLUMN_LIST_ROW}.on_item_added_at */
void F1669_18790 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F1960_23838(RTCW(tr1), arg1, arg2);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW}.on_item_removed_at */
void F1669_18791 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	F1960_23839(RTCW(tr1), arg1, arg2);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW}.create_implementation */
void F1669_18792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1959, 0x01).id, 1959, _OBJSIZ_27_11_6_2_0_0_0_3_);
	F1960_23818(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	F969_4167(Current);
	RTLE;
}

void EIF_Minit1663 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

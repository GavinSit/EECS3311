/*
 * Code for class EV_GDI_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1559_17600(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1559_17601(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1559_17602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1559_17603(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1559_17604(EIF_REFERENCE);
extern void F1559_17605(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1559_17606(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1559_17607(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1559_17608(EIF_REFERENCE);
extern void EIF_Minit1559(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_OBJECT}.computed_hash_code */
EIF_TYPED_VALUE F1559_17600 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14874,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.weight */
EIF_TYPED_VALUE F1559_17601 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14875,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.age */
EIF_TYPED_VALUE F1559_17602 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14876,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.item */
EIF_TYPED_VALUE F1559_17603 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(14877,Dtype(Current)));
	return r;
}


/* {EV_GDI_OBJECT}.value */
EIF_TYPED_VALUE F1559_17604 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "value";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1558, Current, 0, 0, 24457);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1558, Current, 24457);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14875, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(14876, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_GDI_OBJECT}.set_weight */
void F1559_17605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_weight";
	RTEX;
#define arg1 arg1x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1558, Current, 0, 1, 24458);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1558, Current, 24458);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 14875, 0x10000000, 1); /* weight */
	*(EIF_INTEGER_32 *)(Current + RTWA(14875, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_GDI_OBJECT}.update */
void F1559_17606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1558, Current, 0, 1, 24459);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1558, Current, 24459);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14875, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 2147483646L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 14875, 0x10000000, 1); /* weight */
		(*(EIF_INTEGER_32 *)(Current + RTWA(14875, dtype)))++;
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14876, 0x10000000, 1); /* age */
	*(EIF_INTEGER_32 *)(Current + RTWA(14876, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_GDI_OBJECT}.set_item */
void F1559_17607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1558, Current, 0, 1, 24460);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1558, Current, 24460);
	RTCC(arg1, 1558, l_feature_name, 1, RTWCT(14877, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 14877, 0xF80005AF, 0); /* item */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14877, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11820, "increment_reference", arg1))(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_GDI_OBJECT}.delete */
void F1559_17608 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "delete";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1558, Current, 1, 0, 24452);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1558, Current, 24452);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14877, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11819, "decrement_reference", loc1))(loc1);
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14877, 0xF80005AF, 0); /* item */
	*(EIF_REFERENCE *)(Current + RTWA(14877, dtype)) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

void EIF_Minit1559 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

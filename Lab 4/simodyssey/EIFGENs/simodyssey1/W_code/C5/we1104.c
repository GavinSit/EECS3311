/*
 * Code for class WEL_GW_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1104_10632(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1104_10633(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1104_10634(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1104_10635(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1104_10636(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1104_10637(EIF_REFERENCE);
extern void EIF_Minit1104(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GW_CONSTANTS}.gw_hwndfirst */
EIF_TYPED_VALUE F1104_10632 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_hwndfirst";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 17004);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 17004);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_HWNDFIRST;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_GW_CONSTANTS}.gw_hwndlast */
EIF_TYPED_VALUE F1104_10633 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_hwndlast";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 16999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 16999);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_HWNDLAST;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_GW_CONSTANTS}.gw_hwndnext */
EIF_TYPED_VALUE F1104_10634 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_hwndnext";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 17000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 17000);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_HWNDNEXT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_GW_CONSTANTS}.gw_hwndprev */
EIF_TYPED_VALUE F1104_10635 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_hwndprev";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 17001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 17001);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_HWNDPREV;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_GW_CONSTANTS}.gw_owner */
EIF_TYPED_VALUE F1104_10636 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_owner";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 17002);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 17002);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_OWNER;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_GW_CONSTANTS}.gw_child */
EIF_TYPED_VALUE F1104_10637 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gw_child";
	RTEX;
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
	
	RTEAA(l_feature_name, 1103, Current, 0, 0, 17003);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1103, Current, 17003);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) GW_CHILD;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1104 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

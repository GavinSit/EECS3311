/*
 * Code for class WEL_APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1861_22114(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22116(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22117(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22118(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22119(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22120(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1861_22121(EIF_REFERENCE);
extern void F1861_22122(EIF_REFERENCE);
extern void F1861_22123(EIF_REFERENCE);
extern void F1861_22124(EIF_REFERENCE);
extern void F1861_22125(EIF_REFERENCE);
extern void F1861_22126(EIF_REFERENCE);
extern void F1861_22127(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22128(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1861_22129(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1861(void);

#ifdef __cplusplus
}
#endif

#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_APPLICATION}.make */
void F1861_22114 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1860, Current, 1, 0, 28086);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28086);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8460, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000004, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(4, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(46, "pin_to_thread", loc1))(loc1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18334, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18331, dtype))(Current);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18332, dtype))(Current);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18321, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8459, dtype))(Current, ur1x);
	RTHOOK(8);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18325, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18329, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
}

/* {WEL_APPLICATION}.accelerators */
EIF_TYPED_VALUE F1861_22116 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "accelerators";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28087);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28087);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {WEL_APPLICATION}.default_show_command */
RTOID (F1861_22117)
EIF_TYPED_VALUE F1861_22117 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_show_command";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1861_22117);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1860, Current, 1, 0, 28088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28088);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF8000471, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1137, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8997, "command_show", loc1))(loc1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

/* {WEL_APPLICATION}.idle_action_enabled */
EIF_TYPED_VALUE F1861_22118 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18324,Dtype(Current)));
	return r;
}


/* {WEL_APPLICATION}.runable */
EIF_TYPED_VALUE F1861_22119 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "runable";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28090);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28090);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WEL_APPLICATION}.is_dialog */
EIF_TYPED_VALUE F1861_22120 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_dialog";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 1, 28091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9857, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18136, dtype))(Current, up1x, ui4_1x)).it_p);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {WEL_APPLICATION}.enable_idle_action */
void F1861_22121 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_idle_action";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28092);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18324, 0x04000000, 1); /* idle_action_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(18324, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("idle_action_enabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18324, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_APPLICATION}.disable_idle_action */
void F1861_22122 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_idle_action";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28093);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18324, 0x04000000, 1); /* idle_action_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(18324, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("idle_action_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18324, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_APPLICATION}.run */
void F1861_22123 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "run";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1860, Current, 3, 0, 28094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28094);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("runable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18325, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("main_window_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("parent_main_window_is_void", EX_PRE);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18397, "parent", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0xF8000748, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTCT0("l_window_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(6);
	loc3 = RTCCL(loc1);
	loc3 = RTRV(eif_new_type(1867, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18713, "activate", loc3))(loc3);
	}
	RTHOOK(8);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12291, "exists", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18323, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18474, "show_with_option", loc1))(loc1, ui4_1x);
	}
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18333, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_APPLICATION}.idle_action */
void F1861_22124 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "idle_action";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28095);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28095);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("idle_action_enabled", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18324, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_APPLICATION}.init_instance */
void F1861_22125 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "init_instance";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28096);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_APPLICATION}.init_application */
void F1861_22126 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "init_application";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28097);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_APPLICATION}.message_loop */
void F1861_22127 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "message_loop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_POINTER, &loc5);
	
	RTEAA(l_feature_name, 1860, Current, 5, 0, 28098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28098);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF800058E, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18322, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0xF8000747, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8456, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(4);
		RTDBGAL(1, 0xF80005DF, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1503, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12968, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			RTHOOK(5);
			if (loc4) break;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14164, "peek_all", loc1))(loc1);
			RTHOOK(7);
			tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(14152, "last_boolean_result", loc1));
			if (tb1) {
				RTHOOK(8);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14154, "quit", loc1))(loc1)).it_b);
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(10);
					RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18321, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(10,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(12289, "item", tr1));
					up1 = tp1;
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18335, dtype))(Current, up1x)).it_p);
					loc5 = (EIF_POINTER) tp1;
					RTHOOK(11);
					up1 = loc5;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18326, dtype))(Current, up1x)).it_b);
					if (tb1) {
						RTHOOK(12);
						up1 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14172, "process_dialog_message", loc1))(loc1, up1x);
						RTHOOK(13);
						tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(14152, "last_boolean_result", loc1));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(14);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14167, "translate", loc1))(loc1);
							RTHOOK(15);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14166, "dispatch", loc1))(loc1);
						}
					} else {
						RTHOOK(16);
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc3 != NULL)) {
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12291, "exists", loc3))(loc3)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
							RTHOOK(17);
							ur1 = RTCCL(loc3);
							ur2 = RTCCL(loc2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14168, "translate_accelerator", loc1))(loc1, ur1x, ur2x);
						}
						RTHOOK(18);
						tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(14152, "last_boolean_result", loc1));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(19);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14167, "translate", loc1))(loc1);
							RTHOOK(20);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14166, "dispatch", loc1))(loc1);
						}
					}
				}
			} else {
				RTHOOK(21);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18324, dtype));
				if (tb1) {
					RTHOOK(22);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18330, dtype))(Current);
				} else {
					RTHOOK(23);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14170, "wait", loc1))(loc1);
				}
			}
		}
	} else {
		RTHOOK(24);
		RTDBGAL(1, 0xF80005DF, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1503, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12968, Dtype(tr1)))(tr1);
		RTNHOOK(24,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			RTHOOK(25);
			if (loc4) break;
			RTHOOK(26);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14164, "peek_all", loc1))(loc1);
			RTHOOK(27);
			tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(14152, "last_boolean_result", loc1));
			if (tb1) {
				RTHOOK(28);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14154, "quit", loc1))(loc1)).it_b);
				if (tb1) {
					RTHOOK(29);
					RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(30);
					RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18321, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(30,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(12289, "item", tr1));
					up1 = tp1;
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18335, dtype))(Current, up1x)).it_p);
					loc5 = (EIF_POINTER) tp1;
					RTHOOK(31);
					up1 = loc5;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18326, dtype))(Current, up1x)).it_b);
					if (tb1) {
						RTHOOK(32);
						up1 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14172, "process_dialog_message", loc1))(loc1, up1x);
						RTHOOK(33);
						tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(14152, "last_boolean_result", loc1));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(34);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14167, "translate", loc1))(loc1);
							RTHOOK(35);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14166, "dispatch", loc1))(loc1);
						}
					} else {
						RTHOOK(36);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14167, "translate", loc1))(loc1);
						RTHOOK(37);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14166, "dispatch", loc1))(loc1);
					}
				}
			} else {
				RTHOOK(38);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18324, dtype));
				if (tb1) {
					RTHOOK(39);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18330, dtype))(Current);
				} else {
					RTHOOK(40);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14170, "wait", loc1))(loc1);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(41);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
}

/* {WEL_APPLICATION}.dispatcher */
RTOID (F1861_22128)
EIF_TYPED_VALUE F1861_22128 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispatcher";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1861_22128);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 0, 28099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1860, Current, 28099);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000743, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1859, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(18309, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {WEL_APPLICATION}.cwin_get_last_active_popup */
EIF_TYPED_VALUE F1861_22129 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_get_last_active_popup";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1860, Current, 0, 1, 28100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1860, Current, 28100);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) GetLastActivePopup(((HWND) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

void EIF_Minit1861 (void)
{
	GTCX
	RTOTS (22117,F1861_22117)
	RTOTS (22128,F1861_22128)
}


#ifdef __cplusplus
}
#endif
/*
 * Code for class NATURAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na213.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_32}.is_less */
EIF_BOOLEAN F1503_6027 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	Result = F1501_5972(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.plus */
EIF_NATURAL_32 F1503_6028 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_5981(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.minus */
EIF_NATURAL_32 F1503_6029 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_5982(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_quotient */
EIF_NATURAL_32 F1503_6033 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_5987(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.integer_remainder */
EIF_NATURAL_32 F1503_6034 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_5988(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.as_natural_8 */
EIF_NATURAL_8 F1503_6036 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F1501_5993(Current);
}

/* {NATURAL_32}.as_natural_16 */
EIF_NATURAL_16 F1503_6037 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_16) F1501_5994(Current);
}

/* {NATURAL_32}.as_natural_64 */
EIF_NATURAL_64 F1503_6039 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1501_5996(Current);
}

/* {NATURAL_32}.as_integer_32 */
EIF_INTEGER_32 F1503_6042 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1501_5999(Current);
}

/* {NATURAL_32}.as_integer_64 */
EIF_INTEGER_64 F1503_6043 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F1501_6000(Current);
}

/* {NATURAL_32}.to_character_8 */
EIF_CHARACTER_8 F1503_6046 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1501_6014(Current);
}

/* {NATURAL_32}.to_character_32 */
EIF_CHARACTER_32 F1503_6047 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F1501_6015(Current);
}

/* {NATURAL_32}.bit_and */
EIF_NATURAL_32 F1503_6048 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_6016(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_or */
EIF_NATURAL_32 F1503_6049 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1502, 0x00).id, 1502, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_NATURAL_32 *)tr1 = arg1;
	tr1 = F1501_6017(Current, tr1);
	Result = *(EIF_NATURAL_32 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_32}.bit_shift_left */
EIF_NATURAL_32 F1503_6052 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F1501_6021(Current, arg1);
}

/* {NATURAL_32}.bit_shift_right */
EIF_NATURAL_32 F1503_6053 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_NATURAL_32 *)F1501_6022(Current, arg1);
}

void EIF_Minit213 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

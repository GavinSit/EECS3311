/*
 * Code for class reference INTEGER_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in220.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_32}.is_less */
EIF_BOOLEAN F1508_6212 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F1507_6153(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.plus */
EIF_INTEGER_32 F1508_6213 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6163(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.minus */
EIF_INTEGER_32 F1508_6214 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6164(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.product */
EIF_INTEGER_32 F1508_6215 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6165(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.quotient */
EIF_REAL_64 F1508_6216 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	Result = F1507_6166(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.opposite */
EIF_INTEGER_32 F1508_6218 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F1507_6168(Current);
}

/* {INTEGER_32}.integer_quotient */
EIF_INTEGER_32 F1508_6219 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6169(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.integer_remainder */
EIF_INTEGER_32 F1508_6220 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6170(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.power */
EIF_REAL_64 F1508_6221 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	
	
	return (EIF_REAL_64) F1507_6171(Current, arg1);
}

/* {INTEGER_32}.as_natural_8 */
EIF_NATURAL_8 F1508_6222 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F1507_6176(Current);
}

/* {INTEGER_32}.as_natural_32 */
EIF_NATURAL_32 F1508_6224 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F1507_6178(Current);
}

/* {INTEGER_32}.as_natural_64 */
EIF_NATURAL_64 F1508_6225 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1507_6179(Current);
}

/* {INTEGER_32}.as_integer_8 */
EIF_INTEGER_8 F1508_6226 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_8) F1507_6180(Current);
}

/* {INTEGER_32}.as_integer_16 */
EIF_INTEGER_16 F1508_6227 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_16) F1507_6181(Current);
}

/* {INTEGER_32}.as_integer_64 */
EIF_INTEGER_64 F1508_6229 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_64) F1507_6183(Current);
}

/* {INTEGER_32}.to_real */
EIF_REAL_32 F1508_6230 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_32) F1507_6193(Current);
}

/* {INTEGER_32}.to_double */
EIF_REAL_64 F1508_6231 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REAL_64) F1507_6194(Current);
}

/* {INTEGER_32}.to_character_8 */
EIF_CHARACTER_8 F1508_6232 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1507_6198(Current);
}

/* {INTEGER_32}.bit_and */
EIF_INTEGER_32 F1508_6234 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6200(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_or */
EIF_INTEGER_32 F1508_6235 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6201(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_xor */
EIF_INTEGER_32 F1508_6236 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr1 = F1507_6202(Current, tr1);
	Result = *(EIF_INTEGER_32 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_32}.bit_not */
EIF_INTEGER_32 F1508_6237 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F1507_6203(Current);
}

/* {INTEGER_32}.bit_shift_left */
EIF_INTEGER_32 F1508_6238 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F1507_6205(Current, arg1);
}

/* {INTEGER_32}.bit_shift_right */
EIF_INTEGER_32 F1508_6239 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_32 *)F1507_6206(Current, arg1);
}

void EIF_Minit220 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

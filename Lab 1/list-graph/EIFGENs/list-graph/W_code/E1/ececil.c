#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3071, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* STUDENT_TEST t1 */
EIF_TYPED_VALUE _A971_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t2 */
EIF_TYPED_VALUE _A971_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5131, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t3 */
EIF_TYPED_VALUE _A971_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t4 */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t5 */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5134, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t1 */
EIF_TYPED_VALUE _A972_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t3 */
EIF_TYPED_VALUE _A972_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t5 */
EIF_TYPED_VALUE _A972_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t7 */
EIF_TYPED_VALUE _A972_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5139, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t7b */
EIF_TYPED_VALUE _A972_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "t7b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t8 */
EIF_TYPED_VALUE _A972_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "t8", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t8c */
EIF_TYPED_VALUE _A972_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "t8c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t9 */
EIF_TYPED_VALUE _A972_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5143, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t10 */
EIF_TYPED_VALUE _A972_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5144, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t11 */
EIF_TYPED_VALUE _A972_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5145, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t11b */
EIF_TYPED_VALUE _A972_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5146, "t11b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t13 */
EIF_TYPED_VALUE _A972_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t14 */
EIF_TYPED_VALUE _A972_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "t14", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t15 */
EIF_TYPED_VALUE _A972_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "t15", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t16b */
EIF_TYPED_VALUE _A972_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5150, "t16b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t16c */
EIF_TYPED_VALUE _A972_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5151, "t16c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t17 */
EIF_TYPED_VALUE _A972_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5152, "t17", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t18 */
EIF_TYPED_VALUE _A972_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "t18", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t19 */
EIF_TYPED_VALUE _A972_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "t19", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t21 */
EIF_TYPED_VALUE _A972_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5155, "t21", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t22 */
EIF_TYPED_VALUE _A972_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5156, "t22", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t23 */
EIF_TYPED_VALUE _A972_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5158, "t23", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t25 */
EIF_TYPED_VALUE _A972_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5161, "t25", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t30 */
EIF_TYPED_VALUE _A972_103 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5162, "t30", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t30b */
EIF_TYPED_VALUE _A972_104 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5163, "t30b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t30c */
EIF_TYPED_VALUE _A972_105 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5164, "t30c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t31 */
EIF_TYPED_VALUE _A972_106 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5165, "t31", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t32 */
EIF_TYPED_VALUE _A972_107 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5166, "t32", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t34 */
EIF_TYPED_VALUE _A972_108 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5167, "t34", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t35 */
EIF_TYPED_VALUE _A972_109 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5168, "t35", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_LIST_GRAPH_INSTRUCTOR t37 */
EIF_TYPED_VALUE _A972_110 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5169, "t37", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t1 */
EIF_TYPED_VALUE _A973_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5171, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t2 */
EIF_TYPED_VALUE _A973_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5172, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3 */
EIF_TYPED_VALUE _A973_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5173, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3b */
EIF_TYPED_VALUE _A973_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5174, "t3b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3c */
EIF_TYPED_VALUE _A973_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5175, "t3c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t4 */
EIF_TYPED_VALUE _A973_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5176, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t4c */
EIF_TYPED_VALUE _A973_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5177, "t4c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t5 */
EIF_TYPED_VALUE _A973_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5178, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t6 */
EIF_TYPED_VALUE _A973_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5179, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t6c */
EIF_TYPED_VALUE _A973_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5180, "t6c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t7 */
EIF_TYPED_VALUE _A973_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5181, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9 */
EIF_TYPED_VALUE _A973_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5182, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9b */
EIF_TYPED_VALUE _A973_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5183, "t9b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9c */
EIF_TYPED_VALUE _A973_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5184, "t9c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t10 */
EIF_TYPED_VALUE _A973_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5185, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t11 */
EIF_TYPED_VALUE _A973_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5186, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12 */
EIF_TYPED_VALUE _A973_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5187, "t12", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12b */
EIF_TYPED_VALUE _A973_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5188, "t12b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12c */
EIF_TYPED_VALUE _A973_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5189, "t12c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t13 */
EIF_TYPED_VALUE _A973_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5190, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t14 */
EIF_TYPED_VALUE _A973_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5191, "t14", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t15 */
EIF_TYPED_VALUE _A973_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5192, "t15", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t16b */
EIF_TYPED_VALUE _A973_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5193, "t16b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t16c */
EIF_TYPED_VALUE _A973_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5194, "t16c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17 */
EIF_TYPED_VALUE _A973_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5195, "t17", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17b */
EIF_TYPED_VALUE _A973_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5196, "t17b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17c */
EIF_TYPED_VALUE _A973_103 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5197, "t17c", closed [1].it_r))(closed [1].it_r);
}

	/* LIST_GRAPH [G#1] inline-agent#1 of vertices_incoming_edge_count */
EIF_TYPED_VALUE _A1009_54_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1009_7999)(closed [1].it_r, open [1]);
}

	/* LIST_GRAPH [INTEGER_32] inline-agent#1 of vertices_incoming_edge_count */
EIF_TYPED_VALUE _A1019_54_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1019_7999)(closed [1].it_r, open [1]);
}

	/* LIST_GRAPH [G#1] inline-agent#1 of vertices_outgoing_edge_count */
EIF_TYPED_VALUE _A1009_55_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1009_8000)(closed [1].it_r, open [1]);
}

	/* LIST_GRAPH [INTEGER_32] inline-agent#1 of vertices_outgoing_edge_count */
EIF_TYPED_VALUE _A1019_55_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1019_8000)(closed [1].it_r, open [1]);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif

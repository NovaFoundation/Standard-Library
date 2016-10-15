#include <precompiled.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/nova_Nova_Class.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
	/* Matrix other */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_other;
} Context1;
typedef struct
{
	/* Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
	/* Int outR */ int* nova_math_Nova_Matrix_Nova_outR;
	/* Matrix other */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_other;
} Context2;
typedef struct
{
	/* Matrix result */ nova_math_Nova_Matrix** nova_math_Nova_Matrix_Nova_result;
} Context3;
typedef struct
{
	/* Int order */ int* nova_math_Nova_Matrix_Nova_order;
} Context4;
typedef struct
{
} Context5;
typedef struct
{
	/* Int cols */ int* nova_math_Nova_Matrix_Nova_cols;
} Context6;


nova_math_Matrix_Extension_VTable nova_math_Matrix_Extension_VTable_val =
{
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		(nova_Nova_Object*(*)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_math_Nova_Matrix_Nova_multiply,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_math_Nova_Matrix_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_math_Nova_Matrix_Nova_multiply,
};



void nova_math_Nova_Matrix_Nova_testLambda42(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_outRow, int nova_math_Nova_Matrix_Nova_outR, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context1* context);
void nova_math_Nova_Matrix_Nova_testLambda43(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_row, int nova_math_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context2* context);
void nova_math_Nova_Matrix_Nova_testLambda44(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_row, int nova_math_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context3* context);
nova_Nova_Object* nova_math_Nova_Matrix_static_Nova_testLambda45(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context4* context);
nova_Nova_Object* nova_math_Nova_Matrix_Nova_testLambda46(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context5* context);
nova_Nova_Object* nova_math_Nova_Matrix_Nova_testLambda47(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova__3, Context6* context);



void nova_math_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Matrix_Nova_rows, int nova_math_Nova_Matrix_Nova_cols)
{
	CCLASS_NEW(nova_math_Nova_Matrix, this,);
	this->vtable = &nova_math_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Matrix_0_Nova_this(this, exceptionData, nova_math_Nova_Matrix_Nova_rows, nova_math_Nova_Matrix_Nova_cols);
	}
	
	return this;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data)
{
	CCLASS_NEW(nova_math_Nova_Matrix, this,);
	this->vtable = &nova_math_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Matrix_1_Nova_this(this, exceptionData, nova_math_Nova_Matrix_Nova_data);
	}
	
	return this;
}

void nova_math_Nova_Matrix_Nova_destroy(nova_math_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_math_Nova_Matrix_Nova_data, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Matrix_0_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Matrix_Nova_rows, int nova_math_Nova_Matrix_Nova_cols)
{
	Context6 contextArg47 = 
	{
		&nova_math_Nova_Matrix_Nova_cols,
	};
	
	if (nova_math_Nova_Matrix_Nova_rows <= 0 || nova_math_Nova_Matrix_Nova_cols <= 0)
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid matrix size ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Nova_rows))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Nova_cols))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". The number of rows and columns must both be positive."))))))));
	}
	nova_math_Nova_Matrix_1_Nova_this(this, exceptionData, (nova_datastruct_list_Nova_Array*)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_map(nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Nova_rows), exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure6_Nova_mapFunc)(intptr_t)&nova_math_Nova_Matrix_Nova_testLambda47, this, &contextArg47)));
}

void nova_math_Nova_Matrix_1_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data)
{
	if (nova_math_Nova_Matrix_Nova_data == (nova_datastruct_list_Nova_Array*)nova_null || nova_math_Nova_Matrix_Nova_data->nova_datastruct_list_Nova_Array_Nova_count == 0)
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix size must be greater than 0 rows and columns"))));
	}
	this->nova_math_Nova_Matrix_Nova_data = nova_math_Nova_Matrix_Nova_data;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other, char nova_math_Nova_Matrix_Nova_allowUnequalDimensions)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	int l4_Nova_row = 0;
	
	nova_math_Nova_Matrix_Nova_allowUnequalDimensions = (char)(nova_math_Nova_Matrix_Nova_allowUnequalDimensions == (intptr_t)nova_null ? 0 : nova_math_Nova_Matrix_Nova_allowUnequalDimensions);
	if (!nova_math_Nova_Matrix_Nova_allowUnequalDimensions && (nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData) || nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData)))
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("The matrices' sizes must be equal to perform this operation"))));
	}
	l1_Nova_result = nova_math_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l4_Nova_row = (int)0;
	for (; l4_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData))); l4_Nova_row++)
	{
		int l6_Nova_col = 0;
		
		l6_Nova_col = (int)0;
		for (; l6_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData))); l6_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_other->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_subtract(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other, char nova_math_Nova_Matrix_Nova_allowUnequalDimensions)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	int l4_Nova_row = 0;
	
	nova_math_Nova_Matrix_Nova_allowUnequalDimensions = (char)(nova_math_Nova_Matrix_Nova_allowUnequalDimensions == (intptr_t)nova_null ? 0 : nova_math_Nova_Matrix_Nova_allowUnequalDimensions);
	if (!nova_math_Nova_Matrix_Nova_allowUnequalDimensions && (nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData) || nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData)))
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("The matrices' sizes must be equal to perform this operation"))));
	}
	l1_Nova_result = nova_math_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l4_Nova_row = (int)0;
	for (; l4_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData))); l4_Nova_row++)
	{
		int l6_Nova_col = 0;
		
		l6_Nova_col = (int)0;
		for (; l6_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData))); l6_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_other->nova_math_Nova_Matrix_Nova_data), exceptionData, l4_Nova_row)), exceptionData, l6_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_multiply(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	Context1 contextArg43 = 
	{
		&l1_Nova_result,
		&nova_math_Nova_Matrix_Nova_other,
	};
	
	if (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData))
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix with dimensions ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" cannot be multiplied with matrix with dimensions ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" != ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))))))))));
	}
	l1_Nova_result = nova_math_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix_Nova_other, exceptionData));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_result->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_math_Nova_Matrix_Nova_testLambda42, this, &contextArg43);
	return l1_Nova_result;
}

nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_transpose(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_Nova_Matrix* l1_Nova_result = (nova_math_Nova_Matrix*)nova_null;
	Context3 contextArg44 = 
	{
		&l1_Nova_result,
	};
	
	l1_Nova_result = nova_math_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_math_Nova_Matrix_Nova_testLambda44, this, &contextArg44);
	return l1_Nova_result;
}

double nova_math_Nova_Matrix_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!nova_math_Nova_Matrix_Accessor_Nova_isSquare(this, exceptionData))
	{
		THROW(6, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix must be square to calculate the determinant"))));
	}
	return nova_math_Nova_Matrix_static_Nova_determinant(0, exceptionData, this->nova_math_Nova_Matrix_Nova_data);
}

double nova_math_Nova_Matrix_static_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data)
{
	int l1_Nova_order = 0;
	double l1_Nova_det = 0;
	
	l1_Nova_order = nova_math_Nova_Matrix_Nova_data->nova_datastruct_list_Nova_Array_Nova_count;
	l1_Nova_det = (double)(0);
	if (l1_Nova_order == 1)
	{
		l1_Nova_det = (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 0)), exceptionData, 0));
	}
	else if (l1_Nova_order == 2)
	{
		l1_Nova_det = (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 0)), exceptionData, 0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 1)), exceptionData, 1) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 1)), exceptionData, 0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 0)), exceptionData, 1);
	}
	else
	{
		int l6_Nova_j1 = 0;
		
		l6_Nova_j1 = (int)0;
		for (; l6_Nova_j1 < (int)l1_Nova_order; l6_Nova_j1++)
		{
			nova_datastruct_list_Nova_Array* l6_Nova_m = (nova_datastruct_list_Nova_Array*)nova_null;
			Context4 contextArg45 = 
			{
				&l1_Nova_order,
			};
			int l8_Nova_i = 0;
			
			l6_Nova_m = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l1_Nova_order - 1)), exceptionData, (nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)&nova_math_Nova_Matrix_static_Nova_testLambda45, nova_null, &contextArg45));
			l8_Nova_i = (int)1;
			for (; l8_Nova_i < (int)l1_Nova_order; l8_Nova_i++)
			{
				int l8_Nova_j2 = 0;
				int l10_Nova_j = 0;
				
				l8_Nova_j2 = (int)(0);
				l10_Nova_j = (int)0;
				for (; l10_Nova_j < (int)l1_Nova_order; l10_Nova_j++)
				{
					if (l10_Nova_j != l6_Nova_j1)
					{
						nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l6_Nova_m), exceptionData, l8_Nova_i - 1)), exceptionData, l8_Nova_j2++, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, l8_Nova_i)), exceptionData, l10_Nova_j)));
					}
				}
			}
			l1_Nova_det += nova_math_Nova_Math_static_Nova_pow(0, exceptionData, -1.0, 1.0 + l6_Nova_j1 + 1.0) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_math_Nova_Matrix_Nova_data), exceptionData, 0)), exceptionData, l6_Nova_j1) * nova_math_Nova_Matrix_static_Nova_determinant(0, exceptionData, l6_Nova_m);
		}
	}
	return l1_Nova_det;
}

nova_Nova_String* nova_math_Nova_Matrix_Nova_toString(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context5 contextArg46 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&nova_math_Nova_Matrix_Nova_testLambda46, this, &contextArg46)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

void nova_math_Nova_Matrix_Nova_testLambda42(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_outRow, int nova_math_Nova_Matrix_Nova_outR, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context1* context)
{
	Context2 contextArg42 = 
	{
		context->nova_math_Nova_Matrix_Nova_result,
		&nova_math_Nova_Matrix_Nova_outR,
		context->nova_math_Nova_Matrix_Nova_other,
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_math_Nova_Matrix_Nova_testLambda43, this, &contextArg42);
}

void nova_math_Nova_Matrix_Nova_testLambda43(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_row, int nova_math_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context2* context)
{
	int l2_Nova_c = 0;
	
	l2_Nova_c = (int)0;
	for (; l2_Nova_c < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l2_Nova_c++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)((*context->nova_math_Nova_Matrix_Nova_result)->nova_math_Nova_Matrix_Nova_data), exceptionData, nova_math_Nova_Matrix_Nova_r)), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR), (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)((*context->nova_math_Nova_Matrix_Nova_result)->nova_math_Nova_Matrix_Nova_data), exceptionData, nova_math_Nova_Matrix_Nova_r)), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR)) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_row, exceptionData, l2_Nova_c) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)((*context->nova_math_Nova_Matrix_Nova_other)->nova_math_Nova_Matrix_Nova_data), exceptionData, l2_Nova_c)), exceptionData, (*context->nova_math_Nova_Matrix_Nova_outR)));
	}
}

void nova_math_Nova_Matrix_Nova_testLambda44(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_row, int nova_math_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context3* context)
{
	int l2_Nova_c = 0;
	
	l2_Nova_c = (int)0;
	for (; l2_Nova_c < (int)nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l2_Nova_c++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)((*context->nova_math_Nova_Matrix_Nova_result)->nova_math_Nova_Matrix_Nova_data), exceptionData, l2_Nova_c)), exceptionData, nova_math_Nova_Matrix_Nova_r, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_math_Nova_Matrix_Nova_row, exceptionData, l2_Nova_c)));
	}
}

nova_Nova_Object* nova_math_Nova_Matrix_static_Nova_testLambda45(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context4* context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, (*context->nova_math_Nova_Matrix_Nova_order) - 1);
}

nova_Nova_Object* nova_math_Nova_Matrix_Nova_testLambda46(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova__3, Context5* context)
{
	return (nova_Nova_Object*)nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[ ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_DoubleArray_Nova_join(nova_math_Nova_Matrix_Nova__1, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\t"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ]"))));
}

nova_Nova_Object* nova_math_Nova_Matrix_Nova_testLambda47(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Matrix_Nova__1, int nova_math_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova__3, Context6* context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, (*context->nova_math_Nova_Matrix_Nova_cols));
}

char nova_math_Nova_Matrix_Accessor_Nova_isSquare(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_math_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) == nova_math_Nova_Matrix_Accessor_Nova_rows(this, exceptionData);
}


int nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_math_Nova_Matrix_Nova_data->nova_datastruct_list_Nova_Array_Nova_count;
}


int nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)(((nova_datastruct_list_Nova_DoubleArray*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_math_Nova_Matrix_Nova_data), exceptionData, 0))->nova_datastruct_list_Nova_Array_Nova_count);
}


void nova_math_Nova_Matrix_Nova_super(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Matrix_Nova_data = (nova_datastruct_list_Nova_Array*)nova_null;
}


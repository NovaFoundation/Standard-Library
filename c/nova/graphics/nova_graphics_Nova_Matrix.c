#include <precompiled.h>
#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Matrix result */ nova_graphics_Nova_Matrix** nova_graphics_Nova_Matrix_Nova_result;
} Context1;
typedef struct
{
} Context2;
typedef struct
{
	/* Int cols */ int* nova_graphics_Nova_Matrix_Nova_cols;
} Context3;


nova_graphics_Matrix_Extension_VTable nova_graphics_Matrix_Extension_VTable_val =
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
		(nova_Nova_Object*(*)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_graphics_Nova_Matrix_Nova_multiply,
		0,
		0,
		0,
	},
	nova_graphics_Nova_Matrix_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_graphics_Nova_Matrix_Nova_multiply,
};



void nova_graphics_Nova_Matrix_static_Nova_testLambda20(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova_row, int nova_graphics_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova__3, Context1* context);
nova_Nova_Object* nova_graphics_Nova_Matrix_static_Nova_testLambda21(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova__1, int nova_graphics_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova__3, Context2* context);
nova_Nova_Object* nova_graphics_Nova_Matrix_static_Nova_testLambda22(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_graphics_Nova_Matrix_Nova__1, int nova_graphics_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova__3, Context3* context);


void nova_graphics_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_0_Nova_construct(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_graphics_Nova_Matrix_Nova_rows, int nova_graphics_Nova_Matrix_Nova_cols)
{
	CCLASS_NEW(nova_graphics_Nova_Matrix, this,);
	this->vtable = &nova_graphics_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_graphics_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_graphics_Nova_Matrix_0_Nova_this(this, exceptionData, nova_graphics_Nova_Matrix_Nova_rows, nova_graphics_Nova_Matrix_Nova_cols);
	}
	
	return this;
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_1_Nova_construct(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova_data)
{
	CCLASS_NEW(nova_graphics_Nova_Matrix, this,);
	this->vtable = &nova_graphics_Matrix_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_graphics_Nova_Matrix_Nova_super(this, exceptionData);
	
	{
		nova_graphics_Nova_Matrix_1_Nova_this(this, exceptionData, nova_graphics_Nova_Matrix_Nova_data);
	}
	
	return this;
}

void nova_graphics_Nova_Matrix_Nova_destroy(nova_graphics_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_graphics_Nova_Matrix_Nova_data, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_graphics_Nova_Matrix_0_Nova_this(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_graphics_Nova_Matrix_Nova_rows, int nova_graphics_Nova_Matrix_Nova_cols)
{
	Context3 contextArg22 = 
	{
		&nova_graphics_Nova_Matrix_Nova_cols,
	};
	
	if (nova_graphics_Nova_Matrix_Nova_rows <= 0 || nova_graphics_Nova_Matrix_Nova_cols <= 0)
	{
		THROW(4, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid matrix size ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Nova_rows))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Nova_cols))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". The number of rows and columns must both be positive."))))))));
	}
	nova_graphics_Nova_Matrix_1_Nova_this(this, exceptionData, (nova_datastruct_list_Nova_Array*)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_map(nova_datastruct_list_Nova_DoubleArray_1_Nova_construct(0, exceptionData, nova_graphics_Nova_Matrix_Nova_rows), exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure3_Nova_mapFunc)(intptr_t)&nova_graphics_Nova_Matrix_static_Nova_testLambda22, this, &contextArg22)));
}

void nova_graphics_Nova_Matrix_1_Nova_this(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova_data)
{
	if (nova_graphics_Nova_Matrix_Nova_data == (nova_datastruct_list_Nova_Array*)nova_null || nova_graphics_Nova_Matrix_Nova_data->nova_datastruct_list_Nova_Array_Nova_count == 0)
	{
		THROW(4, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix size must be greater than 0 rows and columns"))));
	}
	this->nova_graphics_Nova_Matrix_Nova_data = nova_graphics_Nova_Matrix_Nova_data;
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_add(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_other)
{
	nova_graphics_Nova_Matrix* l1_Nova_result = (nova_graphics_Nova_Matrix*)nova_null;
	int l2_Nova_row = 0;
	
	l1_Nova_result = nova_graphics_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l2_Nova_row = (int)0;
	for (; l2_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix_Nova_other, exceptionData))); l2_Nova_row++)
	{
		int l4_Nova_col = 0;
		
		l4_Nova_col = (int)0;
		for (; l4_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_graphics_Nova_Matrix_Accessor_Nova_cols(nova_graphics_Nova_Matrix_Nova_other, exceptionData))); l4_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col) + (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_graphics_Nova_Matrix_Nova_other->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_subtract(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_other)
{
	nova_graphics_Nova_Matrix* l1_Nova_result = (nova_graphics_Nova_Matrix*)nova_null;
	int l2_Nova_row = 0;
	
	l1_Nova_result = nova_graphics_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData));
	l2_Nova_row = (int)0;
	for (; l2_Nova_row < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), (long_long)(nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix_Nova_other, exceptionData))); l2_Nova_row++)
	{
		int l4_Nova_col = 0;
		
		l4_Nova_col = (int)0;
		for (; l4_Nova_col < (int)nova_math_Nova_Math_static_Nova_min(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), (long_long)(nova_graphics_Nova_Matrix_Accessor_Nova_cols(nova_graphics_Nova_Matrix_Nova_other, exceptionData))); l4_Nova_col++)
		{
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col, (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col) - (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_graphics_Nova_Matrix_Nova_other->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_row)), exceptionData, l4_Nova_col));
		}
	}
	return l1_Nova_result;
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_multiply(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_other)
{
	nova_graphics_Nova_Matrix* l1_Nova_result = (nova_graphics_Nova_Matrix*)nova_null;
	int l4_Nova_outR = 0;
	
	if (nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData) != nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix_Nova_other, exceptionData))
	{
		THROW(4, nova_exception_Nova_InvalidArgumentException_Nova_construct(0, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matrix with dimensions ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" cannot be multiplied with matrix with dimensions ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("x")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_cols(nova_graphics_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(". ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData)))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" != ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix_Nova_other, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))))))))))))));
	}
	l1_Nova_result = nova_graphics_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData), nova_graphics_Nova_Matrix_Accessor_Nova_cols(nova_graphics_Nova_Matrix_Nova_other, exceptionData));
	l4_Nova_outR = (int)0;
	for (; l4_Nova_outR < (int)nova_graphics_Nova_Matrix_Accessor_Nova_rows(l1_Nova_result, exceptionData); l4_Nova_outR++)
	{
		int l4_Nova_r = 0;
		nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_datastruct_list_Nova_DoubleArray* l5_Nova_row = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
		
		l4_Nova_r = (int)(0);
		nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this->nova_graphics_Nova_Matrix_Nova_data)), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
		{
			double l5_Nova_value = 0;
			int l7_Nova_c = 0;
			
			l5_Nova_row = (nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
			l5_Nova_value = (double)(0);
			l7_Nova_c = (int)0;
			for (; l7_Nova_c < (int)nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData); l7_Nova_c++)
			{
				l5_Nova_value += (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(l5_Nova_row, exceptionData, l7_Nova_c) * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_graphics_Nova_Matrix_Nova_other->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l7_Nova_c)), exceptionData, l4_Nova_outR);
			}
			nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_result->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l4_Nova_r++)), exceptionData, l4_Nova_outR, l5_Nova_value);
		}
	}
	return l1_Nova_result;
}

nova_graphics_Nova_Matrix* nova_graphics_Nova_Matrix_Nova_transpose(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_graphics_Nova_Matrix* l1_Nova_result = (nova_graphics_Nova_Matrix*)nova_null;
	Context1 contextArg20 = 
	{
		&l1_Nova_result,
	};
	
	l1_Nova_result = nova_graphics_Nova_Matrix_0_Nova_construct(0, exceptionData, nova_graphics_Nova_Matrix_Accessor_Nova_cols(this, exceptionData), nova_graphics_Nova_Matrix_Accessor_Nova_rows(this, exceptionData));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->nova_graphics_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_graphics_Nova_Matrix_static_Nova_testLambda20, this, &contextArg20);
	return l1_Nova_result;
}

nova_Nova_String* nova_graphics_Nova_Matrix_Nova_toString(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context2 contextArg21 = 
	{
	};
	
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->nova_graphics_Nova_Matrix_Nova_data), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&nova_graphics_Nova_Matrix_static_Nova_testLambda21, this, &contextArg21)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
}

void nova_graphics_Nova_Matrix_static_Nova_testLambda20(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova_row, int nova_graphics_Nova_Matrix_Nova_r, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova__3, Context1* context)
{
	int l2_Nova_c = 0;
	
	l2_Nova_c = (int)0;
	for (; l2_Nova_c < (int)nova_graphics_Nova_Matrix_Accessor_Nova_cols((nova_graphics_Nova_Matrix*)(this), exceptionData); l2_Nova_c++)
	{
		nova_datastruct_list_Nova_DoubleArray_Nova_set((nova_datastruct_list_Nova_DoubleArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)((*context->nova_graphics_Nova_Matrix_Nova_result)->nova_graphics_Nova_Matrix_Nova_data), exceptionData, l2_Nova_c)), exceptionData, nova_graphics_Nova_Matrix_Nova_r, (double)(intptr_t)(nova_datastruct_list_Nova_DoubleArray_Nova_get(nova_graphics_Nova_Matrix_Nova_row, exceptionData, l2_Nova_c)));
	}
}

nova_Nova_Object* nova_graphics_Nova_Matrix_static_Nova_testLambda21(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova__1, int nova_graphics_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_Array* nova_graphics_Nova_Matrix_Nova__3, Context2* context)
{
	return (nova_Nova_Object*)nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("[ ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_DoubleArray_Nova_join(nova_graphics_Nova_Matrix_Nova__1, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\t"))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" ]"))));
}

nova_Nova_Object* nova_graphics_Nova_Matrix_static_Nova_testLambda22(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_graphics_Nova_Matrix_Nova__1, int nova_graphics_Nova_Matrix_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_graphics_Nova_Matrix_Nova__3, Context3* context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_DoubleArray_1_Nova_construct(0, exceptionData, (*context->nova_graphics_Nova_Matrix_Nova_cols));
}

int nova_graphics_Nova_Matrix_Accessor_Nova_rows(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_graphics_Nova_Matrix_Nova_data->nova_datastruct_list_Nova_Array_Nova_count;
}


int nova_graphics_Nova_Matrix_Accessor_Nova_cols(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)(((nova_datastruct_list_Nova_DoubleArray*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_graphics_Nova_Matrix_Nova_data), exceptionData, 0))->nova_datastruct_list_Nova_Array_Nova_count);
}


void nova_graphics_Nova_Matrix_Nova_super(nova_graphics_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_graphics_Nova_Matrix_Nova_data = (nova_datastruct_list_Nova_Array*)nova_null;
}


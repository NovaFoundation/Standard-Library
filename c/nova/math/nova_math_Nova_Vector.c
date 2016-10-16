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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Vector other */ nova_math_Nova_Vector** nova_math_Nova_Vector_Nova_other;
} Context1;
typedef struct
{
	/* Double scalar */ double* nova_math_Nova_Vector_Nova_scalar;
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;


nova_math_Vector_Extension_VTable nova_math_Vector_Extension_VTable_val =
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
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_math_Nova_Vector_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_math_Nova_Vector_Nova_dotProduct,
};



double nova_math_Nova_Vector_Nova_testLambda8(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_x, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context1* context);
void nova_math_Nova_Vector_Nova_testLambda9(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_d, Context2* context);
void nova_math_Nova_Vector_Nova_testLambda10(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_d, Context3* context);
double nova_math_Nova_Vector_Nova_testLambda11(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context4* context);

void nova_math_Nova_Vector_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector* nova_math_Nova_Vector_0_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Vector_Nova_size)
{
	CCLASS_NEW(nova_math_Nova_Vector, this,);
	this->vtable = &nova_math_Vector_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector_0_Nova_this(this, exceptionData, nova_math_Nova_Vector_Nova_size);
	}
	
	return this;
}

nova_math_Nova_Vector* nova_math_Nova_Vector_1_Nova_construct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data)
{
	CCLASS_NEW(nova_math_Nova_Vector, this,);
	this->vtable = &nova_math_Vector_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector_1_Nova_this(this, exceptionData, nova_math_Nova_Vector_Nova_data);
	}
	
	return this;
}

void nova_math_Nova_Vector_Nova_destroy(nova_math_Nova_Vector** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_DoubleArray_Nova_destroy(&(*this)->nova_math_Nova_Vector_Nova_data, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector_0_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Vector_Nova_size)
{
	nova_math_Nova_Vector_1_Nova_this(this, exceptionData, nova_datastruct_list_Nova_DoubleArray_2_Nova_construct(0, exceptionData, nova_math_Nova_Vector_Nova_size));
}

void nova_math_Nova_Vector_1_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data)
{
	this->nova_math_Nova_Vector_Nova_data = nova_math_Nova_Vector_Nova_data;
}

double nova_math_Nova_Vector_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	Context1 contextArg8 = 
	{
		&nova_math_Nova_Vector_Nova_other,
	};
	
	return nova_datastruct_list_Nova_DoubleArray_Nova_sum(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure3_Nova_func)&nova_math_Nova_Vector_Nova_testLambda8, this, &contextArg8);
}

double nova_math_Nova_Vector_Nova_innerProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	return nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, nova_math_Nova_Vector_Nova_other);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_scale(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_scalar)
{
	Context2 contextArg9 = 
	{
		&nova_math_Nova_Vector_Nova_scalar,
	};
	
	return (nova_datastruct_list_Nova_DoubleArray*)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_forEach(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure9_Nova_func)&nova_math_Nova_Vector_Nova_testLambda9, this, &contextArg9);
}

nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_normalize(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context3 contextArg10 = 
	{
	};
	
	return (nova_datastruct_list_Nova_DoubleArray*)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_forEach(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure9_Nova_func)&nova_math_Nova_Vector_Nova_testLambda10, this, &contextArg10);
}

nova_Nova_String* nova_math_Nova_Vector_Nova_toString(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_DoubleArray_Nova_join(this->nova_math_Nova_Vector_Nova_data, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))));
}

double nova_math_Nova_Vector_Nova_testLambda8(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_x, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context1* context)
{
	return nova_math_Nova_Vector_Nova_x * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((*context->nova_math_Nova_Vector_Nova_other)->nova_math_Nova_Vector_Nova_data, exceptionData, nova_math_Nova_Vector_Nova_i);
}

void nova_math_Nova_Vector_Nova_testLambda9(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_d, Context2* context)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Vector_Nova_d, exceptionData, nova_math_Nova_Vector_Nova_i, nova_math_Nova_Vector_Nova_n * (*context->nova_math_Nova_Vector_Nova_scalar));
}

void nova_math_Nova_Vector_Nova_testLambda10(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_d, Context3* context)
{
	double nova_zero_check1 = 0;
	double nova_zero_check2 = 0;
	
	nova_zero_check1 = nova_math_Nova_Vector_Accessor_Nova_magnitude(this, exceptionData);
	if (nova_zero_check1 == 0)
	{
		THROW(2, nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData));
	}
	nova_datastruct_list_Nova_DoubleArray_Nova_set(nova_math_Nova_Vector_Nova_d, exceptionData, nova_math_Nova_Vector_Nova_i, nova_math_Nova_Vector_Nova_n / nova_zero_check2);
	nova_zero_check2 = nova_zero_check1;
	if (nova_zero_check2 == 0)
	{
		THROW(2, nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData));
	}
}

double nova_math_Nova_Vector_Nova_testLambda11(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_n, int nova_math_Nova_Vector_Nova__2, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context4* context)
{
	return nova_math_Nova_Vector_Nova_n * nova_math_Nova_Vector_Nova_n;
}

double nova_math_Nova_Vector_Accessor_Nova_magnitude(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg11 = 
	{
	};
	
	return nova_math_Nova_Math_static_Nova_sqrt(0, exceptionData, nova_datastruct_list_Nova_DoubleArray_Nova_sum(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure3_Nova_func)&nova_math_Nova_Vector_Nova_testLambda11, this, &contextArg11));
}


void nova_math_Nova_Vector_Nova_super(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Vector_Nova_data = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
}

double nova_math_Nova_Vector_virtual_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	return this->vtable->nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, nova_math_Nova_Vector_Nova_other);
}


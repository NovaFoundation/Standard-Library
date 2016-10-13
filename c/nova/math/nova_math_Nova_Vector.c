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
	/* Int sum */ int* nova_math_Nova_Vector_Nova_sum;
	/* Vector other */ nova_math_Nova_Vector** nova_math_Nova_Vector_Nova_other;
} Context1;


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
	nova_math_Nova_Vector_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_math_Nova_Vector_Nova_dotProduct,
};



void nova_math_Nova_Vector_static_Nova_testLambda24(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_x, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context1* context);
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
	nova_math_Nova_Vector_1_Nova_this(this, exceptionData, nova_datastruct_list_Nova_DoubleArray_1_Nova_construct(0, exceptionData, nova_math_Nova_Vector_Nova_size));
}

void nova_math_Nova_Vector_1_Nova_this(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data)
{
	this->nova_math_Nova_Vector_Nova_data = nova_math_Nova_Vector_Nova_data;
}

double nova_math_Nova_Vector_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	int l1_Nova_sum = 0;
	Context1 contextArg24 = 
	{
		&l1_Nova_sum,
		&nova_math_Nova_Vector_Nova_other,
	};
	
	l1_Nova_sum = (int)(0);
	nova_datastruct_list_Nova_DoubleArray_Nova_forEach(this->nova_math_Nova_Vector_Nova_data, exceptionData, (nova_datastruct_list_Nova_DoubleArray_closure6_Nova_func)&nova_math_Nova_Vector_static_Nova_testLambda24, this, &contextArg24);
	return (double)l1_Nova_sum;
}

double nova_math_Nova_Vector_Nova_innerProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	return nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, nova_math_Nova_Vector_Nova_other);
}

nova_Nova_String* nova_math_Nova_Vector_Nova_toString(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_DoubleArray_Nova_join(this->nova_math_Nova_Vector_Nova_data, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))));
}

void nova_math_Nova_Vector_static_Nova_testLambda24(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Vector_Nova_x, int nova_math_Nova_Vector_Nova_i, nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova__3, Context1* context)
{
	(*context->nova_math_Nova_Vector_Nova_sum) += nova_math_Nova_Vector_Nova_x * (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get((*context->nova_math_Nova_Vector_Nova_other)->nova_math_Nova_Vector_Nova_data, exceptionData, nova_math_Nova_Vector_Nova_i);
}

void nova_math_Nova_Vector_Nova_super(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Vector_Nova_data = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
}

double nova_math_Nova_Vector_virtual_Nova_dotProduct(nova_math_Nova_Vector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector* nova_math_Nova_Vector_Nova_other)
{
	return this->vtable->nova_math_Nova_Vector_virtual_Nova_dotProduct((nova_math_Nova_Vector*)(this), exceptionData, nova_math_Nova_Vector_Nova_other);
}


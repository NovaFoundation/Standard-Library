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
#include <nova/regex/nova_regex_Nova_Pattern.h>
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_math_Vector4D_Extension_VTable nova_math_Vector4D_Extension_VTable_val =
{
	0,
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
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	},
	nova_math_Nova_Vector_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_math_Nova_Vector_Nova_dotProduct,
};


void nova_math_Nova_Vector4D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_Nova_Vector4D* nova_math_Nova_Vector4D_0_Nova_construct(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_Vector4D, this,);
	this->vtable = &nova_math_Vector4D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super((nova_math_Nova_Vector*)this, exceptionData);
	nova_math_Nova_Vector4D_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector4D_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_math_Nova_Vector4D* nova_math_Nova_Vector4D_1_Nova_construct(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z, double w)
{
	CCLASS_NEW(nova_math_Nova_Vector4D, this,);
	this->vtable = &nova_math_Vector4D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Vector_Nova_super((nova_math_Nova_Vector*)this, exceptionData);
	nova_math_Nova_Vector4D_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Vector4D_5_Nova_this(this, exceptionData, x, y, z, w);
	}
	
	return this;
}

void nova_math_Nova_Vector4D_Nova_destroy(nova_math_Nova_Vector4D** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Vector4D_4_Nova_this(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_math_Nova_Vector_0_Nova_this((nova_math_Nova_Vector*)(this), exceptionData, 4);
}

void nova_math_Nova_Vector4D_5_Nova_this(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z, double w)
{
	nova_math_Nova_Vector4D_4_Nova_this(this, exceptionData);
	nova_math_Nova_Vector4D_Mutator_Nova_x(this, exceptionData, x);
	nova_math_Nova_Vector4D_Mutator_Nova_y(this, exceptionData, y);
	nova_math_Nova_Vector4D_Mutator_Nova_z(this, exceptionData, z);
	nova_math_Nova_Vector4D_Mutator_Nova_w(this, exceptionData, w);
}

double nova_math_Nova_Vector4D_Accessor_Nova_x(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 0);
}

double nova_math_Nova_Vector4D_Mutator_Nova_x(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 0, value);
	return value;
}

double nova_math_Nova_Vector4D_Accessor_Nova_y(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 1);
}

double nova_math_Nova_Vector4D_Mutator_Nova_y(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 1, value);
	return value;
}

double nova_math_Nova_Vector4D_Accessor_Nova_z(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 2);
}

double nova_math_Nova_Vector4D_Mutator_Nova_z(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 2, value);
	return value;
}

double nova_math_Nova_Vector4D_Accessor_Nova_w(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (double)(intptr_t)nova_datastruct_list_Nova_DoubleArray_Nova_get(this->nova_math_Nova_Vector_Nova_data, exceptionData, 3);
}

double nova_math_Nova_Vector4D_Mutator_Nova_w(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	nova_datastruct_list_Nova_DoubleArray_Nova_set(this->nova_math_Nova_Vector_Nova_data, exceptionData, 3, value);
	return value;
}

void nova_math_Nova_Vector4D_Nova_super(nova_math_Nova_Vector4D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


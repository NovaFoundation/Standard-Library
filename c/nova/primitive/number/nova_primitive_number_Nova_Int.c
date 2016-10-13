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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_primitive_number_Int_Extension_VTable nova_primitive_number_Int_Extension_VTable_val =
{
	{
		(int(*)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_primitive_number_Nova_Int_0_Nova_compareTo,
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
		(nova_Nova_Object*(*)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_primitive_number_Nova_Int_Nova_multiply,
		0,
		0,
		0,
	},
	nova_primitive_number_Nova_Int_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_primitive_number_Nova_Int_static_Nova_numDigits,
	nova_primitive_number_Nova_Int_0_Nova_compareTo,
	nova_primitive_number_Nova_Int_Nova_multiply,
};


int nova_primitive_number_Nova_Int_Nova_MAX_VALUE;
int nova_primitive_number_Nova_Int_Nova_MIN_VALUE;
void nova_primitive_number_Nova_Int_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_primitive_number_Nova_Int_Nova_MAX_VALUE = 2147483647;
		nova_primitive_number_Nova_Int_Nova_MIN_VALUE = -2147483648LL;
	}
}

nova_primitive_number_Nova_Int* nova_primitive_number_Nova_Int_Nova_construct(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_value)
{
	CCLASS_NEW(nova_primitive_number_Nova_Int, this,);
	this->vtable = &nova_primitive_number_Int_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_Nova_super((nova_primitive_number_Nova_Number*)this, exceptionData);
	nova_primitive_number_Nova_Int_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Int_Nova_this(this, exceptionData, nova_primitive_number_Nova_Int_Nova_value);
	}
	
	return this;
}

void nova_primitive_number_Nova_Int_Nova_destroy(nova_primitive_number_Nova_Int** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_Int_Nova_this(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_value)
{
	this->nova_primitive_number_Nova_Int_Nova_value = nova_primitive_number_Nova_Int_Nova_value;
}

long_long nova_primitive_number_Nova_Int_Nova_getHashCodeLong(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (long_long)this->nova_primitive_number_Nova_Int_Nova_value;
}

int nova_primitive_number_Nova_Int_static_Nova_numDigits(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_number)
{
	return nova_primitive_number_Nova_Long_static_Nova_numDigits(0, exceptionData, nova_primitive_number_Nova_Int_Nova_number);
}

nova_Nova_String* nova_primitive_number_Nova_Int_static_Nova_toString(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_value)
{
	return nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_primitive_number_Nova_Int_Nova_value);
}

nova_Nova_String* nova_primitive_number_Nova_Int_Nova_toString(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->nova_primitive_number_Nova_Int_Nova_value);
}

int nova_primitive_number_Nova_Int_static_Nova_parseInt(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_primitive_number_Nova_Int_Nova_num)
{
	return atoi((char*)(nova_primitive_number_Nova_Int_Nova_num->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
}

int nova_primitive_number_Nova_Int_0_Nova_compareTo(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_other)
{
	return this->nova_primitive_number_Nova_Int_Nova_value - nova_primitive_number_Nova_Int_Nova_other;
}

int nova_primitive_number_Nova_Int_Nova_multiply(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_primitive_number_Nova_Int_Nova_value)
{
	return this->nova_primitive_number_Nova_Int_Nova_value * nova_primitive_number_Nova_Int_Nova_value;
}

void nova_primitive_number_Nova_Int_Nova_super(nova_primitive_number_Nova_Int* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_primitive_number_Nova_Int_Nova_value = 0;
}


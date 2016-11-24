#include <precompiled.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_io_OutputStream_Extension_VTable nova_io_OutputStream_Extension_VTable_val =
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_io_Nova_OutputStream_virtual_Nova_write,
};


void nova_io_Nova_OutputStream_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_OutputStream* nova_io_Nova_OutputStream_Nova_construct(nova_io_Nova_OutputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_io_Nova_OutputStream, this,);
	this->vtable = &nova_io_OutputStream_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_OutputStream_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_OutputStream_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_io_Nova_OutputStream_Nova_destroy(nova_io_Nova_OutputStream** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}


void nova_io_Nova_OutputStream_Nova_this(nova_io_Nova_OutputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_OutputStream_Nova_super(nova_io_Nova_OutputStream* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_io_Nova_OutputStream_virtual_Nova_write(nova_io_Nova_OutputStream* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* data)
{
	return this->vtable->nova_io_Nova_OutputStream_virtual_Nova_write((nova_io_Nova_OutputStream*)(this), exceptionData, data);
}


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
#include <nova/thread/async/nova_thread_async_Nova_AsyncResult.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_thread_async_Async_Extension_VTable nova_thread_async_Async_Extension_VTable_val =
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
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void nova_thread_async_Nova_Async_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_thread_async_Nova_Async* nova_thread_async_Nova_Async_Nova_construct(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_thread_async_Nova_Async, this,);
	this->vtable = &nova_thread_async_Async_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_async_Nova_Async_Nova_super(this, exceptionData);
	
	{
		nova_thread_async_Nova_Async_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_thread_async_Nova_Async_Nova_destroy(nova_thread_async_Nova_Async** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_thread_async_Nova_AsyncResult* nova_thread_async_Nova_Async_static_Nova_execute(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData, nova_thread_async_Nova_Async_closure3_Nova_func nova_thread_async_Nova_Async_Nova_func, void* nova_thread_async_Nova_Async_ref_Nova_func, void* func_context)
{
	nova_thread_async_Nova_AsyncResult* l1_Nova_result = (nova_thread_async_Nova_AsyncResult*)nova_null;
	
	l1_Nova_result = nova_thread_async_Nova_AsyncResult_Nova_construct(0, exceptionData);
	nova_thread_async_Nova_Async_Nova_func(nova_thread_async_Nova_Async_ref_Nova_func, exceptionData, func_context);
	return l1_Nova_result;
}

void nova_thread_async_Nova_Async_Nova_this(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_thread_async_Nova_Async_Nova_super(nova_thread_async_Nova_Async* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


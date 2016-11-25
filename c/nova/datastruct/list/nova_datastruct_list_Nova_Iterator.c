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



nova_datastruct_list_Iterator_Extension_VTable nova_datastruct_list_Iterator_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		0,
		(char(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Iterator_Accessor_Nova_hasNext,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Iterator_Accessor_Nova_next,
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
	},
};





void nova_datastruct_list_Nova_Iterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}


char nova_datastruct_list_Nova_Iterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return 0;
}


nova_Nova_Object* nova_datastruct_list_Nova_Iterator_Accessor_Nova_next(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}


nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_Iterator_virtual_Nova_reset(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_Iterator_virtual_Nova_reset((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

char nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next(nova_datastruct_list_Nova_Iterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}


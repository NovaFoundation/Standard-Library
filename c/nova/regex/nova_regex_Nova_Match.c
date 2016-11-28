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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_regex_Match_Extension_VTable nova_regex_Match_Extension_VTable_val =
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
	nova_regex_Nova_Match_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};





void nova_regex_Nova_Match_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_regex_Nova_Match* nova_regex_Nova_Match_Nova_construct(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	CCLASS_NEW(nova_regex_Nova_Match, this,);
	this->vtable = &nova_regex_Match_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_regex_Nova_Match_Nova_super(this, exceptionData);
	
	{
		nova_regex_Nova_Match_Nova_this(this, exceptionData, source, start, end);
	}
	
	return this;
}

void nova_regex_Nova_Match_Nova_destroy(nova_regex_Nova_Match** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_regex_Nova_Match_Nova_source, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_regex_Nova_Match_Nova_this(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	this->nova_regex_Nova_Match_Nova_source = source;
	this->nova_regex_Nova_Match_Nova_start = start;
	this->nova_regex_Nova_Match_Nova_end = end;
}

nova_Nova_String* nova_regex_Nova_Match_Nova_toString(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_regex_Nova_Match_Accessor_Nova_match(this, exceptionData);
}

int nova_regex_Nova_Match_Accessor_Nova_count(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_regex_Nova_Match_Nova_end - this->nova_regex_Nova_Match_Nova_start;
}


nova_Nova_String* nova_regex_Nova_Match_Accessor_Nova_match(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_regex_Nova_Match_Nova_source), exceptionData, this->nova_regex_Nova_Match_Nova_start, this->nova_regex_Nova_Match_Nova_end);
}


void nova_regex_Nova_Match_Nova_super(nova_regex_Nova_Match* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_regex_Nova_Match_Nova_start = 0;
	this->nova_regex_Nova_Match_Nova_end = 0;
	this->nova_regex_Nova_Match_Nova_source = (nova_Nova_String*)nova_null;
}


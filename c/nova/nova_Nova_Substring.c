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
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/regex/nova_regex_Nova_Regex.h>
#include <nova/regex/nova_regex_Nova_Match.h>
#include <nova/nova_Nova_Substring.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_Substring_Extension_VTable nova_Substring_Extension_VTable_val =
{
	0,
	{
		(int(*)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_String_Nova_compareTo,
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_String_Nova_equals,
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
	nova_Nova_String_Nova_toString,
	nova_Nova_String_Accessor_Nova_hashCodeLong,
	nova_Nova_String_Nova_concat,
	nova_Nova_Substring_Nova_substring,
};




void nova_Nova_Substring_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_Substring* nova_Nova_Substring_Nova_construct(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	CCLASS_NEW(nova_Nova_Substring, this,);
	this->vtable = &nova_Substring_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super((nova_Nova_String*)this, exceptionData);
	nova_Nova_Substring_Nova_super(this, exceptionData);
	
	{
		nova_Nova_Substring_Nova_this(this, exceptionData, source, start, end);
	}
	
	return this;
}

void nova_Nova_Substring_Nova_destroy(nova_Nova_Substring** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_Nova_Substring_Nova_source, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_Nova_Substring_Nova_this(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source, int start, int end)
{
	char* l1_Nova_buf = (char*)nova_null;
	
	this->nova_Nova_Substring_Nova_source = source;
	this->nova_Nova_Substring_Nova_start = start;
	this->nova_Nova_String_Nova_count = end - start;
	l1_Nova_buf = &((char*)source->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)[start];
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(0, exceptionData, l1_Nova_buf, this->nova_Nova_String_Nova_count);
}

nova_Nova_String* nova_Nova_Substring_Nova_substring(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	start = (int)(start == (intptr_t)nova_null ? 0 : start);
	end = (int)(end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count : end);
	if (!nova_Nova_String_Nova_validateSubstringBounds((nova_Nova_String*)(this), exceptionData, start, end, 1))
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	else if (start == end)
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	}
	else if (start == 0 && end == this->nova_Nova_String_Nova_count)
	{
		return (nova_Nova_String*)this;
	}
	return (nova_Nova_String*)nova_Nova_Substring_Nova_construct(0, exceptionData, this->nova_Nova_Substring_Nova_source, this->nova_Nova_Substring_Nova_start + start, this->nova_Nova_Substring_Nova_start + end);
}

int nova_Nova_Substring_Accessor_Nova_end(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_Nova_Substring_Nova_start + this->nova_Nova_String_Nova_count;
}


void nova_Nova_Substring_Nova_super(nova_Nova_Substring* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_Nova_Substring_Nova_source = (nova_Nova_String*)nova_null;
	this->nova_Nova_Substring_Nova_start = 0;
}


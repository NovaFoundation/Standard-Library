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



nova_datastruct_Bounds_Extension_VTable nova_datastruct_Bounds_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_Nova_Bounds_Nova_equals,
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
	nova_datastruct_Nova_Bounds_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};







void nova_datastruct_Nova_Bounds_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_0_Nova_construct(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_Bounds, this,);
	this->vtable = &nova_datastruct_Bounds_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Bounds_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Bounds_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_1_Nova_construct(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	CCLASS_NEW(nova_datastruct_Nova_Bounds, this,);
	this->vtable = &nova_datastruct_Bounds_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Bounds_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Bounds_5_Nova_this(this, exceptionData, start, end);
	}
	
	return this;
}

void nova_datastruct_Nova_Bounds_Nova_destroy(nova_datastruct_Nova_Bounds** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Bounds_4_Nova_this(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_Nova_Bounds_5_Nova_this(this, exceptionData, 0, 0);
}

void nova_datastruct_Nova_Bounds_5_Nova_this(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, int start, int end)
{
	this->nova_datastruct_Nova_Bounds_Nova_start = start;
	this->nova_datastruct_Nova_Bounds_Nova_end = end;
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	if (!nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData))
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start, this->nova_datastruct_Nova_Bounds_Nova_end);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractPreString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	if (!nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData))
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, 0, this->nova_datastruct_Nova_Bounds_Nova_start);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_extractPostString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	if (!nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData))
	{
		return source;
	}
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(source), exceptionData, this->nova_datastruct_Nova_Bounds_Nova_end, (intptr_t)nova_null);
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_trimString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* source)
{
	if (!nova_datastruct_Nova_Bounds_Accessor_Nova_valid(this, exceptionData))
	{
		return source;
	}
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_datastruct_Nova_Bounds_Nova_extractPreString(this, exceptionData, source)), exceptionData, nova_datastruct_Nova_Bounds_Nova_extractPostString(this, exceptionData, source));
}

void nova_datastruct_Nova_Bounds_Nova_invalidate(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Bounds_Nova_start = (int)(-1);
	this->nova_datastruct_Nova_Bounds_Nova_end = (int)(-1);
}

char nova_datastruct_Nova_Bounds_Nova_equals(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	return (nova_Nova_Object*)bounds != (nova_Nova_Object*)(nova_datastruct_Nova_Bounds*)nova_null && bounds->nova_datastruct_Nova_Bounds_Nova_start == this->nova_datastruct_Nova_Bounds_Nova_start && bounds->nova_datastruct_Nova_Bounds_Nova_end == this->nova_datastruct_Nova_Bounds_Nova_end;
}

nova_Nova_String* nova_datastruct_Nova_Bounds_Nova_toString(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))))));
}

void nova_datastruct_Nova_Bounds_Nova_cloneTo(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Bounds* bounds)
{
	bounds->nova_datastruct_Nova_Bounds_Nova_start = this->nova_datastruct_Nova_Bounds_Nova_start;
	bounds->nova_datastruct_Nova_Bounds_Nova_end = this->nova_datastruct_Nova_Bounds_Nova_end;
}

nova_datastruct_Nova_Bounds* nova_datastruct_Nova_Bounds_Nova_clone(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Bounds_1_Nova_construct(0, exceptionData, this->nova_datastruct_Nova_Bounds_Nova_start, this->nova_datastruct_Nova_Bounds_Nova_end);
}

char nova_datastruct_Nova_Bounds_Accessor_Nova_valid(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_start >= 0 && this->nova_datastruct_Nova_Bounds_Nova_end > 0;
}


char nova_datastruct_Nova_Bounds_Accessor_Nova_endless(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_end < 0;
}


char nova_datastruct_Nova_Bounds_Accessor_Nova_optional(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_start == 0;
}


int nova_datastruct_Nova_Bounds_Accessor_Nova_size(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_Nova_Bounds_Nova_end - this->nova_datastruct_Nova_Bounds_Nova_start;
}


void nova_datastruct_Nova_Bounds_Nova_super(nova_datastruct_Nova_Bounds* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Bounds_Nova_start = 0;
	this->nova_datastruct_Nova_Bounds_Nova_end = 0;
}


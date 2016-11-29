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
#include <nova/security/NativeMD5.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_security_MD5_Extension_VTable nova_security_MD5_Extension_VTable_val =
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


void nova_security_Nova_MD5_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_security_Nova_MD5* nova_security_Nova_MD5_Nova_construct(nova_security_Nova_MD5* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_security_Nova_MD5, this,);
	this->vtable = &nova_security_MD5_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_security_Nova_MD5_Nova_super(this, exceptionData);
	
	{
		nova_security_Nova_MD5_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_security_Nova_MD5_Nova_destroy(nova_security_Nova_MD5** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_Nova_String* nova_security_Nova_MD5_static_Nova_encrypt(nova_security_Nova_MD5* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str)
{
	char* l1_Nova_data = (char*)nova_null;
	
	l1_Nova_data = (char*)(nova_md5((char*)(str->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)));
	if ((nova_primitive_number_Nova_Byte*)l1_Nova_data == (nova_primitive_number_Nova_Byte*)0)
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_data);
}

void nova_security_Nova_MD5_Nova_this(nova_security_Nova_MD5* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_security_Nova_MD5_Nova_super(nova_security_Nova_MD5* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


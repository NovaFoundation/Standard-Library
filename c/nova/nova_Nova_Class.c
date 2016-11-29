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

typedef struct
{
	/* Class other */ nova_Nova_Class** nova_Nova_Class_Nova_other;
} Context1;


nova_Class_Extension_VTable nova_Class_Extension_VTable_val =
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
	nova_Nova_Class_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



char nova_Nova_Class_Nova_isOfTypeClass(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* other);
char nova_Nova_Class_Nova_isOfTypeInterface(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* other);
char nova_Nova_Class_Nova_testLambda52(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, Context1* context);


void nova_Nova_Class_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_Class* nova_Nova_Class_Nova_construct(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface)
{
	CCLASS_NEW(nova_Nova_Class, this,);
	this->vtable = &nova_Class_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_Class_Nova_super(this, exceptionData);
	
	{
		nova_Nova_Class_Nova_this(this, exceptionData, location, isInterface);
	}
	
	return this;
}

void nova_Nova_Class_Nova_destroy(nova_Nova_Class** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_Class_Nova_destroy(&(*this)->nova_Nova_Class_Nova_extension, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_Nova_Class_Nova_interfaces, exceptionData);
	
	nova_Nova_String_Nova_destroy(&(*this)->nova_Nova_Class_Nova_location, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_Nova_Class_Nova_this(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, char isInterface)
{
	this->nova_Nova_Class_Nova_location = location;
	this->nova_Nova_Class_Nova_isInterface = isInterface;
}

char nova_Nova_Class_Nova_isOfType(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* other)
{
	return (char)(other->nova_Nova_Class_Nova_isInterface ? nova_Nova_Class_Nova_isOfTypeInterface(this, exceptionData, other) : nova_Nova_Class_Nova_isOfTypeClass(this, exceptionData, other));
}

char nova_Nova_Class_Nova_isOfTypeClass(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* other)
{
	nova_Nova_Class* l1_Nova_current = (nova_Nova_Class*)nova_null;
	
	l1_Nova_current = this;
	while (l1_Nova_current != (nova_Nova_Class*)nova_null)
	{
		if (l1_Nova_current == other)
		{
			return 1;
		}
		l1_Nova_current = l1_Nova_current->nova_Nova_Class_Nova_extension;
	}
	return 0;
}

char nova_Nova_Class_Nova_isOfTypeInterface(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* other)
{
	nova_Nova_Class* l1_Nova_current = (nova_Nova_Class*)nova_null;
	
	l1_Nova_current = this;
	while (l1_Nova_current != (nova_Nova_Class*)nova_null)
	{
		Context1 contextArg52 = 
		{
			&other,
		};
		
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(l1_Nova_current->nova_Nova_Class_Nova_interfaces), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&nova_Nova_Class_Nova_testLambda52, this, &contextArg52))
		{
			return 1;
		}
		l1_Nova_current = l1_Nova_current->nova_Nova_Class_Nova_extension;
	}
	return 0;
}

nova_Nova_String* nova_Nova_Class_Nova_toString(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Class \""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->nova_Nova_Class_Nova_location)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\""))));
}

char nova_Nova_Class_Nova_testLambda52(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, Context1* context)
{
	return _1 == (*context->nova_Nova_Class_Nova_other);
}

nova_Nova_String* nova_Nova_Class_Accessor_Nova_package(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_Nova_Class_Nova_location), exceptionData, 0, nova_Nova_String_1_Nova_lastIndexOf(this->nova_Nova_Class_Nova_location, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, 0));
}


nova_Nova_String* nova_Nova_Class_Accessor_Nova_name(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_Nova_Class_Nova_location), exceptionData, nova_Nova_String_1_Nova_lastIndexOf(this->nova_Nova_Class_Nova_location, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/")), (intptr_t)nova_null, (intptr_t)nova_null) + 1, (intptr_t)nova_null);
}


void nova_Nova_Class_Nova_super(nova_Nova_Class* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_Nova_Class_Nova_extension = (nova_Nova_Class*)nova_null;
	this->nova_Nova_Class_Nova_interfaces = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_Nova_Class_Nova_isInterface = 0;
	this->nova_Nova_Class_Nova_location = (nova_Nova_String*)nova_null;
	this->nova_Nova_Class_Nova_interfaces = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}


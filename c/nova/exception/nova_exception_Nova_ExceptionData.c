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
#include <signal.h>
#include <NovaExceptionHandling.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Exception exception */ nova_exception_Nova_Exception** nova_exception_Nova_ExceptionData_Nova_exception;
} Context1;


nova_exception_ExceptionData_Extension_VTable nova_exception_ExceptionData_Extension_VTable_val =
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
};



char nova_exception_Nova_ExceptionData_Nova_testLambda37(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, Context1* context);
void nova_exception_Nova_ExceptionData_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_construct(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionData, this,);
	this->vtable = &nova_exception_ExceptionData_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_ExceptionData_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionData_Nova_this(this, exceptionData, buf);
	}
	
	return this;
}

void nova_exception_Nova_ExceptionData_Nova_destroy(nova_exception_Nova_ExceptionData** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_exception_Nova_ExceptionData_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_parent, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_caught, exceptionData);
	nova_exception_Nova_Exception_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_thrownException, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionData_Nova_this(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* buf)
{
	this->nova_exception_Nova_ExceptionData_Nova_buf = buf;
	this->nova_exception_Nova_ExceptionData_Nova_caught = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
}

void nova_exception_Nova_ExceptionData_Nova_addCaught(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* exceptionClass)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->nova_exception_Nova_ExceptionData_Nova_caught), exceptionData, (nova_Nova_Object*)(exceptionClass));
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_getDataByException(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* exception)
{
	nova_exception_Nova_ExceptionData* l1_Nova_data = (nova_exception_Nova_ExceptionData*)nova_null;
	
	l1_Nova_data = this;
	for (;;)
	{
		Context1 contextArg37 = 
		{
			&exception,
		};
		
		if (nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_caught), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&nova_exception_Nova_ExceptionData_Nova_testLambda37, this, &contextArg37) || l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent == (nova_exception_Nova_ExceptionData*)nova_null)
		{
			return l1_Nova_data;
		}
		l1_Nova_data = l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent;
	}
}

void nova_exception_Nova_ExceptionData_Nova_jumpToBuffer(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_exception_Nova_Exception* exception)
{
	nova_exception_Nova_ExceptionData* l1_Nova_data = (nova_exception_Nova_ExceptionData*)nova_null;
	
	l1_Nova_data = nova_exception_Nova_ExceptionData_Nova_getDataByException(this, exceptionData, exception);
	jump(*l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_buf, (intptr_t)exception);
}

char nova_exception_Nova_ExceptionData_Nova_testLambda37(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Class* _1, Context1* context)
{
	return nova_Nova_Class_Nova_isOfType((*context->nova_exception_Nova_ExceptionData_Nova_exception)->vtable->classInstance, exceptionData, _1);
}

void nova_exception_Nova_ExceptionData_Nova_super(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_exception_Nova_ExceptionData_Nova_parent = (nova_exception_Nova_ExceptionData*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_caught = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_thrownException = (nova_exception_Nova_Exception*)nova_null;
}


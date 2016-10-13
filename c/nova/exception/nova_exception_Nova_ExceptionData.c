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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Int code */ int* nova_exception_Nova_ExceptionData_Nova_code;
} Context1;


nova_exception_ExceptionData_Extension_VTable nova_exception_ExceptionData_Extension_VTable_val =
{
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_getDataByCode(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova_code);
char nova_exception_Nova_ExceptionData_static_Nova_testLambda20(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova__1, Context1* context);
void nova_exception_Nova_ExceptionData_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_construct(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* nova_exception_Nova_ExceptionData_Nova_buf)
{
	CCLASS_NEW(nova_exception_Nova_ExceptionData, this,);
	this->vtable = &nova_exception_ExceptionData_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_exception_Nova_ExceptionData_Nova_super(this, exceptionData);
	
	{
		nova_exception_Nova_ExceptionData_Nova_this(this, exceptionData, nova_exception_Nova_ExceptionData_Nova_buf);
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
	nova_datastruct_list_Nova_IntArray_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_codes, exceptionData);
	nova_exception_Nova_Exception_Nova_destroy(&(*this)->nova_exception_Nova_ExceptionData_Nova_thrownException, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_exception_Nova_ExceptionData_Nova_this(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, buffer* nova_exception_Nova_ExceptionData_Nova_buf)
{
	this->nova_exception_Nova_ExceptionData_Nova_buf = nova_exception_Nova_ExceptionData_Nova_buf;
	this->nova_exception_Nova_ExceptionData_Nova_codes = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
}

void nova_exception_Nova_ExceptionData_Nova_addCode(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova_code)
{
	nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this->nova_exception_Nova_ExceptionData_Nova_codes), exceptionData, (nova_Nova_Object*)(nova_exception_Nova_ExceptionData_Nova_code));
}

nova_exception_Nova_ExceptionData* nova_exception_Nova_ExceptionData_Nova_getDataByCode(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova_code)
{
	nova_exception_Nova_ExceptionData* l1_Nova_data = (nova_exception_Nova_ExceptionData*)nova_null;
	
	l1_Nova_data = this;
	for (;;)
	{
		Context1 contextArg20 = 
		{
			&nova_exception_Nova_ExceptionData_Nova_code,
		};
		
		if (nova_datastruct_list_Nova_IntArray_Nova_any(l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_codes, exceptionData, (nova_datastruct_list_Nova_IntArray_closure9_Nova_anyFunc)&nova_exception_Nova_ExceptionData_static_Nova_testLambda20, this, &contextArg20) || l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent == (nova_exception_Nova_ExceptionData*)nova_null)
		{
			return l1_Nova_data;
		}
		l1_Nova_data = l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent;
	}
	return (nova_exception_Nova_ExceptionData*)(nova_Nova_Object*)nova_null;
}

void nova_exception_Nova_ExceptionData_Nova_jumpToBuffer(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova_code)
{
	nova_exception_Nova_ExceptionData* l1_Nova_data = (nova_exception_Nova_ExceptionData*)nova_null;
	
	l1_Nova_data = nova_exception_Nova_ExceptionData_Nova_getDataByCode(this, exceptionData, nova_exception_Nova_ExceptionData_Nova_code);
	if (l1_Nova_data == NULL)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Could not get exception buffer!")));
		return;
	}
	if (l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_parent == (nova_exception_Nova_ExceptionData*)nova_null)
	{
		nova_exception_Nova_ExceptionData_Nova_code = (int)(1);
	}
	jump(*l1_Nova_data->nova_exception_Nova_ExceptionData_Nova_buf, nova_exception_Nova_ExceptionData_Nova_code);
}

char nova_exception_Nova_ExceptionData_static_Nova_testLambda20(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_exception_Nova_ExceptionData_Nova__1, Context1* context)
{
	return nova_exception_Nova_ExceptionData_Nova__1 == (*context->nova_exception_Nova_ExceptionData_Nova_code);
}

void nova_exception_Nova_ExceptionData_Nova_super(nova_exception_Nova_ExceptionData* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_exception_Nova_ExceptionData_Nova_buf = 0;
	this->nova_exception_Nova_ExceptionData_Nova_parent = (nova_exception_Nova_ExceptionData*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_codes = (nova_datastruct_list_Nova_IntArray*)nova_null;
	this->nova_exception_Nova_ExceptionData_Nova_thrownException = (nova_exception_Nova_Exception*)nova_null;
}


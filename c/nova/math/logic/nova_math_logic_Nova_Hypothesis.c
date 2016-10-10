#include <precompiled.h>
#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
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
#include <nova/math/logic/nova_math_logic_Nova_LogicalStatement.h>
#include <nova/math/nova_math_Nova_Statement.h>
#include <nova/math/logic/nova_math_logic_Nova_StatementComponent.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_math_logic_Hypothesis_Extension_VTable nova_math_logic_Hypothesis_Extension_VTable_val =
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
	nova_math_logic_Nova_LogicalStatement_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_Nova_String* nova_math_logic_Nova_LogicalStatement_Nova_statement;
	nova_datastruct_list_Nova_Array* nova_math_logic_Nova_LogicalStatement_Nova_components;
	
)
void nova_math_logic_Nova_Hypothesis_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_math_logic_Nova_Hypothesis* nova_math_logic_Nova_Hypothesis_Nova_construct(nova_math_logic_Nova_Hypothesis* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_math_logic_Nova_Hypothesis_Nova_statement)
{
	CCLASS_NEW(nova_math_logic_Nova_Hypothesis, this);
	this->vtable = &nova_math_logic_Hypothesis_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Statement_Nova_super((nova_math_Nova_Statement*)this, exceptionData);
	nova_math_logic_Nova_LogicalStatement_Nova_super((nova_math_logic_Nova_LogicalStatement*)this, exceptionData);
	nova_math_logic_Nova_Hypothesis_Nova_super(this, exceptionData);
	
	{
		nova_math_logic_Nova_Hypothesis_Nova_this(this, exceptionData, nova_math_logic_Nova_Hypothesis_Nova_statement);
	}
	
	return this;
}

void nova_math_logic_Nova_Hypothesis_Nova_destroy(nova_math_logic_Nova_Hypothesis** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_logic_Nova_Hypothesis_Nova_this(nova_math_logic_Nova_Hypothesis* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_math_logic_Nova_Hypothesis_Nova_statement)
{
	nova_math_logic_Nova_LogicalStatement_Nova_this((nova_math_logic_Nova_LogicalStatement*)(this), exceptionData, nova_math_logic_Nova_Hypothesis_Nova_statement);
}

void nova_math_logic_Nova_Hypothesis_Nova_super(nova_math_logic_Nova_Hypothesis* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


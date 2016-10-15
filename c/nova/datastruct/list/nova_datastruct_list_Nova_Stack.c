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
#include <nova/datastruct/list/nova_datastruct_list_Nova_EmptyStackException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_datastruct_list_Stack_Extension_VTable nova_datastruct_list_Stack_Extension_VTable_val =
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
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_Stack_Nova_top;
	
)


void nova_datastruct_list_Nova_Stack_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Stack* nova_datastruct_list_Nova_Stack_Nova_construct(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Stack, this);
	this->vtable = &nova_datastruct_list_Stack_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Stack_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Stack_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_list_Nova_Stack_Nova_destroy(nova_datastruct_list_Nova_Stack** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_ListNode_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_Stack_Nova_top, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_Stack_Nova_push(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_Stack_Nova_data)
{
	nova_datastruct_list_Nova_ListNode* l1_Nova_node = (nova_datastruct_list_Nova_ListNode*)nova_null;
	
	l1_Nova_node = nova_datastruct_list_Nova_ListNode_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_Stack_Nova_data);
	l1_Nova_node->nova_datastruct_list_Nova_ListNode_Nova_next = this->prv->nova_datastruct_list_Nova_Stack_Nova_top;
	this->prv->nova_datastruct_list_Nova_Stack_Nova_top = l1_Nova_node;
	this->nova_datastruct_list_Nova_Stack_Nova_size++;
}

nova_Nova_Object* nova_datastruct_list_Nova_Stack_Nova_pop(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_Object* l1_Nova_data = (nova_Nova_Object*)nova_null;
	
	if (nova_datastruct_list_Nova_Stack_Accessor_Nova_empty(this, exceptionData))
	{
		THROW(4, nova_datastruct_list_Nova_EmptyStackException_0_Nova_construct(0, exceptionData));
	}
	l1_Nova_data = this->prv->nova_datastruct_list_Nova_Stack_Nova_top->nova_datastruct_list_Nova_ListNode_Nova_data;
	this->prv->nova_datastruct_list_Nova_Stack_Nova_top = this->prv->nova_datastruct_list_Nova_Stack_Nova_top->nova_datastruct_list_Nova_ListNode_Nova_next;
	this->nova_datastruct_list_Nova_Stack_Nova_size--;
	return (nova_Nova_Object*)l1_Nova_data;
}

void nova_datastruct_list_Nova_Stack_Nova_this(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_datastruct_list_Nova_Stack_Accessor_Nova_empty(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)this->nova_datastruct_list_Nova_Stack_Nova_size <= 0;
}


void nova_datastruct_list_Nova_Stack_Nova_super(nova_datastruct_list_Nova_Stack* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_Stack_Nova_size = 0;
	this->prv->nova_datastruct_list_Nova_Stack_Nova_top = (nova_datastruct_list_Nova_ListNode*)nova_null;
}


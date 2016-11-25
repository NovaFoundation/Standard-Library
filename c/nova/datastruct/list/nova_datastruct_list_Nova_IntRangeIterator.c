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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_NoSuchElementException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_datastruct_list_IntRangeIterator_Extension_VTable nova_datastruct_list_IntRangeIterator_Extension_VTable_val =
{
	0,
	{
		0,
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_IntRangeIterator_Nova_reset,
		(char(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next,
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_IntRange* nova_datastruct_list_Nova_IntRangeIterator_Nova_range;
	
)



void nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_IntRangeIterator* nova_datastruct_list_Nova_IntRangeIterator_Nova_construct(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* range)
{
	CCLASS_NEW(nova_datastruct_list_Nova_IntRangeIterator, this);
	this->vtable = &nova_datastruct_list_IntRangeIterator_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_IntRangeIterator_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_IntRangeIterator_Nova_this(this, exceptionData, range);
	}
	
	return this;
}

void nova_datastruct_list_Nova_IntRangeIterator_Nova_destroy(nova_datastruct_list_Nova_IntRangeIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_IntRange_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_IntRangeIterator_Nova_range, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_IntRangeIterator_Nova_this(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntRange* range)
{
	this->prv->nova_datastruct_list_Nova_IntRangeIterator_Nova_range = range;
	nova_datastruct_list_Nova_IntRangeIterator_Nova_reset(this, exceptionData);
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_IntRangeIterator_Nova_reset(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_IntRangeIterator_Nova_position = this->prv->nova_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_datastruct_list_Nova_IntRange_Nova_start;
	return (nova_datastruct_list_Nova_Iterator*)this;
}

char nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_IntRangeIterator_Nova_position < this->prv->nova_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_datastruct_list_Nova_IntRange_Nova_end;
}


int nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(this, exceptionData))
	{
		return this->nova_datastruct_list_Nova_IntRangeIterator_Nova_position++;
	}
	THROW(nova_datastruct_list_Nova_NoSuchElementException_Nova_construct(0, exceptionData, 0), 0);
	return (int)(nova_Nova_Object*)nova_null;
}


void nova_datastruct_list_Nova_IntRangeIterator_Nova_super(nova_datastruct_list_Nova_IntRangeIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_IntRangeIterator_Nova_position = 0;
	this->prv->nova_datastruct_list_Nova_IntRangeIterator_Nova_range = (nova_datastruct_list_Nova_IntRange*)nova_null;
}


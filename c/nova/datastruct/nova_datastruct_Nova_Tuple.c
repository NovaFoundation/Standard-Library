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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_datastruct_Tuple_Extension_VTable nova_datastruct_Tuple_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_Nova_Tuple_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_Nova_Tuple_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_Nova_Tuple_0_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_Nova_Tuple_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_Nova_Tuple_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_Nova_Tuple_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_Nova_Tuple_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_Nova_Tuple_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_Nova_Tuple_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_Nova_Tuple_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_Nova_Tuple_0_Nova_firstWhere,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_Nova_Tuple_Nova_reverse,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_List_Nova_join,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_Mutator_Nova_count,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_count,
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






void nova_datastruct_Nova_Tuple_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_construct(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items)
{
	CCLASS_NEW(nova_datastruct_Nova_Tuple, this,);
	this->vtable = &nova_datastruct_Tuple_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Tuple_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Tuple_Nova_this(this, exceptionData, items);
	}
	
	return this;
}

void nova_datastruct_Nova_Tuple_Nova_destroy(nova_datastruct_Nova_Tuple** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_datastruct_Nova_Tuple_Nova_items, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Tuple_Nova_this(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items)
{
	this->nova_datastruct_Nova_Tuple_Nova_items = items;
}

char nova_datastruct_Nova_Tuple_0_Nova_contains(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_Nova_Object*)(value));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_toArray(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_Nova_toArray(this->nova_datastruct_Nova_Tuple_Nova_items, exceptionData);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_forEach(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure3_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)nova_datastruct_Nova_Tuple_Nova_func, nova_datastruct_Nova_Tuple_ref_Nova_func, func_context);
}

char nova_datastruct_Nova_Tuple_0_Nova_any(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure6_Nova_anyFunc nova_datastruct_Nova_Tuple_Nova_anyFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_anyFunc, void* anyFunc_context)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)nova_datastruct_Nova_Tuple_Nova_anyFunc, nova_datastruct_Nova_Tuple_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_Nova_Tuple_0_Nova_all(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure9_Nova_allFunc nova_datastruct_Nova_Tuple_Nova_allFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_allFunc, void* allFunc_context)
{
	return nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)nova_datastruct_Nova_Tuple_Nova_allFunc, nova_datastruct_Nova_Tuple_ref_Nova_allFunc, allFunc_context, (intptr_t)nova_null);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_filter(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure12_Nova_filterFunc nova_datastruct_Nova_Tuple_Nova_filterFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_filterFunc, void* filterFunc_context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)nova_datastruct_Nova_Tuple_Nova_filterFunc, nova_datastruct_Nova_Tuple_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_take(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, howMany);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_skip(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_Nova_Tuple_0_Nova_firstWhere(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure15_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)nova_datastruct_Nova_Tuple_Nova_func, nova_datastruct_Nova_Tuple_ref_Nova_func, func_context);
}

nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_reverse(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Tuple_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData)));
}

nova_datastruct_list_Nova_List* nova_datastruct_Nova_Tuple_0_Nova_map(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure18_Nova_mapFunc nova_datastruct_Nova_Tuple_Nova_mapFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_mapFunc, void* mapFunc_context)
{
	return (nova_datastruct_list_Nova_List*)nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)nova_datastruct_Nova_Tuple_Nova_mapFunc, nova_datastruct_Nova_Tuple_ref_Nova_mapFunc, mapFunc_context);
}

nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_Nova_Tuple_Accessor_Nova_iterator(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ArrayIterator*)nova_datastruct_list_Nova_ArrayIterator_Nova_construct(0, exceptionData, this->nova_datastruct_Nova_Tuple_Nova_items);
}


nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessorfunc_Nova_first(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData);
}


nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessorfunc_Nova_last(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Tuple_Nova_items), exceptionData);
}


void nova_datastruct_Nova_Tuple_Nova_super(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Tuple_Nova_items = (nova_datastruct_list_Nova_Array*)nova_null;
}


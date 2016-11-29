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
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
	/* Char value */ char* nova_datastruct_list_Nova_CharArray_Nova_value;
} Context2;


nova_datastruct_list_CharArray_Extension_VTable nova_datastruct_list_CharArray_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_list_Nova_CharArray_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_CharArray_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_list_Nova_CharArray_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_list_Nova_CharArray_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_list_Nova_CharArray_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_list_Nova_CharArray_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_CharArray_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_CharArray_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_CharArray_Nova_firstWhere,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_CharArray_Nova_reverse,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_CharArray_Nova_join,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count,
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
	nova_datastruct_list_Nova_Array_Nova_toString,
	nova_datastruct_list_Nova_CharArray_Accessor_Nova_hashCodeLong,
	nova_datastruct_list_Nova_CharArray_Nova_addUnique,
	nova_datastruct_list_Nova_CharArray_Nova_get,
	nova_datastruct_list_Nova_CharArray_Nova_set,
	nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_first,
	nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_last,
};


CCLASS_PRIVATE
(
	int nova_datastruct_list_Nova_CharArray_Nova_indexSize;
	
)

long_long nova_datastruct_list_Nova_CharArray_Nova_testLambda9(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context1* context);
char nova_datastruct_list_Nova_CharArray_Nova_testLambda72(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, Context2* context);




void nova_datastruct_list_Nova_CharArray_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_0_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_1_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_5_Nova_this(this, exceptionData, count);
	}
	
	return this;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_2_Nova_construct(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArray, this);
	this->vtable = &nova_datastruct_list_CharArray_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super((nova_datastruct_list_Nova_Array*)this, exceptionData);
	nova_datastruct_list_Nova_CharArray_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArray_6_Nova_this(this, exceptionData, data, count);
	}
	
	return this;
}

void nova_datastruct_list_Nova_CharArray_Nova_destroy(nova_datastruct_list_Nova_CharArray** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_CharArray_4_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_4_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData);
	this->prv->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(4);
}

void nova_datastruct_list_Nova_CharArray_5_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	nova_datastruct_list_Nova_Array_5_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, count, (intptr_t)nova_null);
	this->prv->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(4);
}

void nova_datastruct_list_Nova_CharArray_6_Nova_this(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char* data, int count)
{
	nova_datastruct_list_Nova_Array_6_Nova_this((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object**)(data), count);
	this->prv->nova_datastruct_list_Nova_CharArray_Nova_indexSize = (int)(1);
}

long_long nova_datastruct_list_Nova_CharArray_Nova_sum(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure3_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	long_long l1_Nova_sum = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_value = 0;
	
	l1_Nova_sum = (long_long)(0);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_value = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_sum += nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l1_Nova_value, l1_Nova_i++, this, l1_Nova_sum, func_context);
	}
	return l1_Nova_sum;
}

long_long nova_datastruct_list_Nova_CharArray_Nova_reduce(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure6_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context, long_long initialValue)
{
	long_long l1_Nova_value = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	l1_Nova_value = initialValue;
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_value = nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l1_Nova_value, l1_Nova_element, l1_Nova_i++, this, func_context);
	}
	return l1_Nova_value;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_addUnique(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char element)
{
	if (!nova_datastruct_list_Nova_CharArray_Nova_contains(this, exceptionData, element))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(this), exceptionData, (nova_Nova_Object*)(intptr_t)(element));
	}
	return this;
}

char nova_datastruct_list_Nova_CharArray_Nova_contains(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char value)
{
	Context2 contextArg72 = 
	{
		&value,
	};
	
	return nova_datastruct_list_Nova_CharArray_Nova_any(this, exceptionData, (nova_datastruct_list_Nova_CharArray_closure15_Nova_anyFunc)&nova_datastruct_list_Nova_CharArray_Nova_testLambda72, this, &contextArg72);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_CharArray_Nova_map(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure9_Nova_mapFunc nova_datastruct_list_Nova_CharArray_Nova_mapFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_mapFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_mapFunc, exceptionData, l1_Nova_element, l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_forEach(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure12_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData); l2_Nova_i++)
	{
		nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, (char)(intptr_t)nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l2_Nova_i), l2_Nova_i, this, func_context);
	}
	return this;
}

char nova_datastruct_list_Nova_CharArray_Nova_any(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure15_Nova_anyFunc nova_datastruct_list_Nova_CharArray_Nova_anyFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_anyFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_anyFunc, exceptionData, l1_Nova_element, anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_CharArray_Nova_all(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure18_Nova_allFunc nova_datastruct_list_Nova_CharArray_Nova_allFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_allFunc, void* allFunc_context)
{
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (!nova_datastruct_list_Nova_CharArray_Nova_allFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_allFunc, exceptionData, l1_Nova_element, allFunc_context))
		{
			return 0;
		}
	}
	return 1;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_filter(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure21_Nova_filterFunc nova_datastruct_list_Nova_CharArray_Nova_filterFunc, void* nova_datastruct_list_Nova_CharArray_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_filtered = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_filterFunc(nova_datastruct_list_Nova_CharArray_ref_Nova_filterFunc, exceptionData, l1_Nova_element, l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_filtered), exceptionData, (nova_Nova_Object*)(intptr_t)(l1_Nova_element));
		}
	}
	return l1_Nova_filtered;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_take(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_list = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l3_Nova_i = 0;
	
	if (howMany > nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData))
	{
		howMany = (int)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData));
	}
	l1_Nova_list = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l3_Nova_i = (int)0;
	for (; l3_Nova_i < (int)howMany; l3_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l3_Nova_i)));
	}
	return l1_Nova_list;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_skip(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_list = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_CharArray_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)howMany;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData); l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, l2_Nova_i)));
	}
	return l1_Nova_list;
}

char nova_datastruct_list_Nova_CharArray_Nova_firstWhere(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray_closure24_Nova_func nova_datastruct_list_Nova_CharArray_Nova_func, void* nova_datastruct_list_Nova_CharArray_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_CharArray_Nova_func(nova_datastruct_list_Nova_CharArray_ref_Nova_func, exceptionData, l1_Nova_element, func_context))
		{
			return l1_Nova_element;
		}
	}
	return (char)0;
}

nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArray_Nova_reverse(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_array = (nova_datastruct_list_Nova_CharArray*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	l1_Nova_array = nova_datastruct_list_Nova_CharArray_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData));
	l1_Nova_i = (int)(0);
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_CharArray_Nova_set(l1_Nova_array, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData) - ++l1_Nova_i, l1_Nova_element);
	}
	return l1_Nova_array;
}

nova_Nova_String* nova_datastruct_list_Nova_CharArray_Nova_join(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	nova_Nova_String* l1_Nova_str = (nova_Nova_String*)nova_null;
	char l1_Nova_passed = 0;
	nova_datastruct_list_Nova_CharArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_CharArrayIterator*)nova_null;
	char l1_Nova_element = 0;
	
	l1_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_passed = 0;
	nova_local_0 = nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator((this), exceptionData);
	while (nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (char)(intptr_t)(nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (l1_Nova_passed)
		{
			l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_str), exceptionData, delimiter));
		}
		else
		{
			l1_Nova_passed = 1;
		}
		l1_Nova_str = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_str), exceptionData, nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, l1_Nova_element)));
	}
	return l1_Nova_str;
}

char nova_datastruct_list_Nova_CharArray_Nova_get(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return ((char*)this->nova_datastruct_list_Nova_Array_Nova_data)[index];
}

char nova_datastruct_list_Nova_CharArray_Nova_set(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, int index, char value)
{
	((char*)this->nova_datastruct_list_Nova_Array_Nova_data)[index] = value;
	return value;
}

long_long nova_datastruct_list_Nova_CharArray_Nova_testLambda9(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, long_long v, char c, int _3, nova_datastruct_list_Nova_CharArray* _4, Context1* context)
{
	return 31 * v + (int)c;
}

char nova_datastruct_list_Nova_CharArray_Nova_testLambda72(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData, char _1, Context2* context)
{
	return _1 == (*context->nova_datastruct_list_Nova_CharArray_Nova_value);
}

nova_datastruct_list_Nova_CharArrayIterator* nova_datastruct_list_Nova_CharArray_Accessor_Nova_iterator(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_CharArrayIterator_Nova_construct(0, exceptionData, this, this->prv->nova_datastruct_list_Nova_CharArray_Nova_indexSize);
}


char nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_first(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, 0) : (char)0);
}


char nova_datastruct_list_Nova_CharArray_Accessorfunc_Nova_last(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData) > 0 ? nova_datastruct_list_Nova_CharArray_Nova_get(this, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this), exceptionData) - 1) : (char)0);
}


long_long nova_datastruct_list_Nova_CharArray_Accessor_Nova_hashCodeLong(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg9 = 
	{
	};
	
	return nova_datastruct_list_Nova_CharArray_Nova_reduce(this, exceptionData, (nova_datastruct_list_Nova_CharArray_closure6_Nova_func)&nova_datastruct_list_Nova_CharArray_Nova_testLambda9, this, &contextArg9, 0);
}


void nova_datastruct_list_Nova_CharArray_Nova_super(nova_datastruct_list_Nova_CharArray* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_datastruct_list_Nova_CharArray_Nova_indexSize = 0;
}


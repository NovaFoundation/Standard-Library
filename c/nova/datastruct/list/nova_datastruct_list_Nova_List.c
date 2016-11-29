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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterable.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>

typedef struct
{
	/* String delimiter = new String("") */ nova_Nova_String** nova_datastruct_list_Nova_List_Nova_delimiter;
} Context1;
typedef struct
{
	/* Type value */ nova_Nova_Object** nova_datastruct_list_Nova_List_Nova_value;
} Context2;


nova_datastruct_list_List_Extension_VTable nova_datastruct_list_List_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_list_Nova_List_0_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_List_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_list_Nova_List_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_list_Nova_List_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_list_Nova_List_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_list_Nova_List_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_List_0_Nova_firstWhere,
		0,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_List_Nova_join,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_Mutator_Nova_count,
		(int(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_count,
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
	},
};



nova_Nova_String* nova_datastruct_list_Nova_List_Nova_testLambda2(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int i, nova_datastruct_list_Nova_List* _4, Context1* context);
char nova_datastruct_list_Nova_List_Nova_testLambda74(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context2* context);

void nova_datastruct_list_Nova_List_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	Context2 contextArg74 = 
	{
		&value,
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&nova_datastruct_list_Nova_List_Nova_testLambda74, this, &contextArg74);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_value), l1_Nova_i++, this, func_context);
	}
	return this;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData), (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_mapFunc(nova_datastruct_list_Nova_List_ref_Nova_mapFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_element), l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_anyFunc(nova_datastruct_list_Nova_List_ref_Nova_anyFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_element), anyFunc_context))
		{
			return 1;
		}
	}
	return 0;
}

char nova_datastruct_list_Nova_List_0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	int l1_Nova_i = 0;
	char l1_Nova_contradiction = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	stopOnContradiction = (int)(stopOnContradiction == (intptr_t)nova_null ? 1 : stopOnContradiction);
	l1_Nova_i = (int)(0);
	l1_Nova_contradiction = 0;
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (!nova_datastruct_list_Nova_List_Nova_allFunc(nova_datastruct_list_Nova_List_ref_Nova_allFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_element), l1_Nova_i++, this, allFunc_context))
		{
			if (stopOnContradiction)
			{
				return 0;
			}
			l1_Nova_contradiction = 1;
		}
	}
	return !l1_Nova_contradiction;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_filterFunc(nova_datastruct_list_Nova_List_ref_Nova_filterFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_value), l1_Nova_i++, (nova_datastruct_list_Nova_List*)(this), filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_filterEmpty(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if ((nova_Nova_Object*)l2_Nova_value != (nova_Nova_Object*)(nova_Nova_Object*)nova_null && ((nova_Nova_String*)l2_Nova_value)->nova_Nova_String_Nova_count > 0)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= howMany)
		{
			return (nova_datastruct_list_Nova_List*)l1_Nova_list;
		}
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_takeLast(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_startIndex = 0;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l3_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_startIndex = (int)(nova_math_Nova_Math_static_Nova_max(0, exceptionData, 0, nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData) - howMany));
	if (l1_Nova_startIndex == nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData))
	{
		return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
	}
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l3_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= l1_Nova_startIndex)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(l3_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l1_Nova_i++ >= howMany)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l1_Nova_list;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_element), func_context))
		{
			return (nova_Nova_Object*)l2_Nova_element;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_firstNonNull(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure21_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
		
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		l2_Nova_value = nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_element), func_context);
		if ((nova_Nova_Object*)l2_Nova_value != (nova_Nova_Object*)(nova_Nova_Object*)nova_null)
		{
			return (nova_Nova_Object*)l2_Nova_value;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_zip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* other, nova_datastruct_list_Nova_List_closure24_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context)
{
	nova_datastruct_list_Nova_Iterator* l1_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Iterator* l1_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(this), exceptionData));
	l1_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(other), exceptionData));
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i1), exceptionData) && nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i2), exceptionData))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_zipper(nova_datastruct_list_Nova_List_ref_Nova_zipper, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i1), exceptionData)), (OtherType*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l1_Nova_i2), exceptionData)), zipper_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}


nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_reduce(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure27_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context, nova_Nova_Object* initialValue)
{
	nova_Nova_Object* l1_Nova_value = (nova_Nova_Object*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_value = initialValue;
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		l1_Nova_value = nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (Out*)(l1_Nova_value), (nova_Nova_Object*)(l2_Nova_element), l1_Nova_i++, (nova_datastruct_list_Nova_List*)(this), func_context);
	}
	return (nova_Nova_Object*)l1_Nova_value;
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	Context1 contextArg2 = 
	{
		&delimiter,
	};
	
	delimiter = (nova_Nova_String*)(delimiter == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : (nova_Nova_Object*)delimiter);
	return (nova_Nova_String*)nova_datastruct_list_Nova_List_Nova_reduce(this, exceptionData, (nova_datastruct_list_Nova_List_closure27_Nova_func)&nova_datastruct_list_Nova_List_Nova_testLambda2, this, &contextArg2, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))));
}

nova_Nova_String* nova_datastruct_list_Nova_List_Nova_testLambda2(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* str, nova_Nova_Object* e, int i, nova_datastruct_list_Nova_List* _4, Context1* context)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(str), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(((nova_Nova_String*)(i > 0 ? (*context->nova_datastruct_list_Nova_List_Nova_delimiter) : nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))))), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(e), exceptionData)));
}

char nova_datastruct_list_Nova_List_Nova_testLambda74(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, Context2* context)
{
	return (nova_Nova_Object*)_1 == (nova_Nova_Object*)(*context->nova_datastruct_list_Nova_List_Nova_value);
}

int nova_datastruct_list_Nova_List_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	return value;
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_List_Accessor_Nova_iterator(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Iterator*)(nova_Nova_Object*)nova_null;
}


int nova_datastruct_list_Nova_List_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (int)0;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_virtual_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_toArray((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)nova_datastruct_list_Nova_List_Nova_mapFunc, nova_datastruct_list_Nova_List_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)nova_datastruct_list_Nova_List_Nova_anyFunc, nova_datastruct_list_Nova_List_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int stopOnContradiction)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure12_Nova_allFunc)nova_datastruct_list_Nova_List_Nova_allFunc, nova_datastruct_list_Nova_List_ref_Nova_allFunc, allFunc_context, stopOnContradiction);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)nova_datastruct_list_Nova_List_Nova_filterFunc, nova_datastruct_list_Nova_List_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this), exceptionData, howMany);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this), exceptionData, howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure18_Nova_func)nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual_Nova_reverse(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_List_virtual_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, delimiter);
}

int nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Mutator_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData, value);
}

int nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual_Accessor_Nova_count((nova_datastruct_list_Nova_List*)(this), exceptionData);
}


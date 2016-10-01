#include <precompiled.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>

typedef struct
{
	/* Type value */ nova_Nova_Object** nova_datastruct_list_Nova_List_Nova_value;
} Context1;


nova_datastruct_list_Extension_VTable_List nova_datastruct_list_Extension_VTable_List_val =
{
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_0_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_list_Nova_List_0_Nova_contains,
		(void(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_List_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_list_Nova_List_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_list_Nova_List_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context))nova_datastruct_list_Nova_List_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_list_Nova_List_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_0_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_List_0_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_List_0_Nova_firstWhere,
		0,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_List_0_Nova_join,
		0,
		0,
		0,
		0,
		0,
		0,
	},
	nova_datastruct_list_Nova_List_0_Nova_toArray,
	nova_datastruct_list_Nova_List_0_Nova_contains,
	nova_datastruct_list_Nova_List_0_Nova_forEach,
	nova_datastruct_list_Nova_List_0_Nova_map,
	nova_datastruct_list_Nova_List_0_Nova_any,
	nova_datastruct_list_Nova_List_0_Nova_all,
	nova_datastruct_list_Nova_List_0_Nova_filter,
	nova_datastruct_list_Nova_List_0_Nova_take,
	nova_datastruct_list_Nova_List_0_Nova_skip,
	nova_datastruct_list_Nova_List_0_Nova_firstWhere,
	nova_datastruct_list_Nova_List_virtual0_Nova_reverse,
	nova_datastruct_list_Nova_List_0_Nova_join,
	nova_datastruct_list_Nova_List_Accessor_Nova_iterator,
};



char nova_datastruct_list_Nova_List_Nova_testLambda54(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_List_Nova__1, Context1* context);

void nova_datastruct_list_Nova_List_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_0_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l2_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l2_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_array, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_Array*)l2_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_value)
{
	Context1 contextArg64 = 
	{
		&nova_datastruct_list_Nova_List_Nova_value,
	};
	
	return nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)&nova_datastruct_list_Nova_List_Nova_testLambda54, this, &contextArg64);
}

void nova_datastruct_list_Nova_List_0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	int l2_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l2_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_List_Nova_func(nova_datastruct_list_Nova_List_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_value), l2_Nova_i++, this, func_context);
	}
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l2_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l2_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_array, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_mapFunc(nova_datastruct_list_Nova_List_ref_Nova_mapFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_element), l2_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_List*)l2_Nova_array;
}

char nova_datastruct_list_Nova_List_0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
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

char nova_datastruct_list_Nova_List_0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (!nova_datastruct_list_Nova_List_Nova_allFunc(nova_datastruct_list_Nova_List_ref_Nova_allFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_element), allFunc_context))
		{
			return 0;
		}
	}
	return 1;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_Array* l2_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l2_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (nova_datastruct_list_Nova_List_Nova_filterFunc(nova_datastruct_list_Nova_List_ref_Nova_filterFunc, exceptionData, (nova_Nova_Object*)(l2_Nova_value), l2_Nova_i++, (nova_datastruct_list_Nova_List*)(this), filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l2_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_List_Nova_howMany)
{
	nova_datastruct_list_Nova_Array* l2_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l2_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l2_Nova_i++ >= nova_datastruct_list_Nova_List_Nova_howMany)
		{
			return (nova_datastruct_list_Nova_List*)l2_Nova_list;
		}
		nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
	}
	return (nova_datastruct_list_Nova_List*)l2_Nova_list;
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_0_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_List_Nova_howMany)
{
	nova_datastruct_list_Nova_Array* l2_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_value = (nova_Nova_Object*)nova_null;
	
	l2_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l2_Nova_i++ >= nova_datastruct_list_Nova_List_Nova_howMany)
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_list, exceptionData, (nova_Nova_Object*)(l2_Nova_value));
		}
	}
	return (nova_datastruct_list_Nova_List*)l2_Nova_list;
}

nova_Nova_Object* nova_datastruct_list_Nova_List_0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
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

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_Nova_zip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_Nova_other, nova_datastruct_list_Nova_List_closure21_Nova_zipper nova_datastruct_list_Nova_List_Nova_zipper, void* nova_datastruct_list_Nova_List_ref_Nova_zipper, void* zipper_context)
{
	nova_datastruct_list_Nova_Iterator* l2_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Iterator* l2_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_datastruct_list_Nova_Array* l2_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l2_Nova_i1 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(this), exceptionData));
	l2_Nova_i2 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)(nova_datastruct_list_Nova_List_Nova_other), exceptionData));
	l2_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l2_Nova_i1), exceptionData) && nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(l2_Nova_i2), exceptionData))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(l2_Nova_array, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_List_Nova_zipper(nova_datastruct_list_Nova_List_ref_Nova_zipper, exceptionData, (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l2_Nova_i1), exceptionData)), (OtherType*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(l2_Nova_i2), exceptionData)), zipper_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l2_Nova_array;
}


nova_Nova_String* nova_datastruct_list_Nova_List_0_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_datastruct_list_Nova_List_Nova_delimiter)
{
	nova_Nova_String* l2_Nova_str = (nova_Nova_String*)nova_null;
	char l2_Nova_passed = 0;
	nova_datastruct_list_Nova_Iterator* nova_local_0 = (nova_datastruct_list_Nova_Iterator*)nova_null;
	nova_Nova_Object* l2_Nova_element = (nova_Nova_Object*)nova_null;
	
	l2_Nova_str = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l2_Nova_passed = 0;
	nova_local_0 = (nova_datastruct_list_Nova_Iterator*)(nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator((nova_datastruct_list_Nova_Iterable*)((this)), exceptionData));
	while (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l2_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		if (l2_Nova_passed)
		{
			l2_Nova_str = (nova_Nova_String*)(nova_Nova_String_virtual1_Nova_concat((nova_Nova_String*)(l2_Nova_str), exceptionData, nova_datastruct_list_Nova_List_Nova_delimiter));
		}
		else
		{
			l2_Nova_passed = 1;
		}
		l2_Nova_str = (nova_Nova_String*)(nova_Nova_String_virtual1_Nova_concat((nova_Nova_String*)(l2_Nova_str), exceptionData, nova_Nova_Object_virtual1_Nova_toString((nova_Nova_Object*)(l2_Nova_element), exceptionData)));
	}
	return l2_Nova_str;
}

char nova_datastruct_list_Nova_List_Nova_testLambda54(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_List_Nova__1, Context1* context)
{
	return nova_datastruct_list_Nova_List_Nova__1 == (nova_Nova_Object*)(*context->nova_datastruct_list_Nova_List_Nova_value);
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_List_Accessor_Nova_iterator(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Iterator*)(nova_Nova_Object*)nova_null;
}


nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_List_virtual0_Nova_toArray(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_toArray((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_contains(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_List_Nova_value)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_value);
}

void nova_datastruct_list_Nova_List_virtual0_Nova_forEach(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_map(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_mapFunc, nova_datastruct_list_Nova_List_ref_Nova_mapFunc, mapFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_any(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_any((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_anyFunc, nova_datastruct_list_Nova_List_ref_Nova_anyFunc, anyFunc_context);
}

char nova_datastruct_list_Nova_List_virtual0_Nova_all(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_all((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_allFunc, nova_datastruct_list_Nova_List_ref_Nova_allFunc, allFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_filter(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_filterFunc, nova_datastruct_list_Nova_List_ref_Nova_filterFunc, filterFunc_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_take(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_List_Nova_howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_take((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_howMany);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_skip(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_List_Nova_howMany)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_skip((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_howMany);
}

nova_Nova_Object* nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_func, nova_datastruct_list_Nova_List_ref_Nova_func, func_context);
}

nova_datastruct_list_Nova_List* nova_datastruct_list_Nova_List_virtual0_Nova_reverse(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_reverse((nova_datastruct_list_Nova_List*)(this), exceptionData);
}

nova_Nova_String* nova_datastruct_list_Nova_List_virtual0_Nova_join(nova_datastruct_list_Nova_List* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_datastruct_list_Nova_List_Nova_delimiter)
{
	return this->vtable->itable.nova_datastruct_list_Nova_List_virtual0_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_datastruct_list_Nova_List_Nova_delimiter);
}

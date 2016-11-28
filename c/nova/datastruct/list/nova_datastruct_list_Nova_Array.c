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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;


nova_datastruct_list_Array_Extension_VTable nova_datastruct_list_Array_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_list_Nova_List_0_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_Array_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_list_Nova_Array_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_list_Nova_List_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_list_Nova_List_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_list_Nova_Array_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_Array_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_list_Nova_Array_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_list_Nova_List_0_Nova_firstWhere,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_Array_Nova_reverse,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_list_Nova_List_Nova_join,
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
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_datastruct_list_Nova_Array_Nova_addUnique,
	nova_datastruct_list_Nova_Array_Nova_get,
	nova_datastruct_list_Nova_Array_Nova_set,
	nova_datastruct_list_Nova_Array_Accessorfunc_Nova_first,
	nova_datastruct_list_Nova_Array_Accessorfunc_Nova_last,
};



nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_shiftRight(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int left, int right);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_shiftLeft(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int left, int right);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_increaseSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_increaseSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count);
nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_testLambda8(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);




void nova_datastruct_list_Nova_Array_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Array, this,);
	this->vtable = &nova_datastruct_list_Array_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Array_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int initialCapacity)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Array, this,);
	this->vtable = &nova_datastruct_list_Array_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Array_5_Nova_this(this, exceptionData, count, initialCapacity);
	}
	
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_2_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** data, int count)
{
	CCLASS_NEW(nova_datastruct_list_Nova_Array, this,);
	this->vtable = &nova_datastruct_list_Array_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_Array_6_Nova_this(this, exceptionData, data, count);
	}
	
	return this;
}

void nova_datastruct_list_Nova_Array_Nova_destroy(nova_datastruct_list_Nova_Array** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_Array_4_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_5_Nova_this(this, exceptionData, 0, (intptr_t)nova_null);
	nova_datastruct_list_Nova_Array_1_Nova_increaseSize(this, exceptionData, 10);
}

void nova_datastruct_list_Nova_Array_5_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int initialCapacity)
{
	initialCapacity = (int)(initialCapacity == (intptr_t)nova_null ? count : initialCapacity);
	this->nova_datastruct_list_Nova_Array_Nova_position = (int)(0);
	this->nova_datastruct_list_Nova_Array_Nova_capacity = (int)(0);
	nova_datastruct_list_Nova_Array_1_Nova_increaseSize(this, exceptionData, initialCapacity);
	nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count(this, exceptionData, count);
}

void nova_datastruct_list_Nova_Array_6_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** data, int count)
{
	int l2_Nova_i = 0;
	
	nova_datastruct_list_Nova_Array_5_Nova_this(this, exceptionData, count, (intptr_t)nova_null);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)count; l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(this, exceptionData, data[l2_Nova_i]);
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_fillRemaining(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	while (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) < this->nova_datastruct_list_Nova_Array_Nova_capacity)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(this, exceptionData, value);
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_addAll(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_d = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((data), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_d = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(this, exceptionData, (nova_Nova_Object*)(l1_Nova_d));
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_addUnique(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	if (!nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_Nova_Object*)(element)))
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(this, exceptionData, element);
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	if (this->nova_datastruct_list_Nova_Array_Nova_position >= this->nova_datastruct_list_Nova_Array_Nova_capacity)
	{
		nova_datastruct_list_Nova_Array_0_Nova_increaseSize(this, exceptionData);
	}
	this->nova_datastruct_list_Nova_Array_Nova_data[this->nova_datastruct_list_Nova_Array_Nova_position++] = element;
	nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count(this, exceptionData, (int)(nova_math_Nova_Math_static_Nova_max(0, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_position, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData))));
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_add(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* element)
{
	if (index >= this->nova_datastruct_list_Nova_Array_Nova_capacity)
	{
		nova_datastruct_list_Nova_Array_1_Nova_increaseSize(this, exceptionData, index + 1);
	}
	nova_datastruct_list_Nova_Array_0_Nova_add(this, exceptionData, (nova_Nova_Object*)((nova_Nova_Object*)nova_null));
	nova_datastruct_list_Nova_Array_Nova_shiftRight(this, exceptionData, index, this->nova_datastruct_list_Nova_Array_Nova_position);
	this->nova_datastruct_list_Nova_Array_Nova_data[index] = element;
	if (index >= this->nova_datastruct_list_Nova_Array_Nova_position - 1)
	{
		this->nova_datastruct_list_Nova_Array_Nova_position = index + 1;
	}
	nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count(this, exceptionData, (int)(nova_math_Nova_Math_static_Nova_max(0, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_position, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData))));
	return this;
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_0_Nova_remove(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_element = this->nova_datastruct_list_Nova_Array_Nova_data[index];
	nova_datastruct_list_Nova_Array_Nova_shiftLeft(this, exceptionData, index + 1, this->nova_datastruct_list_Nova_Array_Nova_position--);
	return (nova_Nova_Object*)l1_Nova_element;
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_1_Nova_remove(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = nova_datastruct_list_Nova_Array_Nova_indexOf(this, exceptionData, element);
	if (l1_Nova_index >= 0)
	{
		nova_datastruct_list_Nova_Array_Nova_shiftLeft(this, exceptionData, l1_Nova_index + 1, this->nova_datastruct_list_Nova_Array_Nova_position--);
		return (nova_Nova_Object*)element;
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

int nova_datastruct_list_Nova_Array_Nova_indexOf(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_e = (nova_Nova_Object*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_e = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if ((nova_Nova_Object*)element == (nova_Nova_Object*)l1_Nova_e)
		{
			return l1_Nova_i;
		}
		l1_Nova_i++;
	}
	return (int)-1;
}

char nova_datastruct_list_Nova_Array_Nova_replace(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element, nova_Nova_Object* other)
{
	int l1_Nova_index = 0;
	
	l1_Nova_index = nova_datastruct_list_Nova_Array_Nova_indexOf(this, exceptionData, element);
	if (l1_Nova_index >= 0)
	{
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(this), exceptionData, l1_Nova_index, other);
		return 1;
	}
	else
	{
		return 0;
	}
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_shiftRight(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int left, int right)
{
	int l1_Nova_i = 0;
	
	l1_Nova_i = right - 1;
	while (l1_Nova_i > left)
	{
		this->nova_datastruct_list_Nova_Array_Nova_data[l1_Nova_i] = this->nova_datastruct_list_Nova_Array_Nova_data[l1_Nova_i - 1];
		l1_Nova_i--;
	}
	this->nova_datastruct_list_Nova_Array_Nova_data[left] = (nova_Nova_Object*)((nova_Nova_Object*)nova_null);
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_shiftLeft(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int left, int right)
{
	int l2_Nova_i = 0;
	
	left--;
	right--;
	l2_Nova_i = (int)left;
	for (; l2_Nova_i < (int)right; l2_Nova_i++)
	{
		this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i] = this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i + 1];
	}
	this->nova_datastruct_list_Nova_Array_Nova_data[right] = (nova_Nova_Object*)((nova_Nova_Object*)nova_null);
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_swap(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index1, int index2)
{
	nova_Nova_Object* l1_Nova_temp = (nova_Nova_Object*)nova_null;
	
	l1_Nova_temp = this->nova_datastruct_list_Nova_Array_Nova_data[index1];
	this->nova_datastruct_list_Nova_Array_Nova_data[index1] = this->nova_datastruct_list_Nova_Array_Nova_data[index2];
	this->nova_datastruct_list_Nova_Array_Nova_data[index2] = l1_Nova_temp;
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_increaseSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array_1_Nova_increaseSize(this, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_capacity + 3);
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_increaseSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count)
{
	int l1_Nova_offset = 0;
	nova_Nova_Object** l1_Nova_tmp = (nova_Nova_Object**)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_offset = count - this->nova_datastruct_list_Nova_Array_Nova_capacity;
	this->nova_datastruct_list_Nova_Array_Nova_capacity = count;
	l1_Nova_tmp = (nova_Nova_Object**)((nova_Nova_Object**)NOVA_MALLOC(sizeof(nova_Nova_Object) * this->nova_datastruct_list_Nova_Array_Nova_capacity));
	arrayCopy(l1_Nova_tmp, 0, this->nova_datastruct_list_Nova_Array_Nova_data, 0, this->nova_datastruct_list_Nova_Array_Nova_capacity - l1_Nova_offset, this->nova_datastruct_list_Nova_Array_Nova_capacity, 4);
	this->nova_datastruct_list_Nova_Array_Nova_data = l1_Nova_tmp;
	l2_Nova_i = (int)(this->nova_datastruct_list_Nova_Array_Nova_capacity - l1_Nova_offset);
	for (; l2_Nova_i < (int)this->nova_datastruct_list_Nova_Array_Nova_capacity; l2_Nova_i++)
	{
		this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i] = (nova_Nova_Object*)((nova_Nova_Object*)nova_null);
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_toArray(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg8 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_map((nova_datastruct_list_Nova_List*)(this), exceptionData, (nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)&nova_datastruct_list_Nova_Array_Nova_testLambda8, this, &contextArg8);
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_map(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc nova_datastruct_list_Nova_Array_Nova_mapFunc, void* nova_datastruct_list_Nova_Array_ref_Nova_mapFunc, void* mapFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData), (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Nova_mapFunc(nova_datastruct_list_Nova_Array_ref_Nova_mapFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), l1_Nova_i++, this, mapFunc_context)));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_forEach(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure6_Nova_func nova_datastruct_list_Nova_Array_Nova_func, void* nova_datastruct_list_Nova_Array_ref_Nova_func, void* func_context)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData); l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_Nova_func(nova_datastruct_list_Nova_Array_ref_Nova_func, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i], l2_Nova_i, this, func_context);
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_filter(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure9_Nova_filterFunc nova_datastruct_list_Nova_Array_Nova_filterFunc, void* nova_datastruct_list_Nova_Array_ref_Nova_filterFunc, void* filterFunc_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_filtered = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_filtered = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_datastruct_list_Nova_Array_Nova_filterFunc(nova_datastruct_list_Nova_Array_ref_Nova_filterFunc, exceptionData, (nova_Nova_Object*)(l1_Nova_element), l1_Nova_i++, this, filterFunc_context))
		{
			nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_filtered, exceptionData, (nova_Nova_Object*)(l1_Nova_element));
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_filtered;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_take(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	
	howMany = (int)(howMany > nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) ? nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) : howMany);
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)howMany; l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i]);
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_skip(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	int l2_Nova_i = 0;
	
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)howMany;
	for (; l2_Nova_i < (int)nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData); l2_Nova_i++)
	{
		nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_list, exceptionData, this->nova_datastruct_list_Nova_Array_Nova_data[l2_Nova_i]);
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

long_long nova_datastruct_list_Nova_Array_Nova_sumSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	long_long l1_Nova_sum = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_value = (nova_Nova_Object*)nova_null;
	
	l1_Nova_sum = (long_long)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_value = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_sum = l1_Nova_sum + ((nova_Nova_String*)l1_Nova_value)->nova_Nova_String_Nova_count;
	}
	return l1_Nova_sum;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_reverse(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_element = (nova_Nova_Object*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData), (intptr_t)nova_null);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((this), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_element = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		l1_Nova_array->nova_datastruct_list_Nova_Array_Nova_data[this->nova_datastruct_list_Nova_Array_Nova_count - ++l1_Nova_i] = (nova_Nova_Object*)(l1_Nova_element);
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_Nova_String* nova_datastruct_list_Nova_Array_Nova_toString(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Array ["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(this), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))));
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_get(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return (nova_Nova_Object*)this->nova_datastruct_list_Nova_Array_Nova_data[index];
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_set(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value)
{
	this->nova_datastruct_list_Nova_Array_Nova_data[index] = value;
	return (nova_Nova_Object*)value;
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_testLambda8(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
}

int nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->nova_datastruct_list_Nova_Array_Nova_count;
}

int nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	this->nova_datastruct_list_Nova_Array_Nova_count = value;
	return value;
}

char nova_datastruct_list_Nova_Array_Accessor_Nova_empty(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) <= 0;
}


nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_list_Nova_Array_Accessor_Nova_iterator(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_ArrayIterator*)nova_datastruct_list_Nova_ArrayIterator_Nova_construct(0, exceptionData, this);
}


nova_Nova_Object* nova_datastruct_list_Nova_Array_Accessorfunc_Nova_first(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) > 0 ? nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this), exceptionData, 0) : (nova_Nova_Object*)nova_null);
}


nova_Nova_Object* nova_datastruct_list_Nova_Array_Accessorfunc_Nova_last(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) > 0 ? nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this), exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(this, exceptionData) - 1) : (nova_Nova_Object*)nova_null);
}


void nova_datastruct_list_Nova_Array_Nova_super(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_Array_Nova_capacity = 0;
	this->nova_datastruct_list_Nova_Array_Nova_count = 0;
	this->nova_datastruct_list_Nova_Array_Nova_position = 0;
	this->nova_datastruct_list_Nova_Array_Nova_data = (nova_Nova_Object**)nova_null;
}

nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_virtual_Nova_addUnique(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element)
{
	return this->vtable->nova_datastruct_list_Nova_Array_virtual_Nova_addUnique((nova_datastruct_list_Nova_Array*)(this), exceptionData, element);
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Nova_get(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index)
{
	return this->vtable->nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this), exceptionData, index);
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Nova_set(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value)
{
	return this->vtable->nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(this), exceptionData, index, value);
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first((nova_datastruct_list_Nova_Array*)(this), exceptionData);
}

nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->vtable->nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last((nova_datastruct_list_Nova_Array*)(this), exceptionData);
}


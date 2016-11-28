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

typedef struct
{
} Context1;
typedef struct
{
} Context2;
typedef struct
{
} Context3;
typedef struct
{
} Context4;
typedef struct
{
	/* Int bucketSize */ int* nova_datastruct_Nova_HashSet_Nova_bucketSize;
} Context5;


nova_datastruct_HashSet_Extension_VTable nova_datastruct_HashSet_Extension_VTable_val =
{
	0,
	{
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_List_Accessor_Nova_iterator,
		0,
		0,
		0,
		(nova_datastruct_list_Nova_Array*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_Nova_HashSet_Nova_toArray,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_datastruct_Nova_HashSet_0_Nova_contains,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_Nova_HashSet_0_Nova_forEach,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context))nova_datastruct_Nova_HashSet_0_Nova_map,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context))nova_datastruct_Nova_HashSet_0_Nova_any,
		(char(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context, int))nova_datastruct_Nova_HashSet_0_Nova_all,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context))nova_datastruct_Nova_HashSet_0_Nova_filter,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_Nova_HashSet_Nova_take,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int))nova_datastruct_Nova_HashSet_Nova_skip,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context))nova_datastruct_Nova_HashSet_0_Nova_firstWhere,
		(nova_datastruct_list_Nova_List*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*))nova_datastruct_Nova_HashSet_Nova_reverse,
		(nova_Nova_String*(*)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*))nova_datastruct_Nova_HashSet_Nova_join,
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
	nova_datastruct_Nova_HashSet_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_buckets;
	int nova_datastruct_Nova_HashSet_Nova_bucketSize;
	
)

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_getBucket(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda57(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context1* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda58(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context2* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda59(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context3* context);
nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda60(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context4* context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_testLambda61(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void nova_datastruct_Nova_HashSet_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_0_Nova_construct(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_HashSet, this);
	this->vtable = &nova_datastruct_HashSet_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashSet_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashSet_4_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_1_Nova_construct(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	CCLASS_NEW(nova_datastruct_Nova_HashSet, this);
	this->vtable = &nova_datastruct_HashSet_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_HashSet_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_HashSet_5_Nova_this(this, exceptionData, bucketCount, bucketSize);
	}
	
	return this;
}

void nova_datastruct_Nova_HashSet_Nova_destroy(nova_datastruct_Nova_HashSet** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->prv->nova_datastruct_Nova_HashSet_Nova_buckets, exceptionData);
	
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_HashSet_4_Nova_this(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_Nova_HashSet_5_Nova_this(this, exceptionData, 5, 5);
}

void nova_datastruct_Nova_HashSet_5_Nova_this(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int bucketCount, int bucketSize)
{
	Context5 contextArg61 = 
	{
		&bucketSize,
	};
	
	this->prv->nova_datastruct_Nova_HashSet_Nova_buckets = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, bucketCount, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)&nova_datastruct_Nova_HashSet_Nova_testLambda61, this, &contextArg61));
	this->prv->nova_datastruct_Nova_HashSet_Nova_bucketSize = bucketSize;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_toArray(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context1 contextArg57 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure9_Nova_func)&nova_datastruct_Nova_HashSet_Nova_testLambda57, this, &contextArg57);
}

char nova_datastruct_Nova_HashSet_0_Nova_any(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure3_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				if (nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), func_context))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

char nova_datastruct_Nova_HashSet_0_Nova_all(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure6_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				if (!nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), func_context))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_map(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure9_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(nova_Nova_Object*)(nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), l1_Nova_i++, this, func_context)));
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_0_Nova_filter(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure12_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				if (nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), l1_Nova_i++, this, func_context))
				{
					nova_datastruct_list_Nova_Array_0_Nova_add(l1_Nova_array, exceptionData, (nova_Nova_Object*)(l2_Nova_v));
				}
			}
		}
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_join(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* delimiter)
{
	int l1_Nova_i = 0;
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	l1_Nova_output = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				if (l1_Nova_i > 0)
				{
					l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, delimiter));
				}
				l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_output), exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_v), exceptionData)));
			}
		}
	}
	return l1_Nova_output;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_skip(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context2 contextArg58 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure9_Nova_func)&nova_datastruct_Nova_HashSet_Nova_testLambda58, this, &contextArg58)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_take(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	Context3 contextArg59 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure9_Nova_func)&nova_datastruct_Nova_HashSet_Nova_testLambda59, this, &contextArg59)), exceptionData, num);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_reverse(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	Context4 contextArg60 = 
	{
	};
	
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_datastruct_Nova_HashSet_0_Nova_map(this, exceptionData, (nova_datastruct_Nova_HashSet_closure9_Nova_func)&nova_datastruct_Nova_HashSet_Nova_testLambda60, this, &contextArg60)), exceptionData);
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_0_Nova_firstWhere(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure15_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				if (nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), func_context))
				{
					return (nova_Nova_Object*)l2_Nova_v;
				}
			}
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_0_Nova_forEach(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_HashSet_closure18_Nova_func nova_datastruct_Nova_HashSet_Nova_func, void* nova_datastruct_Nova_HashSet_ref_Nova_func, void* func_context)
{
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_list_Nova_Array*)((this->prv->nova_datastruct_Nova_HashSet_Nova_buckets)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData))
	{
		nova_datastruct_list_Nova_ArrayIterator* nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
		nova_Nova_Object* l2_Nova_v = (nova_Nova_Object*)nova_null;
		
		l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next((nova_datastruct_list_Nova_ArrayIterator*)(nova_local_0), exceptionData));
		nova_local_1 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
		while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_1, exceptionData))
		{
			l2_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_1, exceptionData));
			if (l2_Nova_v != (nova_Nova_Object*)nova_null)
			{
				nova_datastruct_Nova_HashSet_Nova_func(nova_datastruct_Nova_HashSet_ref_Nova_func, exceptionData, (nova_Nova_Object*)(l2_Nova_v), l1_Nova_i++, this, func_context);
			}
		}
	}
	return this;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_getBucket(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_Nova_HashSet_Nova_buckets), exceptionData, (int)((long_long)(nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong((nova_Nova_Object*)(value), exceptionData)) & (nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_Nova_HashSet_Nova_buckets), exceptionData) - 1)));
}

nova_datastruct_Nova_HashSet* nova_datastruct_Nova_HashSet_Nova_add(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value), exceptionData, (nova_Nova_Object*)(value));
	return this;
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_get(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_v = (nova_Nova_Object*)nova_null;
	
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value)), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_operators_Nova_Equals_virtual1_Nova_equals((nova_operators_Nova_Equals*)(l1_Nova_v), exceptionData, (nova_Nova_Object*)(value)))
		{
			return (nova_Nova_Object*)l1_Nova_v;
		}
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_remove(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	nova_datastruct_list_Nova_Array* l1_Nova_bucket = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_i = 0;
	nova_datastruct_list_Nova_ArrayIterator* nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)nova_null;
	nova_Nova_Object* l1_Nova_v = (nova_Nova_Object*)nova_null;
	
	l1_Nova_bucket = nova_datastruct_Nova_HashSet_Nova_getBucket(this, exceptionData, value);
	l1_Nova_i = (int)(0);
	nova_local_0 = (nova_datastruct_list_Nova_ArrayIterator*)(nova_datastruct_list_Nova_Array_Accessor_Nova_iterator((l1_Nova_bucket), exceptionData));
	while (nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_hasNext(nova_local_0, exceptionData))
	{
		l1_Nova_v = (nova_Nova_Object*)(nova_datastruct_list_Nova_ArrayIterator_Accessor_Nova_next(nova_local_0, exceptionData));
		if (nova_operators_Nova_Equals_virtual1_Nova_equals((nova_operators_Nova_Equals*)(l1_Nova_v), exceptionData, (nova_Nova_Object*)(value)))
		{
			nova_datastruct_list_Nova_Array_0_Nova_remove(l1_Nova_bucket, exceptionData, l1_Nova_i);
			return (nova_Nova_Object*)l1_Nova_v;
		}
		l1_Nova_i++;
	}
	return (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

char nova_datastruct_Nova_HashSet_0_Nova_contains(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value)
{
	return (nova_Nova_Object*)nova_datastruct_Nova_HashSet_Nova_get(this, exceptionData, value) != (nova_Nova_Object*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* nova_datastruct_Nova_HashSet_Nova_toString(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("HashSet ["))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((nova_datastruct_Nova_HashSet_Nova_join(this, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("]"))));
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda57(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context1* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda58(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context2* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda59(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context3* context)
{
}

nova_Nova_Object* nova_datastruct_Nova_HashSet_Nova_testLambda60(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* _1, int _2, nova_datastruct_Nova_HashSet* _3, Context4* context)
{
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_HashSet_Nova_testLambda61(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, (*context->nova_datastruct_Nova_HashSet_Nova_bucketSize), (intptr_t)nova_null);
}

void nova_datastruct_Nova_HashSet_Nova_super(nova_datastruct_Nova_HashSet* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_HashSet_Nova_size = 0;
	this->prv->nova_datastruct_Nova_HashSet_Nova_buckets = (nova_datastruct_list_Nova_Array*)nova_null;
	this->prv->nova_datastruct_Nova_HashSet_Nova_bucketSize = 0;
}


#pragma once
#ifndef FILE_nova_datastruct_list_Nova_Array_NOVA
#define FILE_nova_datastruct_list_Nova_Array_NOVA

typedef struct nova_datastruct_list_Nova_Array nova_datastruct_list_Nova_Array;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_Array nova_datastruct_list_Nova_Array;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure7_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure8_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure9_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);

#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
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


typedef struct nova_datastruct_list_Array_Extension_VTable nova_datastruct_list_Array_Extension_VTable;
struct nova_datastruct_list_Array_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_Array_virtual_Nova_addUnique)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_get)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int);
	nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Nova_set)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*, int, nova_Nova_Object*);
	nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
	nova_Nova_Object* (*nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last)(nova_datastruct_list_Nova_Array*, nova_exception_Nova_ExceptionData*);
};

extern nova_datastruct_list_Array_Extension_VTable nova_datastruct_list_Array_Extension_VTable_val;


CCLASS_CLASS
(
	nova_datastruct_list_Nova_Array, 
	
	nova_datastruct_list_Array_Extension_VTable* vtable;
	int nova_datastruct_list_Nova_Array_Nova_capacity;
	int nova_datastruct_list_Nova_Array_Nova_count;
	int nova_datastruct_list_Nova_Array_Nova_position;
	nova_Nova_Object** nova_datastruct_list_Nova_Array_Nova_data;
)

void nova_datastruct_list_Nova_Array_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int initialCapacity);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_2_Nova_construct(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** data, int count);
void nova_datastruct_list_Nova_Array_Nova_destroy(nova_datastruct_list_Nova_Array** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Array_4_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Array_5_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int count, int initialCapacity);
void nova_datastruct_list_Nova_Array_6_Nova_this(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object** data, int count);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_fillRemaining(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_addAll(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_addUnique(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_1_Nova_add(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* element);
nova_Nova_Object* nova_datastruct_list_Nova_Array_0_Nova_remove(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_Nova_Object* nova_datastruct_list_Nova_Array_1_Nova_remove(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
int nova_datastruct_list_Nova_Array_Nova_indexOf(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
char nova_datastruct_list_Nova_Array_Nova_replace(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element, nova_Nova_Object* other);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_swap(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index1, int index2);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_toArray(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_map(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc nova_datastruct_list_Nova_Array_Nova_mapFunc, void* nova_datastruct_list_Nova_Array_ref_Nova_mapFunc, void* mapFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_forEach(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure6_Nova_func nova_datastruct_list_Nova_Array_Nova_func, void* nova_datastruct_list_Nova_Array_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_0_Nova_filter(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array_closure9_Nova_filterFunc nova_datastruct_list_Nova_Array_Nova_filterFunc, void* nova_datastruct_list_Nova_Array_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_take(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_skip(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
long_long nova_datastruct_list_Nova_Array_Nova_sumSize(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_Nova_reverse(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_datastruct_list_Nova_Array_Nova_toString(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_get(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_Nova_Object* nova_datastruct_list_Nova_Array_Nova_set(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value);
int nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_datastruct_list_Nova_Array_Mutatorfunc_Nova_count(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int value);
char nova_datastruct_list_Nova_Array_Accessor_Nova_empty(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_list_Nova_Array_Accessor_Nova_iterator(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_Array_Accessorfunc_Nova_first(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_Array_Accessorfunc_Nova_last(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_Array_Nova_super(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_Array_virtual_Nova_addUnique(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* element);
nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Nova_get(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Nova_set(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_Nova_Object* value);
nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_first(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_list_Nova_Array_virtual_Accessorfunc_Nova_last(nova_datastruct_list_Nova_Array* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

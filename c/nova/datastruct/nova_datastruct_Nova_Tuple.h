#pragma once
#ifndef FILE_nova_datastruct_Nova_Tuple_NOVA
#define FILE_nova_datastruct_Nova_Tuple_NOVA

typedef struct nova_datastruct_Nova_Tuple nova_datastruct_Nova_Tuple;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_List nova_datastruct_list_Nova_List;
typedef struct nova_datastruct_list_Nova_Array nova_datastruct_list_Nova_Array;

typedef void (*nova_datastruct_Nova_Tuple_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_Nova_Tuple_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_Nova_Tuple_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure4_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure5_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure6_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure7_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure8_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure9_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure10_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure11_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure12_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure13_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure14_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_Tuple_closure15_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_Tuple_closure16_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_Tuple_closure17_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_Tuple_closure18_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_datastruct_Tuple_Extension_VTable nova_datastruct_Tuple_Extension_VTable;
struct nova_datastruct_Tuple_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern nova_datastruct_Tuple_Extension_VTable nova_datastruct_Tuple_Extension_VTable_val;


CCLASS_CLASS
(
	nova_datastruct_Nova_Tuple, 
	
	nova_datastruct_Tuple_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_items;
)

void nova_datastruct_Nova_Tuple_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_construct(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items);
void nova_datastruct_Nova_Tuple_Nova_destroy(nova_datastruct_Nova_Tuple** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_Tuple_Nova_this(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* items);
char nova_datastruct_Nova_Tuple_0_Nova_contains(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* value);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_toArray(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_forEach(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure3_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context);
char nova_datastruct_Nova_Tuple_0_Nova_any(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure6_Nova_anyFunc nova_datastruct_Nova_Tuple_Nova_anyFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_Nova_Tuple_0_Nova_all(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure9_Nova_allFunc nova_datastruct_Nova_Tuple_Nova_allFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_allFunc, void* allFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_0_Nova_filter(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure12_Nova_filterFunc nova_datastruct_Nova_Tuple_Nova_filterFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_take(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Tuple_Nova_skip(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, int howMany);
nova_Nova_Object* nova_datastruct_Nova_Tuple_0_Nova_firstWhere(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure15_Nova_func nova_datastruct_Nova_Tuple_Nova_func, void* nova_datastruct_Nova_Tuple_ref_Nova_func, void* func_context);
nova_datastruct_Nova_Tuple* nova_datastruct_Nova_Tuple_Nova_reverse(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_List* nova_datastruct_Nova_Tuple_0_Nova_map(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Tuple_closure18_Nova_mapFunc nova_datastruct_Nova_Tuple_Nova_mapFunc, void* nova_datastruct_Nova_Tuple_ref_Nova_mapFunc, void* mapFunc_context);
nova_datastruct_list_Nova_ArrayIterator* nova_datastruct_Nova_Tuple_Accessor_Nova_iterator(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessorfunc_Nova_first(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_datastruct_Nova_Tuple_Accessorfunc_Nova_last(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_Tuple_Nova_super(nova_datastruct_Nova_Tuple* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

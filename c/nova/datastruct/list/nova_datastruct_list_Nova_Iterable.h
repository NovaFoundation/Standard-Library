#pragma once
#ifndef FILE_nova_datastruct_list_Nova_Iterable_NOVA
#define FILE_nova_datastruct_list_Nova_Iterable_NOVA

typedef struct nova_datastruct_list_Nova_Iterable nova_datastruct_list_Nova_Iterable;


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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Iterator.h>


typedef struct nova_datastruct_list_Iterable_Extension_VTable nova_datastruct_list_Iterable_Extension_VTable;
struct nova_datastruct_list_Iterable_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern nova_datastruct_list_Iterable_Extension_VTable nova_datastruct_list_Iterable_Extension_VTable_val;


CCLASS_CLASS
(
	nova_datastruct_list_Nova_Iterable, 
	
	nova_datastruct_list_Iterable_Extension_VTable* vtable;
)

void nova_datastruct_list_Nova_Iterable_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_Iterable_Accessor_Nova_iterator(nova_datastruct_list_Nova_Iterable* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_Iterable_virtual_Accessor_Nova_iterator(nova_datastruct_list_Nova_Iterable* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

#pragma once
#ifndef FILE_nova_io_Nova_InputStream_NOVA
#define FILE_nova_io_Nova_InputStream_NOVA

typedef struct nova_io_Nova_InputStream nova_io_Nova_InputStream;


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


typedef struct nova_io_InputStream_Extension_VTable nova_io_InputStream_Extension_VTable;
struct nova_io_InputStream_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern nova_io_InputStream_Extension_VTable nova_io_InputStream_Extension_VTable_val;


CCLASS_CLASS
(
	nova_io_Nova_InputStream, 
	
	nova_io_InputStream_Extension_VTable* vtable;
)

void nova_io_Nova_InputStream_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_InputStream_Nova_readString(nova_io_Nova_InputStream* this, nova_exception_Nova_ExceptionData* exceptionData);nova_datastruct_list_Nova_Array* nova_io_Nova_InputStream_Nova_readBytes(nova_io_Nova_InputStream* this, nova_exception_Nova_ExceptionData* exceptionData);nova_Nova_String* nova_io_Nova_InputStream_virtual_Nova_readString(nova_io_Nova_InputStream* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* nova_io_Nova_InputStream_virtual_Nova_readBytes(nova_io_Nova_InputStream* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

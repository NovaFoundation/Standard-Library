#pragma once
#ifndef FILE_nova_primitive_number_Nova_Short_NOVA
#define FILE_nova_primitive_number_Nova_Short_NOVA

typedef struct nova_primitive_number_Nova_Short nova_primitive_number_Nova_Short;


#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Integer.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_primitive_number_Short_Extension_VTable nova_primitive_number_Short_Extension_VTable;
struct nova_primitive_number_Short_Extension_VTable
{
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*);
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	int (*nova_primitive_number_Nova_Number_virtual_static_Nova_numDigits)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);
	short (*nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);
	short (*nova_operators_Nova_Multiply_virtual_Nova_multiply)(nova_primitive_number_Nova_Short*, nova_exception_Nova_ExceptionData*, short);
};

extern nova_primitive_number_Short_Extension_VTable nova_primitive_number_Short_Extension_VTable_val;


CCLASS_CLASS
(
	nova_primitive_number_Nova_Short, 
	
	nova_primitive_number_Short_Extension_VTable* vtable;
	short nova_primitive_number_Nova_Short_Nova_value;
)

void nova_primitive_number_Nova_Short_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_primitive_number_Nova_Short* nova_primitive_number_Nova_Short_Nova_construct(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value);
void nova_primitive_number_Nova_Short_Nova_destroy(nova_primitive_number_Nova_Short** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_primitive_number_Nova_Short_Nova_this(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value);
int nova_primitive_number_Nova_Short_static_Nova_numDigits(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_number);
nova_Nova_String* nova_primitive_number_Nova_Short_static_Nova_toString(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value);
nova_Nova_String* nova_primitive_number_Nova_Short_Nova_toString(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData);
short nova_primitive_number_Nova_Short_0_Nova_compareTo(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_other);
short nova_primitive_number_Nova_Short_Nova_multiply(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value);
void nova_primitive_number_Nova_Short_Nova_super(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

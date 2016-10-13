#pragma once
#ifndef FILE_nova_math_Nova_Matrix_NOVA
#define FILE_nova_math_Nova_Matrix_NOVA

typedef struct nova_math_Nova_Matrix nova_math_Nova_Matrix;


#include <Nova.h>
#include <InterfaceVTAble.h>
#include <ExceptionHandler.h>
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
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_math_Matrix_Extension_VTable nova_math_Matrix_Extension_VTable;
struct nova_math_Matrix_Extension_VTable
{
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
	char (*nova_operators_Nova_Equals_virtual_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	nova_math_Nova_Matrix* (*nova_operators_Nova_Multiply_virtual0_Nova_multiply)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Matrix*);
};

extern nova_math_Matrix_Extension_VTable nova_math_Matrix_Extension_VTable_val;


CCLASS_CLASS
(
	nova_math_Nova_Matrix, 
	
	nova_math_Matrix_Extension_VTable* vtable;
	nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data;
)

void nova_math_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Matrix_Nova_rows, int nova_math_Nova_Matrix_Nova_cols);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data);
void nova_math_Nova_Matrix_Nova_destroy(nova_math_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_0_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_math_Nova_Matrix_Nova_rows, int nova_math_Nova_Matrix_Nova_cols);
void nova_math_Nova_Matrix_1_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other, char nova_math_Nova_Matrix_Nova_allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_subtract(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other, char nova_math_Nova_Matrix_Nova_allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_multiply(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_other);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_transpose(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_static_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_math_Nova_Matrix_Nova_data);
nova_Nova_String* nova_math_Nova_Matrix_Nova_toString(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_math_Nova_Matrix_Accessor_Nova_isSquare(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_Nova_super(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

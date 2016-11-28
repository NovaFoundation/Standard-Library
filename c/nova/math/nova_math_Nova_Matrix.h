#pragma once
#ifndef FILE_nova_math_Nova_Matrix_NOVA
#define FILE_nova_math_Nova_Matrix_NOVA

typedef struct nova_math_Nova_Matrix nova_math_Nova_Matrix;


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
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/exception/nova_exception_Nova_InvalidArgumentException.h>
#include <nova/exception/nova_exception_Nova_InvalidOperationException.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_math_Matrix_Extension_VTable nova_math_Matrix_Extension_VTable;
struct nova_math_Matrix_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_math_Nova_Matrix*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
};

extern nova_math_Matrix_Extension_VTable nova_math_Matrix_Extension_VTable_val;


CCLASS_CLASS
(
	nova_math_Nova_Matrix, 
	
	nova_math_Matrix_Extension_VTable* vtable;
	struct Private* prv;
)

void nova_math_Nova_Matrix_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_0_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_1_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_2_Nova_construct(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
void nova_math_Nova_Matrix_Nova_destroy(nova_math_Nova_Matrix** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_5_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
void nova_math_Nova_Matrix_6_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int rows, int cols);
void nova_math_Nova_Matrix_7_Nova_this(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_clone(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_static_Nova_identity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int order);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_inverse(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_Nova_swapRows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int row1, int row2);
void nova_math_Nova_Matrix_Nova_multiplyRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow, double scalar);
void nova_math_Nova_Matrix_Nova_addRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow);
void nova_math_Nova_Matrix_Nova_subtractRow(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int sourceRow, int destinationRow);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_add(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_subtract(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other, int allowUnequalDimensions);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_multiply(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Matrix* other);
nova_math_Nova_Matrix* nova_math_Nova_Matrix_Nova_transpose(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Matrix_static_Nova_determinant(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data);
nova_Nova_String* nova_math_Nova_Matrix_Nova_toString(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_get(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index);
nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Matrix_Nova_set(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData, int index, nova_datastruct_list_Nova_DoubleArray* value);
char nova_math_Nova_Matrix_Accessor_Nova_isIdentity(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_math_Nova_Matrix_Accessor_Nova_isSquare(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_rows(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_Matrix_Accessor_Nova_cols(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Matrix_Nova_super(nova_math_Nova_Matrix* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

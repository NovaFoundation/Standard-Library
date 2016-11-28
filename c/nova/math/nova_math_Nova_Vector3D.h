#pragma once
#ifndef FILE_nova_math_Nova_Vector3D_NOVA
#define FILE_nova_math_Nova_Vector3D_NOVA

typedef struct nova_math_Nova_Vector3D nova_math_Nova_Vector3D;


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
#include <nova/math/nova_math_Nova_Vector.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_math_Vector3D_Extension_VTable nova_math_Vector3D_Extension_VTable;
struct nova_math_Vector3D_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	double (*nova_math_Nova_Vector_virtual_Nova_dotProduct)(nova_math_Nova_Vector*, nova_exception_Nova_ExceptionData*, nova_math_Nova_Vector*);
};

extern nova_math_Vector3D_Extension_VTable nova_math_Vector3D_Extension_VTable_val;


CCLASS_CLASS
(
	nova_math_Nova_Vector3D, 
	
	nova_math_Vector3D_Extension_VTable* vtable;
	nova_datastruct_list_Nova_DoubleArray* nova_math_Nova_Vector_Nova_data;
)

void nova_math_Nova_Vector3D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_0_Nova_construct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_1_Nova_construct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z);
void nova_math_Nova_Vector3D_Nova_destroy(nova_math_Nova_Vector3D** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector3D_4_Nova_this(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_math_Nova_Vector3D_5_Nova_this(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, double z);
nova_math_Nova_Vector3D* nova_math_Nova_Vector3D_Nova_crossProduct(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_Vector3D* other);
double nova_math_Nova_Vector3D_Accessor_Nova_x(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector3D_Mutator_Nova_x(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value);
double nova_math_Nova_Vector3D_Accessor_Nova_y(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector3D_Mutator_Nova_y(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value);
double nova_math_Nova_Vector3D_Accessor_Nova_z(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);
double nova_math_Nova_Vector3D_Mutator_Nova_z(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double value);
void nova_math_Nova_Vector3D_Nova_super(nova_math_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

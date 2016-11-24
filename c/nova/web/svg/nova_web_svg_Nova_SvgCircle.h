#pragma once
#ifndef FILE_nova_web_svg_Nova_SvgCircle_NOVA
#define FILE_nova_web_svg_Nova_SvgCircle_NOVA

typedef struct nova_web_svg_Nova_SvgCircle nova_web_svg_Nova_SvgCircle;


#include <Nova.h>
#include <InterfaceVTable.h>
#include <ExceptionHandler.h>
#include <NovaClassData.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_SoftException.h>
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
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponent.h>
#include <nova/web/svg/nova_web_svg_Nova_SvgComponentList.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_web_svg_SvgCircle_Extension_VTable nova_web_svg_SvgCircle_Extension_VTable;
struct nova_web_svg_SvgCircle_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual_Nova_toString)(nova_web_svg_Nova_SvgCircle*, nova_exception_Nova_ExceptionData*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	void (*nova_web_svg_Nova_SvgComponent_virtual_Nova_generateOutput)(nova_web_svg_Nova_SvgComponent*, nova_exception_Nova_ExceptionData*, nova_io_Nova_FileWriter*);
};

extern nova_web_svg_SvgCircle_Extension_VTable nova_web_svg_SvgCircle_Extension_VTable_val;


CCLASS_CLASS
(
	nova_web_svg_Nova_SvgCircle, 
	
	nova_web_svg_SvgCircle_Extension_VTable* vtable;
	nova_web_svg_Nova_SvgComponentList* nova_web_svg_Nova_SvgComponent_Nova_children;
	double nova_web_svg_Nova_SvgCircle_Nova_x;
	double nova_web_svg_Nova_SvgCircle_Nova_y;
	int nova_web_svg_Nova_SvgCircle_Nova_r;
)

void nova_web_svg_Nova_SvgCircle_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_web_svg_Nova_SvgCircle* nova_web_svg_Nova_SvgCircle_Nova_construct(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, int r);
void nova_web_svg_Nova_SvgCircle_Nova_destroy(nova_web_svg_Nova_SvgCircle** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_SvgCircle_Nova_this(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, double x, double y, int r);
char nova_web_svg_Nova_SvgCircle_Nova_generateOutput(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_FileWriter* writer);
nova_Nova_String* nova_web_svg_Nova_SvgCircle_Nova_toString(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_web_svg_Nova_SvgCircle_Nova_super(nova_web_svg_Nova_SvgCircle* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

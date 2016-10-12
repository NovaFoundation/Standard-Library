#include <precompiled.h>
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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_graphics_Vector3D_Extension_VTable nova_graphics_Vector3D_Extension_VTable_val =
{
	{
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
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_graphics_Nova_Vector3D_Nova_toString,
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void nova_graphics_Nova_Vector3D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_graphics_Nova_Vector3D* nova_graphics_Nova_Vector3D_0_Nova_construct(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_graphics_Nova_Vector3D, this,);
	this->vtable = &nova_graphics_Vector3D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_graphics_Nova_Vector3D_Nova_super(this, exceptionData);
	
	{
		nova_graphics_Nova_Vector3D_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_graphics_Nova_Vector3D* nova_graphics_Nova_Vector3D_1_Nova_construct(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_graphics_Nova_Vector3D_Nova_x, double nova_graphics_Nova_Vector3D_Nova_y, double nova_graphics_Nova_Vector3D_Nova_z)
{
	CCLASS_NEW(nova_graphics_Nova_Vector3D, this,);
	this->vtable = &nova_graphics_Vector3D_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_graphics_Nova_Vector3D_Nova_super(this, exceptionData);
	
	{
		nova_graphics_Nova_Vector3D_0_Nova_this(this, exceptionData, nova_graphics_Nova_Vector3D_Nova_x, nova_graphics_Nova_Vector3D_Nova_y, nova_graphics_Nova_Vector3D_Nova_z);
	}
	
	return this;
}

void nova_graphics_Nova_Vector3D_Nova_destroy(nova_graphics_Nova_Vector3D** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_graphics_Nova_Vector3D_Nova_this(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_graphics_Nova_Vector3D_0_Nova_this(this, exceptionData, 0, 0, 0);
}

void nova_graphics_Nova_Vector3D_0_Nova_this(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_graphics_Nova_Vector3D_Nova_x, double nova_graphics_Nova_Vector3D_Nova_y, double nova_graphics_Nova_Vector3D_Nova_z)
{
	this->nova_graphics_Nova_Vector3D_Nova_x = nova_graphics_Nova_Vector3D_Nova_x;
	this->nova_graphics_Nova_Vector3D_Nova_y = nova_graphics_Nova_Vector3D_Nova_y;
	this->nova_graphics_Nova_Vector3D_Nova_z = nova_graphics_Nova_Vector3D_Nova_z;
}

nova_graphics_Nova_Vector3D* nova_graphics_Nova_Vector3D_Nova_crossProduct(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData, nova_graphics_Nova_Vector3D* nova_graphics_Nova_Vector3D_Nova_other)
{
	return nova_graphics_Nova_Vector3D_1_Nova_construct(0, exceptionData, this->nova_graphics_Nova_Vector3D_Nova_y * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_z - this->nova_graphics_Nova_Vector3D_Nova_z * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_y, this->nova_graphics_Nova_Vector3D_Nova_z * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_x - this->nova_graphics_Nova_Vector3D_Nova_x * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_z, this->nova_graphics_Nova_Vector3D_Nova_x * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_y - this->nova_graphics_Nova_Vector3D_Nova_y * nova_graphics_Nova_Vector3D_Nova_other->nova_graphics_Nova_Vector3D_Nova_x);
}

nova_Nova_String* nova_graphics_Nova_Vector3D_Nova_toString(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("<")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_graphics_Nova_Vector3D_Nova_x))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_graphics_Nova_Vector3D_Nova_y))), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, (this->nova_graphics_Nova_Vector3D_Nova_z))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(">"))))))));
}

void nova_graphics_Nova_Vector3D_Nova_super(nova_graphics_Nova_Vector3D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_graphics_Nova_Vector3D_Nova_x = 0;
	this->nova_graphics_Nova_Vector3D_Nova_y = 0;
	this->nova_graphics_Nova_Vector3D_Nova_z = 0;
}


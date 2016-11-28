#include <precompiled.h>
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
#include <nova/star/NativeWindow.h>
#include <nova/star/nova_star_Nova_Window.h>
#include <nova/thread/NativeThread.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_star_WindowThread_Extension_VTable nova_star_WindowThread_Extension_VTable_val =
{
	0,
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
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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
	},
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_star_Nova_WindowThread_Nova_run,
};


CCLASS_PRIVATE
(
	NOVA_THREAD_HANDLE* nova_thread_Nova_Thread_Nova_handle;
	
	nova_star_Nova_Window* nova_star_Nova_WindowThread_Nova_window;
	
)
void nova_star_Nova_WindowThread_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_WindowThread* nova_star_Nova_WindowThread_Nova_construct(nova_star_Nova_WindowThread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_star_Nova_Window* window)
{
	CCLASS_NEW(nova_star_Nova_WindowThread, this);
	this->vtable = &nova_star_WindowThread_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_thread_Nova_Thread_Nova_super((nova_thread_Nova_Thread*)this, exceptionData);
	nova_star_Nova_WindowThread_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_WindowThread_Nova_this(this, exceptionData, window);
	}
	
	return this;
}

void nova_star_Nova_WindowThread_Nova_destroy(nova_star_Nova_WindowThread** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_star_Nova_Window_Nova_destroy(&(*this)->prv->nova_star_Nova_WindowThread_Nova_window, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_star_Nova_WindowThread_Nova_this(nova_star_Nova_WindowThread* this, nova_exception_Nova_ExceptionData* exceptionData, nova_star_Nova_Window* window)
{
	this->prv->nova_star_Nova_WindowThread_Nova_window = window;
}

void nova_star_Nova_WindowThread_Nova_run(nova_star_Nova_WindowThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_createWindow(this->prv->nova_star_Nova_WindowThread_Nova_window->nova_star_Nova_Window_Nova_x, this->prv->nova_star_Nova_WindowThread_Nova_window->nova_star_Nova_Window_Nova_y, this->prv->nova_star_Nova_WindowThread_Nova_window->nova_star_Nova_Window_Nova_width, this->prv->nova_star_Nova_WindowThread_Nova_window->nova_star_Nova_Window_Nova_height, (char*)(this->prv->nova_star_Nova_WindowThread_Nova_window->nova_star_Nova_Window_Nova_title->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
}

void nova_star_Nova_WindowThread_Nova_super(nova_star_Nova_WindowThread* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_star_Nova_WindowThread_Nova_window = (nova_star_Nova_Window*)nova_null;
}


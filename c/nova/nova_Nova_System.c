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
#include <nova/io/nova_io_Nova_FileWriter.h>
#include <nova/io/nova_io_Nova_FileReader.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <nova/process/nova_process_Nova_Process.h>
#include <nova/NativeSystem.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>


typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_String nova_Nova_String;

typedef void (*nova_Nova_System_closure1_Nova_exit)(void*, nova_exception_Nova_ExceptionData*, int, nova_Nova_String*, char, void*);

nova_System_Extension_VTable nova_System_Extension_VTable_val =
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
};


void nova_Nova_System_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_Nova_System* nova_Nova_System_Nova_construct(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_Nova_System, this,);
	this->vtable = &nova_System_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_System_Nova_super(this, exceptionData);
	
	{
		nova_Nova_System_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_Nova_System_Nova_destroy(nova_Nova_System** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_Nova_System_0_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code)
{
	exit(code);
}

void nova_Nova_System_1_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message)
{
	nova_Nova_System_2_static_Nova_exit(0, exceptionData, code, message, 0);
}

void nova_Nova_System_2_static_Nova_exit(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, int code, nova_Nova_String* message, char log)
{
	if (log)
	{
		nova_io_Nova_FileWriter* l1_Nova_f = (nova_io_Nova_FileWriter*)nova_null;
		
		l1_Nova_f = nova_io_Nova_FileWriter_1_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Log"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".txt")))));
		if (nova_io_Nova_FileWriter_Nova_create(l1_Nova_f, exceptionData))
		{
			nova_io_Nova_FileWriter_Nova_writeLine(l1_Nova_f, exceptionData, message);
		}
	}
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, message);
	nova_Nova_System_0_static_Nova_exit(0, exceptionData, code);
}

nova_process_Nova_Process* nova_Nova_System_static_Nova_execute(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* command)
{
	FILE* l1_Nova_pipe = (FILE*)nova_null;
	
	l1_Nova_pipe = getPipe((char*)(command->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (nova_Nova_System_closure1_Nova_exit)&nova_Nova_System_2_static_Nova_exit, nova_null, nova_null);
	if (l1_Nova_pipe == 0)
	{
		nova_Nova_System_1_static_Nova_exit(0, exceptionData, 1, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Unable to open pipe")));
	}
	return nova_process_Nova_Process_Nova_construct(0, exceptionData, (nova_io_Nova_InputStream*)(nova_io_Nova_FileReader_1_Nova_construct(0, exceptionData, l1_Nova_pipe)));
}

void nova_Nova_System_Nova_this(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_Nova_System_Nova_super(nova_Nova_System* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


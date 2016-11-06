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
#include <nova/io/NativeFile.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <tinydir.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_io_File_Extension_VTable nova_io_File_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
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




void nova_io_Nova_File_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_io_Nova_File* l1_Nova_exitLog = (nova_io_Nova_File*)nova_null;
		
		l1_Nova_exitLog = nova_io_Nova_File_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("log"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
}

nova_io_Nova_File* nova_io_Nova_File_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	CCLASS_NEW(nova_io_Nova_File, this,);
	this->vtable = &nova_io_File_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_File_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_File_Nova_this(this, exceptionData, location);
	}
	
	return this;
}

void nova_io_Nova_File_Nova_destroy(nova_io_Nova_File** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_Class_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_class, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_location, exceptionData);
	
	
	
	NOVA_FREE(*this);
}

void nova_io_Nova_File_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	this->nova_io_Nova_File_Nova_location = location;
}

nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_directoryContents(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	tinydir_dir dir;
	tinydir_open(&dir, (char*)location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		printf("%s", file.name);
		if (file.is_dir) {
			printf("/");
		}
		printf("\n");
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_listFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	nova_datastruct_list_Nova_Array* l1_Nova_names = (nova_datastruct_list_Nova_Array*)nova_null;
	char* l1_Nova_current = (char*)nova_null;
	
	l1_Nova_names = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	
	tinydir_dir dir;
	tinydir_open(&dir, (char*)location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		if (!file.is_dir) {
			l1_Nova_current = file.name;
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_names), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_current)));
			
		}
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return (nova_datastruct_list_Nova_Array*)l1_Nova_names;
}

int nova_io_Nova_File_Accessorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return getMaxOpenFiles();
}

int nova_io_Nova_File_Mutatorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	short l1_Nova_min = 0;
	short l1_Nova_max = 0;
	
	l1_Nova_min = (short)20;
	l1_Nova_max = (short)2048;
	if (value > l1_Nova_max || value < l1_Nova_min)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid max number of open files: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (value))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nValid values include "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, (l1_Nova_min))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, (l1_Nova_max))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
	}
	else
	{
		setMaxOpenFiles(value);
	}
	return value;
}

char nova_io_Nova_File_Accessorfunc_Nova_exists(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return access((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), F_OK) != -1;
}


void nova_io_Nova_File_Nova_super(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_io_Nova_File_Nova_class = (nova_Nova_Class*)nova_null;
	this->nova_io_Nova_File_Nova_location = (nova_Nova_String*)nova_null;
	this->nova_io_Nova_File_Nova_exists = 0;
	this->nova_io_Nova_File_Nova_maxOpenFiles = 0;
}


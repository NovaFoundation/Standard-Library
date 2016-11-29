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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_FileNotFoundException.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_io_FileWriter_Extension_VTable nova_io_FileWriter_Extension_VTable_val =
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
	nova_io_Nova_FileWriter_Nova_write,
};


CCLASS_PRIVATE
(
	FILE* nova_io_Nova_FileWriter_Nova_fp;
	
)


void nova_io_Nova_FileWriter_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_FileWriter* nova_io_Nova_FileWriter_0_Nova_construct(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file)
{
	CCLASS_NEW(nova_io_Nova_FileWriter, this);
	this->vtable = &nova_io_FileWriter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_OutputStream_Nova_super((nova_io_Nova_OutputStream*)this, exceptionData);
	nova_io_Nova_FileWriter_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_FileWriter_0_Nova_this(this, exceptionData, file);
	}
	
	return this;
}

nova_io_Nova_FileWriter* nova_io_Nova_FileWriter_1_Nova_construct(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	CCLASS_NEW(nova_io_Nova_FileWriter, this);
	this->vtable = &nova_io_FileWriter_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_OutputStream_Nova_super((nova_io_Nova_OutputStream*)this, exceptionData);
	nova_io_Nova_FileWriter_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_FileWriter_1_Nova_this(this, exceptionData, location);
	}
	
	return this;
}

void nova_io_Nova_FileWriter_Nova_destroy(nova_io_Nova_FileWriter** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_io_Nova_File_Nova_destroy(&(*this)->nova_io_Nova_FileWriter_Nova_file, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_io_Nova_FileWriter_0_Nova_this(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file)
{
	this->prv->nova_io_Nova_FileWriter_Nova_fp = fopen((char*)file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data, "r+");
	this->nova_io_Nova_FileWriter_Nova_file = file;
}

void nova_io_Nova_FileWriter_1_Nova_this(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	nova_io_Nova_FileWriter_0_Nova_this(this, exceptionData, nova_io_Nova_File_1_Nova_construct(0, exceptionData, location));
}

char nova_io_Nova_FileWriter_Nova_delete(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_FileWriter_Nova_close(this, exceptionData);
	return remove((char*)(this->nova_io_Nova_FileWriter_Nova_file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)) == 0;
}

void nova_io_Nova_FileWriter_Nova_reopen(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_FileWriter_Nova_close(this, exceptionData);
	this->prv->nova_io_Nova_FileWriter_Nova_fp = fopen((char*)(this->nova_io_Nova_FileWriter_Nova_file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("r+"));
}

void nova_io_Nova_FileWriter_Nova_rewind(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	rewind(this->prv->nova_io_Nova_FileWriter_Nova_fp);
}

char nova_io_Nova_FileWriter_Nova_clearContents(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_io_Nova_File_Accessorfunc_Nova_exists(this->nova_io_Nova_FileWriter_Nova_file, exceptionData))
	{
		this->prv->nova_io_Nova_FileWriter_Nova_fp = fopen((char*)(this->nova_io_Nova_FileWriter_Nova_file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("w"));
		return 1;
	}
	else
	{
		return 0;
	}
}

char nova_io_Nova_FileWriter_Nova_create(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!nova_io_Nova_File_Accessorfunc_Nova_exists(this->nova_io_Nova_FileWriter_Nova_file, exceptionData))
	{
		this->prv->nova_io_Nova_FileWriter_Nova_fp = fopen((char*)(this->nova_io_Nova_FileWriter_Nova_file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("w"));
		if (!nova_io_Nova_File_Accessorfunc_Nova_exists(this->nova_io_Nova_FileWriter_Nova_file, exceptionData))
		{
			THROW(nova_io_Nova_FileNotFoundException_Nova_construct(0, exceptionData, this->nova_io_Nova_FileWriter_Nova_file), 0);
			return 0;
		}
		nova_io_Nova_FileWriter_Nova_reopen(this, exceptionData);
		if (!nova_io_Nova_File_Accessorfunc_Nova_exists(this->nova_io_Nova_FileWriter_Nova_file, exceptionData))
		{
			THROW(nova_io_Nova_FileNotFoundException_Nova_construct(0, exceptionData, this->nova_io_Nova_FileWriter_Nova_file), 0);
			return 0;
		}
		return 1;
	}
	return 0;
}

char nova_io_Nova_FileWriter_Nova_writeLine(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* line)
{
	return nova_io_Nova_FileWriter_Nova_write(this, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((line)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
}

char nova_io_Nova_FileWriter_Nova_write(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* data)
{
	fputs((char*)(data->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), this->prv->nova_io_Nova_FileWriter_Nova_fp);
	nova_io_Nova_FileWriter_Nova_flush(this, exceptionData);
	return 1;
}

void nova_io_Nova_FileWriter_Nova_flush(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	fflush(this->prv->nova_io_Nova_FileWriter_Nova_fp);
}

char nova_io_Nova_FileWriter_Nova_close(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_io_Nova_FileWriter_Accessor_Nova_isOpen(this, exceptionData))
	{
		fclose(this->prv->nova_io_Nova_FileWriter_Nova_fp);
		return 1;
	}
	else
	{
		return 0;
	}
}

char nova_io_Nova_FileWriter_Accessor_Nova_isOpen(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_io_Nova_FileWriter_Nova_fp != 0;
}


void nova_io_Nova_FileWriter_Nova_super(nova_io_Nova_FileWriter* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_io_Nova_FileWriter_Nova_file = (nova_io_Nova_File*)nova_null;
}


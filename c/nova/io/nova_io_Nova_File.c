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
#include <nova/io/nova_io_Nova_FileNotFoundException.h>
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


CCLASS_PRIVATE
(
	FILE* nova_io_Nova_File_Nova_fp;
	
)


void nova_io_Nova_File_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_io_Nova_File* l1_Nova_exitLog = (nova_io_Nova_File*)nova_null;
		
		l1_Nova_exitLog = nova_io_Nova_File_0_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("log"))), exceptionData, nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData))));
	}
}

nova_io_Nova_File* nova_io_Nova_File_0_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	CCLASS_NEW(nova_io_Nova_File, this);
	this->vtable = &nova_io_File_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_File_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_File_0_Nova_this(this, exceptionData, location);
	}
	
	return this;
}

nova_io_Nova_File* nova_io_Nova_File_1_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp)
{
	CCLASS_NEW(nova_io_Nova_File, this);
	this->vtable = &nova_io_File_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_File_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_File_1_Nova_this(this, exceptionData, fp);
	}
	
	return this;
}

void nova_io_Nova_File_Nova_destroy(nova_io_Nova_File** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_Nova_String_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_location, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_io_Nova_File_0_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	this->nova_io_Nova_File_Nova_location = location;
	this->prv->nova_io_Nova_File_Nova_fp = fopen((char*)(location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("r+"));
}

void nova_io_Nova_File_1_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp)
{
	this->prv->nova_io_Nova_File_Nova_fp = fp;
}

char nova_io_Nova_File_Nova_delete(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_File_Nova_close(this, exceptionData);
	return remove((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)) == 0;
}

void nova_io_Nova_File_Nova_reopen(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_File_Nova_close(this, exceptionData);
	this->prv->nova_io_Nova_File_Nova_fp = fopen((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("r+"));
}

void nova_io_Nova_File_Nova_rewind(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	rewind(this->prv->nova_io_Nova_File_Nova_fp);
}

void nova_io_Nova_File_Nova_clearContents(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_io_Nova_File_Accessor_Nova_exists(this, exceptionData))
	{
		this->prv->nova_io_Nova_File_Nova_fp = fopen((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("w"));
	}
}

char nova_io_Nova_File_Nova_create(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!nova_io_Nova_File_Accessor_Nova_exists(this, exceptionData))
	{
		this->prv->nova_io_Nova_File_Nova_fp = fopen((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)("w"));
		if (!nova_io_Nova_File_Accessor_Nova_exists(this, exceptionData))
		{
			THROW(5, nova_io_Nova_FileNotFoundException_Nova_construct(0, exceptionData, this));
			return 0;
		}
		nova_io_Nova_File_Nova_reopen(this, exceptionData);
		if (!nova_io_Nova_File_Accessor_Nova_exists(this, exceptionData))
		{
			THROW(5, nova_io_Nova_FileNotFoundException_Nova_construct(0, exceptionData, this));
			return 0;
		}
		return 1;
	}
	return 0;
}

nova_Nova_String* nova_io_Nova_File_Nova_readAllContents(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_data = (nova_Nova_String*)nova_null;
	nova_Nova_String* l1_Nova_line = (nova_Nova_String*)nova_null;
	
	l1_Nova_data = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	l1_Nova_line = nova_io_Nova_File_Nova_readLine(this, exceptionData);
	while (l1_Nova_line != (nova_Nova_String*)nova_null)
	{
		if (l1_Nova_data->nova_Nova_String_Nova_count > 0)
		{
			l1_Nova_data = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_data), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
		}
		l1_Nova_data = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(l1_Nova_data), exceptionData, l1_Nova_line));
		l1_Nova_line = nova_io_Nova_File_Nova_readLine(this, exceptionData);
	}
	return l1_Nova_data;
}

nova_Nova_String* nova_io_Nova_File_Nova_readLine(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_buf = 0;
	int l1_Nova_size = 0;
	char* l1_Nova_line = (char*)nova_null;
	char l1_Nova_c = 0;
	int l1_Nova_index = 0;
	
	l1_Nova_buf = (int)(5);
	l1_Nova_size = l1_Nova_buf;
	
	l1_Nova_line = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_size);
	l1_Nova_c = (char)(getc(this->prv->nova_io_Nova_File_Nova_fp));
	if (l1_Nova_c == EOF)
	{
		return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_index = (int)(0);
	while (l1_Nova_c != '\n' && l1_Nova_c != EOF)
	{
		if (l1_Nova_index >= l1_Nova_size)
		{
			l1_Nova_size = l1_Nova_size + l1_Nova_buf;
			l1_Nova_line = (char*)(realloc(l1_Nova_line, l1_Nova_size));
		}
		l1_Nova_line[l1_Nova_index++] = l1_Nova_c;
		l1_Nova_c = (char)(getc(this->prv->nova_io_Nova_File_Nova_fp));
	}
	if (l1_Nova_index >= l1_Nova_size)
	{
		l1_Nova_size++;
		l1_Nova_line = (char*)(realloc(l1_Nova_line, l1_Nova_size));
	}
	l1_Nova_line[l1_Nova_index++] = '\0';
	l1_Nova_line = (char*)(realloc(l1_Nova_line, l1_Nova_index));
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_line);
}

void nova_io_Nova_File_Nova_writeLine(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* line)
{
	nova_io_Nova_File_Nova_write(this, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(line), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
}

void nova_io_Nova_File_Nova_write(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* data)
{
	fputs((char*)(data->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), this->prv->nova_io_Nova_File_Nova_fp);
	nova_io_Nova_File_Nova_flush(this, exceptionData);
}

void nova_io_Nova_File_Nova_flush(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	fflush(this->prv->nova_io_Nova_File_Nova_fp);
}

void nova_io_Nova_File_Nova_close(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_io_Nova_File_Accessor_Nova_exists(this, exceptionData))
	{
		fclose(this->prv->nova_io_Nova_File_Nova_fp);
	}
}

char nova_io_Nova_File_Accessor_Nova_exists(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_io_Nova_File_Nova_fp != 0;
}


int nova_io_Nova_File_Accessor_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return getMaxOpenFiles();
}

int nova_io_Nova_File_Mutator_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	short l1_Nova_min = 0;
	short l1_Nova_max = 0;
	
	l1_Nova_min = (short)20;
	l1_Nova_max = (short)2048;
	if (value > l1_Nova_max || value < l1_Nova_min)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid max number of open files: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, value)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nValid values include "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, l1_Nova_min)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"))), exceptionData, nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, l1_Nova_max)))))));
	}
	else
	{
		setMaxOpenFiles(value);
	}
	return value;
}

void nova_io_Nova_File_Nova_super(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_io_Nova_File_Nova_location = (nova_Nova_String*)nova_null;
	this->prv->nova_io_Nova_File_Nova_fp = 0;
}


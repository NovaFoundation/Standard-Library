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
#include <nova/io/nova_io_Nova_InputStream.h>



nova_io_FileReader_Extension_VTable nova_io_FileReader_Extension_VTable_val =
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
		(nova_Nova_String*(*)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*))nova_io_Nova_FileReader_Nova_readString,
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
	},
};


CCLASS_PRIVATE
(
	FILE* nova_io_Nova_FileReader_Nova_fp;
	
)


void nova_io_Nova_FileReader_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_FileReader* nova_io_Nova_FileReader_0_Nova_construct(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file)
{
	CCLASS_NEW(nova_io_Nova_FileReader, this);
	this->vtable = &nova_io_FileReader_Extension_VTable_val;
	nova_io_Nova_FileReader_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_FileReader_0_Nova_this(this, exceptionData, file);
	}
	
	return this;
}

nova_io_Nova_FileReader* nova_io_Nova_FileReader_1_Nova_construct(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp)
{
	CCLASS_NEW(nova_io_Nova_FileReader, this);
	this->vtable = &nova_io_FileReader_Extension_VTable_val;
	nova_io_Nova_FileReader_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_FileReader_1_Nova_this(this, exceptionData, fp);
	}
	
	return this;
}

void nova_io_Nova_FileReader_Nova_destroy(nova_io_Nova_FileReader** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_io_Nova_File_Nova_destroy(&(*this)->nova_io_Nova_FileReader_Nova_file, exceptionData);
	
	NOVA_FREE(*this);
}

nova_Nova_String* nova_io_Nova_FileReader_Nova_readString(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_io_Nova_FileReader_Nova_readLine(this, exceptionData);
}

nova_Nova_Object* nova_io_Nova_FileReader_Nova_readBytes(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_Object*)nova_null;
}

void nova_io_Nova_FileReader_0_Nova_this(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file)
{
	this->nova_io_Nova_FileReader_Nova_file = file;
	nova_io_Nova_FileReader_Nova_open(this, exceptionData);
}

void nova_io_Nova_FileReader_1_Nova_this(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp)
{
	this->prv->nova_io_Nova_FileReader_Nova_fp = fp;
}

void nova_io_Nova_FileReader_Nova_open(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_io_Nova_FileReader_Nova_fp = fopen((char*)this->nova_io_Nova_FileReader_Nova_file->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data, "r+");
}

nova_Nova_String* nova_io_Nova_FileReader_Nova_readAllContents(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_size = 0;
	char* l1_Nova_buffer = (char*)nova_null;
	
	int string_size;
	FILE *handler = this->prv->nova_io_Nova_FileReader_Nova_fp;
	l1_Nova_buffer = 0;
	if (handler)
	{
		fseek(handler, 0, SEEK_END);
		string_size = ftell(handler);
		rewind(handler);
		l1_Nova_buffer = (char*) malloc(sizeof(char) * (string_size + 1) );
		l1_Nova_size = fread(l1_Nova_buffer, sizeof(char), string_size, handler);
		l1_Nova_buffer[l1_Nova_size] = '\0';
		if (l1_Nova_size < string_size) {
			l1_Nova_buffer = realloc(l1_Nova_buffer, l1_Nova_size + 1);
		}
		/*if (string_size != l1_Nova_size)
		{
			free(l1_Nova_buffer);
			l1_Nova_buffer = NULL;
			l1_Nova_buffer = 0;
		}*/
	}
	if (l1_Nova_buffer == 0)
	{
		return (nova_Nova_String*)nova_null;
	}
	rewind(handler);
	return nova_Nova_String_2_Nova_construct(0, exceptionData, l1_Nova_buffer, l1_Nova_size);
}

nova_Nova_String* nova_io_Nova_FileReader_Nova_readLine(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_bufferSize = 0;
	char* l1_Nova_line = (char*)nova_null;
	
	l1_Nova_bufferSize = (int)(80);
	l1_Nova_line = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_bufferSize);
	if ((l1_Nova_bufferSize = nova_getline(&l1_Nova_line, &l1_Nova_bufferSize, this->prv->nova_io_Nova_FileReader_Nova_fp)) == -1)
	{
		return (nova_Nova_String*)nova_null;
	}
	l1_Nova_line = realloc(l1_Nova_line, l1_Nova_bufferSize);
	l1_Nova_line[l1_Nova_bufferSize - 1] = '\0';
	return nova_Nova_String_2_Nova_construct(0, exceptionData, l1_Nova_line, l1_Nova_bufferSize - 1);
}

void nova_io_Nova_FileReader_Nova_close(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_io_Nova_FileReader_Accessor_Nova_isOpen(this, exceptionData))
	{
		fclose(this->prv->nova_io_Nova_FileReader_Nova_fp);
	}
}

char nova_io_Nova_FileReader_Accessor_Nova_isOpen(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_io_Nova_FileReader_Nova_fp != 0;
}


void nova_io_Nova_FileReader_Nova_super(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_io_Nova_FileReader_Nova_file = (nova_io_Nova_File*)nova_null;
}


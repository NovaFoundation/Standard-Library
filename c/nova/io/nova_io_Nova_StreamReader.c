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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_InputStream.h>



nova_io_StreamReader_Extension_VTable nova_io_StreamReader_Extension_VTable_val =
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
		(nova_Nova_String*(*)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*))nova_io_Nova_StreamReader_Nova_readString,
		(nova_datastruct_list_Nova_Array*(*)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*))nova_io_Nova_StreamReader_Nova_readBytes,
		0,
		0,
		0,
		0,
		0,
	},
	nova_io_Nova_StreamReader_Nova_readString,
	nova_io_Nova_StreamReader_Nova_readBytes,
};


CCLASS_PRIVATE
(
	nova_io_Nova_File* nova_io_Nova_StreamReader_Nova_file;
	
)
void nova_io_Nova_StreamReader_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_StreamReader* nova_io_Nova_StreamReader_Nova_construct(nova_io_Nova_StreamReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* nova_io_Nova_StreamReader_Nova_file)
{
	CCLASS_NEW(nova_io_Nova_StreamReader, this);
	this->vtable = &nova_io_StreamReader_Extension_VTable_val;
	nova_io_Nova_StreamReader_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_StreamReader_Nova_this(this, exceptionData, nova_io_Nova_StreamReader_Nova_file);
	}
	
	return this;
}

void nova_io_Nova_StreamReader_Nova_destroy(nova_io_Nova_StreamReader** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_io_Nova_File_Nova_destroy(&(*this)->prv->nova_io_Nova_StreamReader_Nova_file, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_io_Nova_StreamReader_Nova_this(nova_io_Nova_StreamReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* nova_io_Nova_StreamReader_Nova_file)
{
	this->prv->nova_io_Nova_StreamReader_Nova_file = nova_io_Nova_StreamReader_Nova_file;
}

nova_datastruct_list_Nova_Array* nova_io_Nova_StreamReader_Nova_readBytes(nova_io_Nova_StreamReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_Nova_String* nova_io_Nova_StreamReader_Nova_readString(nova_io_Nova_StreamReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	
	l1_Nova_output = nova_io_Nova_File_Nova_readAllContents(this->prv->nova_io_Nova_StreamReader_Nova_file, exceptionData);
	return l1_Nova_output;
}

void nova_io_Nova_StreamReader_Nova_super(nova_io_Nova_StreamReader* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->nova_io_Nova_StreamReader_Nova_file = (nova_io_Nova_File*)nova_null;
}


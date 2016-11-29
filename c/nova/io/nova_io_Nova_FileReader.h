#pragma once
#ifndef FILE_nova_io_Nova_FileReader_NOVA
#define FILE_nova_io_Nova_FileReader_NOVA

typedef struct nova_io_Nova_FileReader nova_io_Nova_FileReader;


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
#include <nova/io/nova_io_Nova_File.h>
#include <nova/io/nova_io_Nova_InputStream.h>


typedef struct nova_io_FileReader_Extension_VTable nova_io_FileReader_Extension_VTable;
struct nova_io_FileReader_Extension_VTable
{
	nova_Nova_Class* classInstance;
	nova_Interface_VTable itable;
};

extern nova_io_FileReader_Extension_VTable nova_io_FileReader_Extension_VTable_val;


CCLASS_CLASS
(
	nova_io_Nova_FileReader, 
	
	nova_io_FileReader_Extension_VTable* vtable;
	nova_io_Nova_File* nova_io_Nova_FileReader_Nova_file;
	struct Private* prv;
)

void nova_io_Nova_FileReader_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_io_Nova_FileReader* nova_io_Nova_FileReader_0_Nova_construct(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file);
nova_io_Nova_FileReader* nova_io_Nova_FileReader_1_Nova_construct(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp);
void nova_io_Nova_FileReader_Nova_destroy(nova_io_Nova_FileReader** this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_FileReader_Nova_readString(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_Object* nova_io_Nova_FileReader_Nova_readBytes(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileReader_0_Nova_this(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file);
void nova_io_Nova_FileReader_1_Nova_this(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData, FILE* fp);
void nova_io_Nova_FileReader_Nova_open(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_FileReader_Nova_readAllContents(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_io_Nova_FileReader_Nova_readLine(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileReader_Nova_close(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_io_Nova_FileReader_Accessor_Nova_isOpen(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_FileReader_Nova_super(nova_io_Nova_FileReader* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif

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
#include <nova/database/NativeDBConnector.h>
#include <nova/database/nova_database_Nova_ResultSet.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_database_DBConnector_Extension_VTable nova_database_DBConnector_Extension_VTable_val =
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


CCLASS_PRIVATE
(
	MYSQL* nova_database_Nova_DBConnector_Nova_mysql;
	MYSQL_RES* nova_database_Nova_DBConnector_Nova_result;
	
)
void nova_database_Nova_DBConnector_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_database_Nova_DBConnector* nova_database_Nova_DBConnector_Nova_construct(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_database_Nova_DBConnector, this);
	this->vtable = &nova_database_DBConnector_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_database_Nova_DBConnector_Nova_super(this, exceptionData);
	
	{
		nova_database_Nova_DBConnector_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_database_Nova_DBConnector_Nova_destroy(nova_database_Nova_DBConnector** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	nova_Nova_String_Nova_destroy(&(*this)->nova_database_Nova_DBConnector_Nova_error, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_database_Nova_DBConnector_Nova_this(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_database_Nova_DBConnector_Nova_error = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

void nova_database_Nova_DBConnector_0_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password)
{
	this->prv->nova_database_Nova_DBConnector_Nova_mysql = nova_db_connect1((char*)(host->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(user->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(password->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
}

void nova_database_Nova_DBConnector_1_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database)
{
	this->prv->nova_database_Nova_DBConnector_Nova_mysql = nova_db_connect2((char*)(host->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(user->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(password->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(database->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
}

void nova_database_Nova_DBConnector_2_Nova_connect(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* host, nova_Nova_String* user, nova_Nova_String* password, nova_Nova_String* database, int port, nova_Nova_String* unixSocket, int clientFlag)
{
	this->prv->nova_database_Nova_DBConnector_Nova_mysql = nova_db_connect3((char*)(host->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(user->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(password->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(database->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), port, (char*)(unixSocket->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), clientFlag);
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
}

void nova_database_Nova_DBConnector_Nova_updateError(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_database_Nova_DBConnector_Nova_error = nova_Nova_String_1_Nova_construct(0, exceptionData, nova_db_error(this->prv->nova_database_Nova_DBConnector_Nova_mysql));
}

void nova_database_Nova_DBConnector_Nova_changeUser(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* username, nova_Nova_String* password, nova_Nova_String* database)
{
	nova_user_select(this->prv->nova_database_Nova_DBConnector_Nova_mysql, (char*)(username->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(password->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), (char*)(database->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
}

nova_database_Nova_ResultSet* nova_database_Nova_DBConnector_Nova_query(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* query)
{
	char*** l1_Nova_arrays = (char***)nova_null;
	
	this->prv->nova_database_Nova_DBConnector_Nova_result = nova_exec_query(this->prv->nova_database_Nova_DBConnector_Nova_mysql, (char*)(query->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	if (this->prv->nova_database_Nova_DBConnector_Nova_result == 0)
	{
		nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
		return (nova_database_Nova_ResultSet*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_arrays = (char***)(nova_get_results(this->prv->nova_database_Nova_DBConnector_Nova_mysql, this->prv->nova_database_Nova_DBConnector_Nova_result));
	if ((nova_primitive_number_Nova_Byte*)l1_Nova_arrays != (nova_primitive_number_Nova_Byte*)0)
	{
		int l2_Nova_numRows = 0;
		int l2_Nova_numCols = 0;
		nova_datastruct_list_Nova_Array* l2_Nova_rows = (nova_datastruct_list_Nova_Array*)nova_null;
		nova_database_Nova_ResultSet* l2_Nova_r = (nova_database_Nova_ResultSet*)nova_null;
		int l4_Nova_i = 0;
		
		l2_Nova_numRows = (int)nova_num_rows(this->prv->nova_database_Nova_DBConnector_Nova_mysql);
		l2_Nova_numCols = (int)nova_num_cols(this->prv->nova_database_Nova_DBConnector_Nova_result);
		l2_Nova_rows = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l2_Nova_numRows, (intptr_t)nova_null);
		l4_Nova_i = (int)0;
		for (; l4_Nova_i < (int)l2_Nova_numRows; l4_Nova_i++)
		{
			int l6_Nova_j = 0;
			
			nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l2_Nova_rows), exceptionData, l4_Nova_i, (nova_Nova_Object*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l2_Nova_numCols, (intptr_t)nova_null)));
			l6_Nova_j = (int)0;
			for (; l6_Nova_j < (int)l2_Nova_numCols; l6_Nova_j++)
			{
				nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l2_Nova_rows), exceptionData, l4_Nova_i)), exceptionData, l6_Nova_j, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_arrays[l4_Nova_i][l6_Nova_j])));
			}
		}
		l2_Nova_r = nova_database_Nova_ResultSet_Nova_construct(0, exceptionData, l2_Nova_rows, l2_Nova_numCols);
		nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
		return l2_Nova_r;
	}
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
	return (nova_database_Nova_ResultSet*)(nova_Nova_Object*)nova_null;
}

void nova_database_Nova_DBConnector_Nova_close(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_db_close(this->prv->nova_database_Nova_DBConnector_Nova_mysql);
	nova_database_Nova_DBConnector_Nova_updateError(this, exceptionData);
}

void nova_database_Nova_DBConnector_Nova_super(nova_database_Nova_DBConnector* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_database_Nova_DBConnector_Nova_error = (nova_Nova_String*)nova_null;
}


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
#include <nova/io/nova_io_Nova_InputStream.h>
#include <nova/io/nova_io_Nova_OutputStream.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Queue.h>
#include <nova/network/nova_network_Nova_NetworkInputStream.h>
#include <nova/network/nova_network_Nova_NetworkOutputStream.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_network_ConnectionSocket_Extension_VTable nova_network_ConnectionSocket_Extension_VTable_val =
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
	nova_datastruct_list_Nova_Queue* nova_network_Nova_ConnectionSocket_Nova_inputBuffer;
	SOCKET_ID_TYPE nova_network_Nova_ConnectionSocket_Nova_socket;
	
)

nova_Nova_String* nova_network_Nova_ConnectionSocket_1_Nova_readString(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData, char checkBuffer);
void nova_network_Nova_ConnectionSocket_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_ConnectionSocket* nova_network_Nova_ConnectionSocket_Nova_construct(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData, SOCKET_ID_TYPE socket)
{
	CCLASS_NEW(nova_network_Nova_ConnectionSocket, this);
	this->vtable = &nova_network_ConnectionSocket_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_network_Nova_Socket_Nova_super((nova_network_Nova_Socket*)this, exceptionData);
	nova_network_Nova_ConnectionSocket_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_ConnectionSocket_Nova_this(this, exceptionData, socket);
	}
	
	return this;
}

void nova_network_Nova_ConnectionSocket_Nova_destroy(nova_network_Nova_ConnectionSocket** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_Queue_Nova_destroy(&(*this)->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer, exceptionData);
	
	NOVA_FREE((*this)->prv);
	
	
	nova_io_Nova_OutputStream_Nova_destroy(&(*this)->nova_network_Nova_ConnectionSocket_Nova_out, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_network_Nova_ConnectionSocket_Nova_this(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData, SOCKET_ID_TYPE socket)
{
	this->prv->nova_network_Nova_ConnectionSocket_Nova_socket = socket;
	this->nova_network_Nova_ConnectionSocket_Nova_in = (nova_io_Nova_InputStream*)(nova_network_Nova_NetworkInputStream_Nova_construct(0, exceptionData, this));
	this->nova_network_Nova_ConnectionSocket_Nova_out = (nova_io_Nova_OutputStream*)(nova_network_Nova_NetworkOutputStream_Nova_construct(0, exceptionData, this));
	this->nova_network_Nova_ConnectionSocket_Nova_connected = 1;
}

void nova_network_Nova_ConnectionSocket_Nova_close(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_network_Nova_ConnectionSocket_Nova_connected = 0;
	nova_socket_close(this->prv->nova_network_Nova_ConnectionSocket_Nova_socket);
}

char nova_network_Nova_ConnectionSocket_Nova_validateConnection(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_message = (nova_Nova_String*)nova_null;
	
	if (!this->nova_network_Nova_ConnectionSocket_Nova_connected)
	{
		return this->nova_network_Nova_ConnectionSocket_Nova_connected;
	}
	l1_Nova_message = nova_network_Nova_ConnectionSocket_1_Nova_readString(this, exceptionData, 0);
	if (this->nova_network_Nova_ConnectionSocket_Nova_connected)
	{
		nova_datastruct_list_Nova_Queue_Nova_enqueue((nova_datastruct_list_Nova_Queue*)(this->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer), exceptionData, (nova_Nova_Object*)(l1_Nova_message));
	}
	return this->nova_network_Nova_ConnectionSocket_Nova_connected;
}

nova_Nova_String* nova_network_Nova_ConnectionSocket_0_Nova_readString(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_network_Nova_ConnectionSocket_1_Nova_readString(this, exceptionData, 1);
}

nova_Nova_String* nova_network_Nova_ConnectionSocket_1_Nova_readString(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData, char checkBuffer)
{
	if (!checkBuffer || nova_datastruct_list_Nova_Queue_Accessor_Nova_empty((nova_datastruct_list_Nova_Queue*)(this->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer), exceptionData))
	{
		char* l1_Nova_data = (char*)nova_null;
		
		l1_Nova_data = (char*)(nova_socket_receive(this->prv->nova_network_Nova_ConnectionSocket_Nova_socket));
		if ((nova_primitive_number_Nova_Byte*)l1_Nova_data == (nova_primitive_number_Nova_Byte*)0)
		{
			this->nova_network_Nova_ConnectionSocket_Nova_connected = 0;
			return (nova_Nova_String*)(nova_Nova_Object*)nova_null;
		}
		return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_data);
	}
	return (nova_Nova_String*)nova_datastruct_list_Nova_Queue_Nova_dequeue((nova_datastruct_list_Nova_Queue*)(this->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer), exceptionData);
}

char nova_network_Nova_ConnectionSocket_Nova_write(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* data)
{
	char l1_Nova_success = 0;
	
	l1_Nova_success = nova_socket_send(this->prv->nova_network_Nova_ConnectionSocket_Nova_socket, (char*)(data->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data)) == 1;
	return l1_Nova_success;
}

void nova_network_Nova_ConnectionSocket_Nova_super(nova_network_Nova_ConnectionSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_network_Nova_ConnectionSocket_Nova_connected = 0;
	this->nova_network_Nova_ConnectionSocket_Nova_in = (nova_io_Nova_InputStream*)nova_null;
	this->nova_network_Nova_ConnectionSocket_Nova_out = (nova_io_Nova_OutputStream*)nova_null;
	this->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer = (nova_datastruct_list_Nova_Queue*)nova_null;
	this->prv->nova_network_Nova_ConnectionSocket_Nova_inputBuffer = nova_datastruct_list_Nova_Queue_0_Nova_construct(0, exceptionData);
}


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
#include <nova/network/NativeClientSocket.h>
#include <nova/network/NativeSocket.h>
#include <nova/network/nova_network_Nova_ConnectionSocket.h>
#include <nova/network/nova_network_Nova_Socket.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_network_ClientSocket_Extension_VTable nova_network_ClientSocket_Extension_VTable_val =
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
	SOCKET_ID_TYPE nova_network_Nova_ClientSocket_Nova_socket;
	
)
void nova_network_Nova_ClientSocket_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_network_Nova_ClientSocket* nova_network_Nova_ClientSocket_Nova_construct(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_network_Nova_ClientSocket, this);
	this->vtable = &nova_network_ClientSocket_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_network_Nova_Socket_Nova_super((nova_network_Nova_Socket*)this, exceptionData);
	nova_network_Nova_ClientSocket_Nova_super(this, exceptionData);
	
	{
		nova_network_Nova_ClientSocket_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_network_Nova_ClientSocket_Nova_destroy(nova_network_Nova_ClientSocket** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_network_Nova_ConnectionSocket_Nova_destroy(&(*this)->nova_network_Nova_ClientSocket_Nova_connection, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_network_Nova_ClientSocket_Nova_this(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

char nova_network_Nova_ClientSocket_Nova_connect(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* ipAddress, int port)
{
	this->prv->nova_network_Nova_ClientSocket_Nova_socket = nova_clientsocket_connect((char*)(ipAddress->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), port);
	if (this->prv->nova_network_Nova_ClientSocket_Nova_socket == 0)
	{
		return 0;
	}
	this->nova_network_Nova_ClientSocket_Nova_connection = nova_network_Nova_ConnectionSocket_Nova_construct(0, exceptionData, this->prv->nova_network_Nova_ClientSocket_Nova_socket);
	return 1;
}

char nova_network_Nova_ClientSocket_Nova_close(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_result = 0;
	
	l1_Nova_result = (int)(nova_socket_close(this->prv->nova_network_Nova_ClientSocket_Nova_socket));
	if (l1_Nova_result == 0)
	{
		return 0;
	}
	return 1;
}

void nova_network_Nova_ClientSocket_Nova_super(nova_network_Nova_ClientSocket* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_network_Nova_ClientSocket_Nova_connection = (nova_network_Nova_ConnectionSocket*)nova_null;
}


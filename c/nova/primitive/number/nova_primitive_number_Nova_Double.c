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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/primitive/number/nova_primitive_number_Nova_RealNumber.h>
#include <nova/primitive/nova_primitive_Nova_Primitive.h>
#include <nova/operators/nova_operators_Nova_Multiply.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_primitive_number_Double_Extension_VTable nova_primitive_number_Double_Extension_VTable_val =
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
		(nova_Nova_Object*(*)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_primitive_number_Nova_Double_Nova_multiply,
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
	nova_primitive_number_Nova_Double_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_primitive_number_Nova_Number_static_Nova_numDigits,
};


void nova_primitive_number_Nova_Double_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_Double* nova_primitive_number_Nova_Double_Nova_construct(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	CCLASS_NEW(nova_primitive_number_Nova_Double, this,);
	this->vtable = &nova_primitive_number_Double_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_Nova_super((nova_primitive_number_Nova_Number*)this, exceptionData);
	nova_primitive_number_Nova_Double_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Double_Nova_this(this, exceptionData, value);
	}
	
	return this;
}

void nova_primitive_number_Nova_Double_Nova_destroy(nova_primitive_number_Nova_Double** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_Double_Nova_this(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	this->nova_primitive_number_Nova_Double_Nova_value = value;
}

int nova_primitive_number_Nova_Double_static_Nova_numDigits(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double number)
{
	int l1_Nova_size = 0;
	
	l1_Nova_size = (int)((char)(number < 0 ? 2 : 1));
	number /= 10;
	while (number > 0)
	{
		number /= 10;
		l1_Nova_size++;
	}
	return l1_Nova_size;
}

nova_Nova_String* nova_primitive_number_Nova_Double_static_Nova_genString(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, char* buffer, int lastIndex)
{
	buffer = (char*)(realloc(buffer, ++lastIndex + 1));
	buffer[lastIndex] = '\0';
	return nova_Nova_String_1_Nova_construct(0, exceptionData, buffer);
}

char* nova_primitive_number_Nova_Double_static_Nova_genBuffer(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	int l1_Nova_size = 0;
	char* l1_Nova_buffer = (char*)nova_null;
	
	l1_Nova_size = (int)(11 + 1 + 15);
	l1_Nova_buffer = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_size);
	sprintf(l1_Nova_buffer, (char*)("%.15f"), value);
	return l1_Nova_buffer;
}

int nova_primitive_number_Nova_Double_static_Nova_repetition(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, char* buffer, int start)
{
	int l1_Nova_index = 0;
	char l1_Nova_c = 0;
	
	l1_Nova_index = start;
	l1_Nova_c = buffer[l1_Nova_index];
	while (buffer[--l1_Nova_index] == l1_Nova_c);
	return start - l1_Nova_index - 1;
}

int nova_primitive_number_Nova_Double_static_Nova_lastSignificantDigit(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, char* buffer, int start)
{
	while (buffer[start--] == '0');
	return start + 1;
}

char* nova_primitive_number_Nova_Double_static_Nova_toCharArray(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
}

nova_Nova_String* nova_primitive_number_Nova_Double_static_Nova_toString(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	char* l1_Nova_buffer = (char*)nova_null;
	int l1_Nova_size = 0;
	int l1_Nova_lastIndex = 0;
	char l1_Nova_c = 0;
	
	l1_Nova_buffer = nova_primitive_number_Nova_Double_static_Nova_genBuffer(0, exceptionData, value);
	l1_Nova_size = (int)(strlen(l1_Nova_buffer));
	l1_Nova_lastIndex = l1_Nova_size - 1;
	l1_Nova_c = l1_Nova_buffer[--l1_Nova_lastIndex];
	if (l1_Nova_c == '0' || l1_Nova_c == '9')
	{
		while (l1_Nova_buffer[l1_Nova_lastIndex--] == l1_Nova_c);
		if (l1_Nova_buffer[++l1_Nova_lastIndex] == '.')
		{
			l1_Nova_lastIndex++;
			return nova_primitive_number_Nova_Double_static_Nova_genString(0, exceptionData, l1_Nova_buffer, l1_Nova_lastIndex);
		}
		else
		{
			if (l1_Nova_lastIndex >= l1_Nova_size - 3 - 4)
			{
				l1_Nova_lastIndex = l1_Nova_size - 1;
			}
			else if (l1_Nova_c == '9')
			{
				l1_Nova_buffer[l1_Nova_lastIndex]++;
				return nova_primitive_number_Nova_Double_static_Nova_genString(0, exceptionData, l1_Nova_buffer, l1_Nova_lastIndex);
			}
		}
	}
	else
	{
		int l8_Nova_rep = 0;
		
		l8_Nova_rep = nova_primitive_number_Nova_Double_static_Nova_repetition(0, exceptionData, l1_Nova_buffer, l1_Nova_lastIndex);
		if (l8_Nova_rep > 5)
		{
			l1_Nova_buffer[l1_Nova_lastIndex] = l1_Nova_c;
			if (l1_Nova_c >= '5')
			{
				l1_Nova_c++;
			}
			l1_Nova_buffer[++l1_Nova_lastIndex] = l1_Nova_c;
			return nova_primitive_number_Nova_Double_static_Nova_genString(0, exceptionData, l1_Nova_buffer, l1_Nova_lastIndex);
		}
	}
	l1_Nova_lastIndex = nova_primitive_number_Nova_Double_static_Nova_lastSignificantDigit(0, exceptionData, l1_Nova_buffer, l1_Nova_size - 1);
	return nova_primitive_number_Nova_Double_static_Nova_genString(0, exceptionData, l1_Nova_buffer, l1_Nova_lastIndex);
}

double nova_primitive_number_Nova_Double_static_Nova_parseDouble(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str)
{
	char* l1_Nova_pEnd = (char*)nova_null;
	
	return strtod((char*)(str->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), &l1_Nova_pEnd);
}

double nova_primitive_number_Nova_Double_Nova_compareTo(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double other)
{
	return this->nova_primitive_number_Nova_Double_Nova_value - other;
}

double nova_primitive_number_Nova_Double_Nova_multiply(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData, double value)
{
	return this->nova_primitive_number_Nova_Double_Nova_value * value;
}

nova_Nova_String* nova_primitive_number_Nova_Double_Nova_toString(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, this->nova_primitive_number_Nova_Double_Nova_value);
}

void nova_primitive_number_Nova_Double_Nova_super(nova_primitive_number_Nova_Double* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_primitive_number_Nova_Double_Nova_value = 0;
}


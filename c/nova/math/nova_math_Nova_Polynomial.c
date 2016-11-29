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
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_math_Polynomial_Extension_VTable nova_math_Polynomial_Extension_VTable_val =
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



char nova_math_Nova_Polynomial_static_Nova_isLetter(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_math_Nova_Polynomial_static_Nova_isSymbol(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_math_Nova_Polynomial_static_Nova_isWhitespace(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
nova_datastruct_list_Nova_CharArray* generated6(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated7(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* nova_math_Nova_Polynomial_Nova_SYMBOLS_CHARS;
nova_datastruct_list_Nova_CharArray* nova_math_Nova_Polynomial_Nova_WHITESPACE_CHARS;
void nova_math_Nova_Polynomial_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_Nova_Polynomial_Nova_SYMBOLS_CHARS = generated6(0, exceptionData);
		nova_math_Nova_Polynomial_Nova_WHITESPACE_CHARS = generated7(0, exceptionData);
	}
}

nova_math_Nova_Polynomial* nova_math_Nova_Polynomial_Nova_construct(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* polynomial)
{
	CCLASS_NEW(nova_math_Nova_Polynomial, this,);
	this->vtable = &nova_math_Polynomial_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Polynomial_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Polynomial_Nova_this(this, exceptionData, polynomial);
	}
	
	return this;
}

void nova_math_Nova_Polynomial_Nova_destroy(nova_math_Nova_Polynomial** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_DoubleArray_Nova_destroy(&(*this)->nova_math_Nova_Polynomial_Nova_coefficients, exceptionData);
	nova_datastruct_list_Nova_DoubleArray_Nova_destroy(&(*this)->nova_math_Nova_Polynomial_Nova_degrees, exceptionData);
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_math_Nova_Polynomial_Nova_signs, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_Polynomial_Nova_this(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* polynomial)
{
	int l1_Nova_start = 0;
	char l1_Nova_reading = 0;
	int l2_Nova_i = 0;
	
	l1_Nova_start = (int)(0);
	l1_Nova_reading = 0;
	this->nova_math_Nova_Polynomial_Nova_coefficients = nova_datastruct_list_Nova_DoubleArray_0_Nova_construct(0, exceptionData);
	this->nova_math_Nova_Polynomial_Nova_degrees = nova_datastruct_list_Nova_DoubleArray_0_Nova_construct(0, exceptionData);
	this->nova_math_Nova_Polynomial_Nova_signs = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)polynomial->nova_Nova_String_Nova_count; l2_Nova_i++)
	{
		if (!nova_math_Nova_Polynomial_static_Nova_isLetter(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(polynomial->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i))))
		{
			l1_Nova_reading = 0;
		}
		else if (!l1_Nova_reading)
		{
			l1_Nova_start = l2_Nova_i;
			l1_Nova_reading = 1;
		}
		else
		{
		}
	}
}

char nova_math_Nova_Polynomial_static_Nova_isLetter(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return !nova_math_Nova_Polynomial_static_Nova_isSymbol(0, exceptionData, c) && !nova_math_Nova_Polynomial_static_Nova_isWhitespace(0, exceptionData, c);
}

char nova_math_Nova_Polynomial_static_Nova_isSymbol(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_Polynomial_Nova_SYMBOLS_CHARS, exceptionData, c);
}

char nova_math_Nova_Polynomial_static_Nova_isWhitespace(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	return nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_Polynomial_Nova_WHITESPACE_CHARS, exceptionData, c);
}

nova_datastruct_list_Nova_CharArray* generated6(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 23);
	l1_Nova_temp[0] = '-';
	l1_Nova_temp[1] = '+';
	l1_Nova_temp[2] = '~';
	l1_Nova_temp[3] = '!';
	l1_Nova_temp[4] = '=';
	l1_Nova_temp[5] = '%';
	l1_Nova_temp[6] = '^';
	l1_Nova_temp[7] = '&';
	l1_Nova_temp[8] = '|';
	l1_Nova_temp[9] = '*';
	l1_Nova_temp[10] = '/';
	l1_Nova_temp[11] = '>';
	l1_Nova_temp[12] = '<';
	l1_Nova_temp[13] = ',';
	l1_Nova_temp[14] = '"';
	l1_Nova_temp[15] = '\'';
	l1_Nova_temp[16] = '[';
	l1_Nova_temp[17] = ']';
	l1_Nova_temp[18] = '{';
l1_Nova_temp[19] = '}';
l1_Nova_temp[20] = ';';
l1_Nova_temp[21] = '(';l1_Nova_temp[22] = ')';
return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 23);}

nova_datastruct_list_Nova_CharArray* generated7(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\n';
	l1_Nova_temp[2] = '\r';
	l1_Nova_temp[3] = '\t';
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
}

void nova_math_Nova_Polynomial_Nova_super(nova_math_Nova_Polynomial* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_math_Nova_Polynomial_Nova_coefficients = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
	this->nova_math_Nova_Polynomial_Nova_degrees = (nova_datastruct_list_Nova_DoubleArray*)nova_null;
	this->nova_math_Nova_Polynomial_Nova_signs = (nova_datastruct_list_Nova_Array*)nova_null;
}


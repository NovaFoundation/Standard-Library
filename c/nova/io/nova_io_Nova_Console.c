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
#include <stdio.h>
#include <stdlib.h>
#include <nova/io/NativeConsole.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_io_Console_Extension_VTable nova_io_Console_Extension_VTable_val =
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



void nova_io_Nova_Console_static_Nova_flushInput(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_Console_static_Nova_flushOutput(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_io_Nova_Console_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_io_Nova_Console* nova_io_Nova_Console_Nova_construct(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_io_Nova_Console, this,);
	this->vtable = &nova_io_Console_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_Console_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_Console_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_io_Nova_Console_Nova_destroy(nova_io_Nova_Console** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_io_Nova_Console_static_Nova_log(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* obj)
{
	obj = (nova_Nova_Object*)(obj == 0 ? (nova_Nova_Object*)nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")) : (nova_Nova_Object*)obj);
	nova_io_Nova_Console_2_static_Nova_writeLine(0, exceptionData, obj);
}

void nova_io_Nova_Console_0_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

void nova_io_Nova_Console_1_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* text)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(text), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n"))));
}

void nova_io_Nova_Console_2_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* obj)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(obj), exceptionData));
}

void nova_io_Nova_Console_3_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, double num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_4_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, float num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_5_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, long_long num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_6_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_7_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, short num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_8_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, char num)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_9_static_Nova_writeLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, c));
}

void nova_io_Nova_Console_0_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* text)
{
	nova_datastruct_list_Nova_CharArray* l1_Nova_cText = (nova_datastruct_list_Nova_CharArray*)nova_null;
	
	l1_Nova_cText = (nova_datastruct_list_Nova_CharArray*)(text->nova_Nova_String_Nova_chars);
	fwrite((char*)(l1_Nova_cText->nova_datastruct_list_Nova_Array_Nova_data), 1, text->nova_Nova_String_Nova_count, stdout);
	nova_io_Nova_Console_static_Nova_flushOutput(0, exceptionData);
}

void nova_io_Nova_Console_1_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* obj)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(obj), exceptionData));
}

void nova_io_Nova_Console_2_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, double num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_3_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, float num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Double_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_4_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, long_long num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_5_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, int num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_6_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, short num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_7_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, char num)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Byte_static_Nova_toString(0, exceptionData, num));
}

void nova_io_Nova_Console_8_static_Nova_write(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, c));
}

int nova_io_Nova_Console_static_Nova_readInt(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	l1_Nova_s = nova_io_Nova_Console_static_Nova_readLine(0, exceptionData);
	return nova_primitive_number_Nova_Int_static_Nova_parseInt(0, exceptionData, l1_Nova_s);
}

double nova_io_Nova_Console_static_Nova_readDouble(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	l1_Nova_s = nova_io_Nova_Console_static_Nova_readLine(0, exceptionData);
	return nova_primitive_number_Nova_Double_static_Nova_parseDouble(0, exceptionData, l1_Nova_s);
}

char nova_io_Nova_Console_static_Nova_readChar(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char l1_Nova_c = 0;
	
	l1_Nova_c = (char)(getchar());
	nova_io_Nova_Console_static_Nova_flushInput(0, exceptionData);
	return l1_Nova_c;
}

void nova_io_Nova_Console_static_Nova_flushInput(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	fseek(stdin, 0, SEEK_END);
}

void nova_io_Nova_Console_static_Nova_flushOutput(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	fflush(stdout);
}

nova_Nova_String* nova_io_Nova_Console_static_Nova_readLine(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_line = (char*)nova_null;
	nova_Nova_String* l1_Nova_s = (nova_Nova_String*)nova_null;
	
	l1_Nova_line = (char*)(ufgets(stdin));
	l1_Nova_s = nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_line);
	return l1_Nova_s;
}

nova_Nova_String* nova_io_Nova_Console_static_Nova_readPassword(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_Nova_String* l1_Nova_pass = (nova_Nova_String*)nova_null;
	
	nova_io_Nova_Console_static_Nova_setEcho(0, exceptionData, 0);
	l1_Nova_pass = nova_io_Nova_Console_static_Nova_readLine(0, exceptionData);
	nova_io_Nova_Console_static_Nova_setEcho(0, exceptionData, 1);
	nova_io_Nova_Console_0_static_Nova_write(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\n")));
	return l1_Nova_pass;
}

void nova_io_Nova_Console_static_Nova_setEcho(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData, char echo)
{
	nova_setEcho(echo);
}

void nova_io_Nova_Console_static_Nova_clearScreen(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_clearScreen();
}

void nova_io_Nova_Console_static_Nova_waitForEnter(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_c = (char*)nova_null;
	
	nova_io_Nova_Console_static_Nova_flushInput(0, exceptionData);
	l1_Nova_c = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 2);
	fgets(l1_Nova_c, 2, stdin);
}

void nova_io_Nova_Console_Nova_this(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_io_Nova_Console_Nova_super(nova_io_Nova_Console* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


#include <precompiled.h>
#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
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
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/nova_datastruct_Nova_HashSet.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_StringCharArray.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_String_Extension_VTable nova_String_Extension_VTable_val =
{
	{
		(int(*)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_String_Nova_compareTo,
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_String_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_String_Nova_toString,
	nova_Nova_String_Nova_equals,
	nova_Nova_String_Accessor_Nova_hashCodeLong,
	nova_Nova_String_Nova_concat,
	nova_Nova_String_Nova_compareTo,
};



int nova_Nova_String_Nova_calculateSize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* nova_Nova_String_Nova_chars);
nova_datastruct_list_Nova_CharArray* generated1(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData);

nova_datastruct_list_Nova_CharArray* nova_Nova_String_Nova_whitespace;
nova_datastruct_Nova_HashSet* nova_Nova_String_Nova_pool;
void nova_Nova_String_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_Nova_String_Nova_whitespace = generated1(0, exceptionData);
		nova_Nova_String_Nova_pool = nova_datastruct_Nova_HashSet_1_Nova_construct(0, exceptionData, 121, 1);
	}
}

nova_Nova_String* nova_Nova_String_0_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char nova_Nova_String_Nova_c)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		
		nova_Nova_String_0_Nova_this(this, exceptionData, nova_Nova_String_Nova_c);
	}
	
	return this;
}

nova_Nova_String* nova_Nova_String_1_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* nova_Nova_String_Nova_chars)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_1_Nova_this(this, exceptionData, nova_Nova_String_Nova_chars);
	}
	
	return this;
}

nova_Nova_String* nova_Nova_String_2_Nova_construct(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* nova_Nova_String_Nova_chars)
{
	CCLASS_NEW(nova_Nova_String, this,);
	this->vtable = &nova_String_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_Nova_String_Nova_super(this, exceptionData);
	
	{
		nova_Nova_String_2_Nova_this(this, exceptionData, nova_Nova_String_Nova_chars);
	}
	
	return this;
}

void nova_Nova_String_Nova_destroy(nova_Nova_String** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_datastruct_list_Nova_StringCharArray_Nova_destroy(&(*this)->nova_Nova_String_Nova_chars, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_Nova_String_0_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char nova_Nova_String_Nova_c)
{
	char* l2_Nova_chars = (char*)nova_null;
	
	
	l2_Nova_chars = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 2);
	l2_Nova_chars[0] = nova_Nova_String_Nova_c;
	l2_Nova_chars[1] = '\0';
	nova_Nova_String_1_Nova_this(this, exceptionData, l2_Nova_chars);
}

void nova_Nova_String_1_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* nova_Nova_String_Nova_chars)
{
	this->nova_Nova_String_Nova_count = nova_Nova_String_Nova_calculateSize(this, exceptionData, nova_Nova_String_Nova_chars);
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_1_Nova_construct(0, exceptionData, nova_Nova_String_Nova_chars, this->nova_Nova_String_Nova_count);
	if (nova_Nova_String_Nova_chars[this->nova_Nova_String_Nova_count] != '\0')
	{
		nova_Nova_String_Nova_chars[this->nova_Nova_String_Nova_count] = '\0';
	}
}

void nova_Nova_String_2_Nova_this(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* nova_Nova_String_Nova_chars)
{
	this->nova_Nova_String_Nova_count = nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_count;
	this->nova_Nova_String_Nova_chars = nova_datastruct_list_Nova_StringCharArray_0_Nova_construct(0, exceptionData, nova_Nova_String_Nova_chars);
}

int nova_Nova_String_Nova_calculateSize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, char* nova_Nova_String_Nova_chars)
{
	return (int)strlen(nova_Nova_String_Nova_chars);
}

nova_Nova_String* nova_Nova_String_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_str)
{
	int l1_Nova_sz = 0;
	char* l1_Nova_newData = (char*)nova_null;
	
	l1_Nova_sz = nova_Nova_String_Nova_str->nova_Nova_String_Nova_count + this->nova_Nova_String_Nova_count + 1;
	
	l1_Nova_newData = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * l1_Nova_sz);
	strcpy(l1_Nova_newData, (char*)(this->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	strcat(l1_Nova_newData, (char*)(nova_Nova_String_Nova_str->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data));
	l1_Nova_newData[l1_Nova_sz - 1] = '\0';
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_newData);
}

char nova_Nova_String_Nova_equals(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_other)
{
	return nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo((nova_datastruct_Nova_Comparable*)(this), exceptionData, (nova_Nova_Object*)(nova_Nova_String_Nova_other)) == 0;
}

nova_Nova_String* nova_Nova_String_Nova_replace(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search, nova_Nova_String* nova_Nova_String_Nova_replace)
{
	nova_Nova_String* l1_Nova_output = (nova_Nova_String*)nova_null;
	int l1_Nova_index = 0;
	
	l1_Nova_output = this;
	l1_Nova_index = (int)(0);
	while ((l1_Nova_index = nova_Nova_String_Nova_indexOf(l1_Nova_output, exceptionData, nova_Nova_String_Nova_search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null)) >= 0)
	{
		l1_Nova_output = (nova_Nova_String*)(nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_substring(l1_Nova_output, exceptionData, 0, l1_Nova_index)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_replace), exceptionData, nova_Nova_String_Nova_substring(l1_Nova_output, exceptionData, l1_Nova_index + nova_Nova_String_Nova_search->nova_Nova_String_Nova_count, (intptr_t)nova_null))));
	}
	return l1_Nova_output;
}

char nova_Nova_String_Nova_startsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search)
{
	return nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == 0;
}

char nova_Nova_String_Nova_endsWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search)
{
	return (char)this->nova_Nova_String_Nova_count > 0 && nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) == this->nova_Nova_String_Nova_count - nova_Nova_String_Nova_search->nova_Nova_String_Nova_count - 1;
}

char nova_Nova_String_Nova_contains(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search)
{
	return (char)nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_search, (intptr_t)nova_null, (intptr_t)nova_null, (intptr_t)nova_null) >= 0;
}

int nova_Nova_String_Nova_indexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search, int nova_Nova_String_Nova_start, int nova_Nova_String_Nova_direction, int nova_Nova_String_Nova_defaultReturnValue)
{
	int l1_Nova_i = 0;
	
	nova_Nova_String_Nova_start = (int)(nova_Nova_String_Nova_start == (intptr_t)nova_null ? 0 : nova_Nova_String_Nova_start);
	nova_Nova_String_Nova_direction = (int)(nova_Nova_String_Nova_direction == (intptr_t)nova_null ? 1 : nova_Nova_String_Nova_direction);
	nova_Nova_String_Nova_defaultReturnValue = (int)(nova_Nova_String_Nova_defaultReturnValue == (intptr_t)nova_null ? -1 : nova_Nova_String_Nova_defaultReturnValue);
	l1_Nova_i = nova_Nova_String_Nova_start;
	while (l1_Nova_i < this->nova_Nova_String_Nova_count && l1_Nova_i >= 0)
	{
		char l1_Nova_found = 0;
		int l1_Nova_j = 0;
		
		l1_Nova_found = 1;
		l1_Nova_j = (int)(0);
		while (l1_Nova_j < nova_Nova_String_Nova_search->nova_Nova_String_Nova_count && l1_Nova_i + l1_Nova_j < this->nova_Nova_String_Nova_count && l1_Nova_found)
		{
			if ((char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_Nova_String_Nova_search->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_j) != (char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_i + l1_Nova_j))
			{
				l1_Nova_found = 0;
			}
			l1_Nova_j++;
		}
		if (l1_Nova_found)
		{
			return l1_Nova_i;
		}
		l1_Nova_i += nova_Nova_String_Nova_direction;
	}
	return nova_Nova_String_Nova_defaultReturnValue;
}

int nova_Nova_String_Nova_lastIndexOf(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_search)
{
	return nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_search, this->nova_Nova_String_Nova_count - 1, -1, (intptr_t)nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_substring(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_Nova_String_Nova_start, int nova_Nova_String_Nova_end)
{
	char* l1_Nova_buf = (char*)nova_null;
	char* l1_Nova_arr = (char*)nova_null;
	
	nova_Nova_String_Nova_end = (int)(nova_Nova_String_Nova_end == (intptr_t)nova_null ? this->nova_Nova_String_Nova_count : nova_Nova_String_Nova_end);
	if (nova_Nova_String_Nova_end - nova_Nova_String_Nova_start <= 0)
	{
		if (nova_Nova_String_Nova_end - nova_Nova_String_Nova_start < 0)
		{
			THROW(1, nova_exception_Nova_Exception_1_Nova_construct(0, exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Substring bounds of [")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, nova_Nova_String_Nova_start)), exceptionData, nova_Nova_String_Nova_concat(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", ")), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, nova_Nova_String_Nova_end)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("] are invalid"))))))));
		}
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	}
	
	l1_Nova_buf = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * nova_Nova_String_Nova_end - nova_Nova_String_Nova_start + 1);
	
	l1_Nova_arr = (char*)(this->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	memcpy(l1_Nova_buf, &l1_Nova_arr[nova_Nova_String_Nova_start], nova_Nova_String_Nova_end - nova_Nova_String_Nova_start);
	l1_Nova_buf[nova_Nova_String_Nova_end - nova_Nova_String_Nova_start] = '\0';
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_buf);
}

char nova_Nova_String_Nova_lastChar(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_charAt(this, exceptionData, this->nova_Nova_String_Nova_count - 1);
}

char nova_Nova_String_Nova_charAt(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_Nova_String_Nova_index)
{
	return (char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, nova_Nova_String_Nova_index);
}

nova_Nova_String* nova_Nova_String_Nova_trim(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	int l1_Nova_start = 0;
	int l1_Nova_end = 0;
	
	l1_Nova_start = (int)(0);
	l1_Nova_end = this->nova_Nova_String_Nova_count - 1;
	while (l1_Nova_start < this->nova_Nova_String_Nova_count && nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_whitespace), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_start))))
	{
		l1_Nova_start++;
	}
	while (l1_Nova_end >= 0 && nova_datastruct_list_Nova_List_virtual0_Nova_contains((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_whitespace), exceptionData, (nova_Nova_Object*)(intptr_t)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_end))))
	{
		l1_Nova_end--;
	}
	if (l1_Nova_end == 0)
	{
		return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
	}
	if (l1_Nova_start == 0 && l1_Nova_end == this->nova_Nova_String_Nova_count - 1)
	{
		return this;
	}
	return nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_start, l1_Nova_end + 1);
}

nova_Nova_String* nova_Nova_String_Nova_toLowerCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_transform(this, exceptionData, (nova_Nova_String_closure3_Nova_transform)&nova_primitive_number_Nova_Char_static_Nova_toLowerCase, 0, nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_toUpperCase(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_Nova_transform(this, exceptionData, (nova_Nova_String_closure3_Nova_transform)&nova_primitive_number_Nova_Char_static_Nova_toUpperCase, 0, nova_null);
}

nova_Nova_String* nova_Nova_String_Nova_capitalize(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (this->nova_Nova_String_Nova_count == 0)
	{
		return this;
	}
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Char_static_Nova_toString(0, exceptionData, nova_primitive_number_Nova_Char_static_Nova_toUpperCase(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, 0))))), exceptionData, nova_Nova_String_Nova_substring(this, exceptionData, 1, (intptr_t)nova_null));
}

nova_Nova_String* nova_Nova_String_Nova_transform(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String_closure3_Nova_transform nova_Nova_String_Nova_transform, void* nova_Nova_String_ref_Nova_transform, void* transform_context)
{
	char* l1_Nova_newData = (char*)nova_null;
	int l2_Nova_i = 0;
	
	
	l1_Nova_newData = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * this->nova_Nova_String_Nova_count);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)this->nova_Nova_String_Nova_count; l2_Nova_i++)
	{
		l1_Nova_newData[l2_Nova_i] = nova_Nova_String_Nova_transform(nova_Nova_String_ref_Nova_transform, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i)), l2_Nova_i, transform_context);
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_newData);
}

nova_Nova_String* nova_Nova_String_Nova_getStringBetween(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_before, nova_Nova_String* nova_Nova_String_Nova_after, int nova_Nova_String_Nova_start)
{
	int l1_Nova_s = 0;
	int l1_Nova_e = 0;
	
	nova_Nova_String_Nova_start = (int)(nova_Nova_String_Nova_start == (intptr_t)nova_null ? 0 : nova_Nova_String_Nova_start);
	l1_Nova_s = nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_before, nova_Nova_String_Nova_start, (intptr_t)nova_null, (intptr_t)nova_null);
	l1_Nova_e = nova_Nova_String_Nova_indexOf(this, exceptionData, nova_Nova_String_Nova_after, l1_Nova_s + 1, (intptr_t)nova_null, (intptr_t)nova_null);
	if (l1_Nova_s >= 0 && l1_Nova_e > 0)
	{
		return nova_Nova_String_Nova_substring(this, exceptionData, l1_Nova_s + nova_Nova_String_Nova_before->nova_Nova_String_Nova_count, l1_Nova_e);
	}
	return nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""));
}

nova_Nova_String* nova_Nova_String_Nova_surroundWith(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_str, char nova_Nova_String_Nova_symmetrical)
{
	nova_Nova_String_Nova_symmetrical = (char)(nova_Nova_String_Nova_symmetrical == (intptr_t)nova_null ? 0 : nova_Nova_String_Nova_symmetrical);
	if (nova_Nova_String_Nova_symmetrical)
	{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_str), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this), exceptionData, nova_Nova_String_2_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_CharArray*)(intptr_t)(nova_datastruct_list_Nova_List_virtual_Nova_reverse((nova_datastruct_list_Nova_List*)(nova_Nova_String_Nova_str->nova_Nova_String_Nova_chars), exceptionData)))));
	}
	else
	{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_Nova_str), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this), exceptionData, nova_Nova_String_Nova_str));
	}
}

int nova_Nova_String_Nova_compareTo(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_other)
{
	long_long l1_Nova_min = 0;
	int l2_Nova_i = 0;
	
	l1_Nova_min = nova_math_Nova_Math_static_Nova_min(0, exceptionData, this->nova_Nova_String_Nova_count, (long_long)(nova_Nova_String_Nova_other->nova_Nova_String_Nova_count));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)l1_Nova_min; l2_Nova_i++)
	{
		if ((char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i) - (char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_Nova_String_Nova_other->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i) != 0)
		{
			return (int)(char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(this->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i) - (char)(intptr_t)nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(nova_Nova_String_Nova_other->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i);
		}
	}
	return this->nova_Nova_String_Nova_count - nova_Nova_String_Nova_other->nova_Nova_String_Nova_count;
}

nova_Nova_String* nova_Nova_String_Nova_toString(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this;
}

nova_datastruct_list_Nova_CharArray* generated1(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	char* l1_Nova_temp = (char*)nova_null;
	
	l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
	l1_Nova_temp[0] = ' ';
	l1_Nova_temp[1] = '\t';
	l1_Nova_temp[2] = '\n';
	l1_Nova_temp[3] = '\r';
	return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
}

long_long nova_Nova_String_Accessor_Nova_hashCodeLong(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong((nova_Nova_Object*)(this->nova_Nova_String_Nova_chars), exceptionData);
}


void nova_Nova_String_Nova_super(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_Nova_String_Nova_count = 0;
	this->nova_Nova_String_Nova_chars = (nova_datastruct_list_Nova_StringCharArray*)nova_null;
}

nova_Nova_String* nova_Nova_String_virtual_Nova_concat(nova_Nova_String* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_Nova_String_Nova_str)
{
	return this->vtable->nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this), exceptionData, nova_Nova_String_Nova_str);
}


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
#include <nova/regex/nova_regex_Nova_Match.h>
#include <pcre/pcre2.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_regex_Regex_Extension_VTable nova_regex_Regex_Extension_VTable_val =
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


void nova_regex_Nova_Regex_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_regex_Nova_Regex* nova_regex_Nova_Regex_Nova_construct(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_regex_Nova_Regex, this,);
	this->vtable = &nova_regex_Regex_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_regex_Nova_Regex_Nova_super(this, exceptionData);
	
	{
		nova_regex_Nova_Regex_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_regex_Nova_Regex_Nova_destroy(nova_regex_Nova_Regex** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_Nova_Class_Nova_destroy(&(*this)->nova_regex_Nova_Regex_Nova_class, exceptionData);
	
	NOVA_FREE(*this);
}

char nova_regex_Nova_Regex_0_static_Nova_containsMatch(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* search)
{
	return nova_regex_Nova_Regex_1_static_Nova_containsMatch(0, exceptionData, pattern->nova_regex_Nova_Pattern_Nova_pattern, search);
}

char nova_regex_Nova_Regex_1_static_Nova_containsMatch(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* regex, nova_Nova_String* search)
{
	return nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(nova_regex_Nova_Regex_static_Nova_getMatches(0, exceptionData, regex, search)), exceptionData) > 0;
}

nova_datastruct_list_Nova_Array* nova_regex_Nova_Regex_0_static_Nova_getMatches(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_regex_Nova_Pattern* pattern, nova_Nova_String* search)
{
	return nova_regex_Nova_Regex_static_Nova_getMatches(0, exceptionData, pattern->nova_regex_Nova_Pattern_Nova_pattern, search);
}

nova_datastruct_list_Nova_Array* nova_regex_Nova_Regex_static_Nova_getMatches(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* regex, nova_Nova_String* search)
{
	int* l1_Nova_values = (int*)nova_null;
	int l1_Nova_matchCount = 0;
	nova_datastruct_list_Nova_Array* l1_Nova_matches = (nova_datastruct_list_Nova_Array*)nova_null;
	int l5_Nova_m = 0;
	
	int crlf_is_newline;
	int errornumber;
	int rc;
	int currentSize = 0;
	int i;
	int utf8;
	uint32_t newline;
	uint32_t option_bits;
	PCRE2_SIZE erroroffset;
	pcre2_match_data *match_data;
	PCRE2_SIZE *ovector = 0;
	PCRE2_SIZE *matchBoundaries = 0;
	pcre2_code *re;
	char* strData = (char*)search->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data;
	re = pcre2_compile(
		(PCRE2_SPTR)regex->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data,
		PCRE2_ZERO_TERMINATED,
		0,
		&errornumber,
		&erroroffset,
	NULL);
	if (re == NULL) {
		THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Failed to compile regex '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((regex)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))))), 0);
		
		return (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array*)nova_null;
	}
	match_data = pcre2_match_data_create_from_pattern(re, NULL);
	(void)pcre2_pattern_info(re, PCRE2_INFO_ALLOPTIONS, &option_bits);
	utf8 = (option_bits & PCRE2_UTF) != 0;
	(void)pcre2_pattern_info(re, PCRE2_INFO_NEWLINE, &newline);
	crlf_is_newline = newline == PCRE2_NEWLINE_ANY ||
	newline == PCRE2_NEWLINE_CRLF ||
	newline == PCRE2_NEWLINE_ANYCRLF;
	for (;;) {
		uint32_t options = 0;
		PCRE2_SIZE start_offset = 0;
		if (ovector != 0) {
			start_offset = ovector[1];
			if (ovector[0] == ovector[1]) {
				if (ovector[0] == search->nova_Nova_String_Nova_count) break;
				options = PCRE2_NOTEMPTY_ATSTART | PCRE2_ANCHORED;
			}
		}
		rc = pcre2_match(
			re,
			(PCRE2_SPTR)strData,
			search->nova_Nova_String_Nova_count,
			start_offset,
			options,
			match_data,
		NULL);
		if (rc == PCRE2_ERROR_NOMATCH) {
			if (options == 0) break;
			ovector[1] = start_offset + 1;
			if (crlf_is_newline &&
				start_offset < search->nova_Nova_String_Nova_count - 1 &&
				strData[start_offset] == '\r' &&
			strData[start_offset + 1] == '\n')
			ovector[1] += 1;
			else if (utf8) {
				while (ovector[1] < search->nova_Nova_String_Nova_count) {
					if ((strData[ovector[1]] & 0xc0) != 0x80) break;
					ovector[1] += 1;
				}
			}
			continue;
		}
		if (rc < 0) {
			THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Matching error for regex '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((regex)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))))), 0);
			
		}
		ovector = ovector == 0 ? pcre2_get_ovector_pointer(match_data) : ovector;
		if (matchBoundaries == 0) {
			matchBoundaries = NOVA_MALLOC(sizeof(PCRE2_SIZE) * rc * 2);
		} else {
			PCRE2_SIZE *temp = NOVA_MALLOC(sizeof(PCRE2_SIZE) * (currentSize + rc) * 2);
			arrayCopy(temp, 0, matchBoundaries, 0, currentSize * 2, (currentSize + rc) * 2, sizeof(PCRE2_SIZE));
			matchBoundaries = temp;
		}
		for (i = 0; i < rc; i++) {
			matchBoundaries[(currentSize + i) * 2] = ovector[i * 2];
			matchBoundaries[(currentSize + i) * 2 + 1] = ovector[i * 2 + 1];
		}
		currentSize += rc;
		if (rc == 0) {
			THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Regex returned too many results to be stored variable"))), 0);
			
		}
	}
	l1_Nova_matchCount = (int)(0);
	
	l1_Nova_matchCount = currentSize;
	l1_Nova_matches = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l1_Nova_matchCount, (intptr_t)nova_null);
	
	l1_Nova_values = matchBoundaries;
	l5_Nova_m = (int)0;
	for (; l5_Nova_m < (int)l1_Nova_matchCount; l5_Nova_m++)
	{
		nova_datastruct_list_Nova_Array_virtual_Nova_set((nova_datastruct_list_Nova_Array*)(l1_Nova_matches), exceptionData, l5_Nova_m, (nova_Nova_Object*)(nova_regex_Nova_Match_Nova_construct(0, exceptionData, search, l1_Nova_values[l5_Nova_m * 2], l1_Nova_values[l5_Nova_m * 2 + 1])));
	}
	return (nova_datastruct_list_Nova_Array*)l1_Nova_matches;
}

void nova_regex_Nova_Regex_Nova_this(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_regex_Nova_Regex_Nova_super(nova_regex_Nova_Regex* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_regex_Nova_Regex_Nova_class = (nova_Nova_Class*)nova_null;
}


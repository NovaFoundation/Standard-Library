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
#include <nova/datastruct/nova_datastruct_Nova_Bounds.h>
#include <nova/math/nova_math_Nova_InvalidNumericStatementException.h>
#include <nova/math/nova_math_Nova_NumericOperand.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_math_NumericOperation_Extension_VTable nova_math_NumericOperation_Extension_VTable_val =
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
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_Nova_equals,
		0,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_Nova_equals,
	nova_math_Nova_NumericOperation_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	nova_Nova_Object* nova_math_Nova_NumericOperand_Nova_data;
	
	nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperation_Nova_leftOperand;
	nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperation_Nova_rightOperand;
	nova_Nova_String* nova_math_Nova_NumericOperation_Nova_operator;
	
)

nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperation_Nova_decodeOperand(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operand);
int nova_math_Nova_NumericOperation_0_static_Nova_getType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s);
int nova_math_Nova_NumericOperation_1_static_Nova_getType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
nova_datastruct_Nova_Bounds* nova_math_Nova_NumericOperation_static_Nova_searchNextType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start, int* ret1);
int nova_math_Nova_NumericOperation_static_Nova_nextOperator(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start);
int nova_math_Nova_NumericOperation_static_Nova_getOperatorRank(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char operator);
int nova_math_Nova_NumericOperation_static_Nova_nextNonWhitespaceIndex(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start, int direction);
char nova_math_Nova_NumericOperation_static_Nova_isLetter(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_math_Nova_NumericOperation_static_Nova_isNumeric(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_math_Nova_NumericOperation_static_Nova_isOperator(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
char nova_math_Nova_NumericOperation_static_Nova_isWhitespace(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c);
nova_datastruct_list_Nova_CharArray* generated2(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated3(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated4(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_CharArray* generated5(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData);
int nova_math_Nova_NumericOperation_Nova_GROUPING;
int nova_math_Nova_NumericOperation_Nova_EXPONENT;
int nova_math_Nova_NumericOperation_Nova_MULTIPLICATION;
int nova_math_Nova_NumericOperation_Nova_DIVISION;
int nova_math_Nova_NumericOperation_Nova_ADDITION;
int nova_math_Nova_NumericOperation_Nova_SUBTRACTION;
int nova_math_Nova_NumericOperation_Nova_MAX;
int nova_math_Nova_NumericOperation_Nova_INVALID;
int nova_math_Nova_NumericOperation_Nova_OPERATOR;
nova_datastruct_list_Nova_CharArray* nova_math_Nova_NumericOperation_Nova_VALID_OPERATORS;
nova_datastruct_list_Nova_CharArray* nova_math_Nova_NumericOperation_Nova_INVALID_OPERATORS;
nova_datastruct_list_Nova_CharArray* nova_math_Nova_NumericOperation_Nova_WHITESPACE_CHARS;
int nova_math_Nova_NumericOperation_Nova_NUMBER;
nova_datastruct_list_Nova_CharArray* nova_math_Nova_NumericOperation_Nova_NUMERIC_CHARS;
int nova_math_Nova_NumericOperation_Nova_VARIABLE;
void nova_math_Nova_NumericOperation_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_Nova_NumericOperation_Nova_GROUPING = (int)(1);
		nova_math_Nova_NumericOperation_Nova_EXPONENT = (int)(2);
		nova_math_Nova_NumericOperation_Nova_MULTIPLICATION = (int)(3);
		nova_math_Nova_NumericOperation_Nova_DIVISION = (int)(3);
		nova_math_Nova_NumericOperation_Nova_ADDITION = (int)(4);
		nova_math_Nova_NumericOperation_Nova_SUBTRACTION = (int)(4);
		nova_math_Nova_NumericOperation_Nova_MAX = (int)(5);
		nova_math_Nova_NumericOperation_Nova_INVALID = (int)(-1);
		nova_math_Nova_NumericOperation_Nova_OPERATOR = (int)(1);
		nova_math_Nova_NumericOperation_Nova_VALID_OPERATORS = generated2(0, exceptionData);
		nova_math_Nova_NumericOperation_Nova_INVALID_OPERATORS = generated3(0, exceptionData);
		nova_math_Nova_NumericOperation_Nova_WHITESPACE_CHARS = generated4(0, exceptionData);
		nova_math_Nova_NumericOperation_Nova_NUMBER = (int)(3);
		nova_math_Nova_NumericOperation_Nova_NUMERIC_CHARS = generated5(0, exceptionData);
		nova_math_Nova_NumericOperation_Nova_VARIABLE = (int)(4);
	}
}

nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperation_0_Nova_construct(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operation)
{
	CCLASS_NEW(nova_math_Nova_NumericOperation, this);
	this->vtable = &nova_math_NumericOperation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_NumericOperand_Nova_super((nova_math_Nova_NumericOperand*)this, exceptionData);
	nova_math_Nova_NumericOperation_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperation_Nova_this(this, exceptionData, operation);
	}
	
	return this;
}

nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperation_1_Nova_construct(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* left, nova_Nova_String* operator, nova_Nova_String* right)
{
	CCLASS_NEW(nova_math_Nova_NumericOperation, this);
	this->vtable = &nova_math_NumericOperation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_NumericOperand_Nova_super((nova_math_Nova_NumericOperand*)this, exceptionData);
	nova_math_Nova_NumericOperation_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperation_0_Nova_this(this, exceptionData, left, operator, right);
	}
	
	return this;
}

nova_math_Nova_NumericOperation* nova_math_Nova_NumericOperation_2_Nova_construct(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperand* left, nova_Nova_String* operator, nova_math_Nova_NumericOperand* right)
{
	CCLASS_NEW(nova_math_Nova_NumericOperation, this);
	this->vtable = &nova_math_NumericOperation_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_NumericOperand_Nova_super((nova_math_Nova_NumericOperand*)this, exceptionData);
	nova_math_Nova_NumericOperation_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_NumericOperation_1_Nova_this(this, exceptionData, left, operator, right);
	}
	
	return this;
}

void nova_math_Nova_NumericOperation_Nova_destroy(nova_math_Nova_NumericOperation** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_math_Nova_NumericOperand_Nova_destroy(&(*this)->prv->nova_math_Nova_NumericOperation_Nova_leftOperand, exceptionData);
	nova_math_Nova_NumericOperand_Nova_destroy(&(*this)->prv->nova_math_Nova_NumericOperation_Nova_rightOperand, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->prv->nova_math_Nova_NumericOperation_Nova_operator, exceptionData);
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void nova_math_Nova_NumericOperation_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operation)
{
	nova_datastruct_Nova_Bounds* l2_Nova_bounds1 = (nova_datastruct_Nova_Bounds*)nova_null;
	int l2_Nova_index1 = 0;
	nova_datastruct_Nova_Bounds* l2_Nova_bounds2 = (nova_datastruct_Nova_Bounds*)nova_null;
	int l2_Nova_index2 = 0;
	nova_datastruct_Nova_Bounds* l2_Nova_bounds3 = (nova_datastruct_Nova_Bounds*)nova_null;
	nova_Nova_String* l2_Nova_lh = (nova_Nova_String*)nova_null;
	nova_Nova_String* l2_Nova_op = (nova_Nova_String*)nova_null;
	nova_Nova_String* l2_Nova_rh = (nova_Nova_String*)nova_null;
	int l2_Nova_type1 = 0;
	int l2_Nova_type2 = 0;
	
	l2_Nova_bounds1 = nova_math_Nova_NumericOperation_static_Nova_searchNextType(0, exceptionData, operation, 0, &l2_Nova_index1);
	l2_Nova_bounds2 = nova_math_Nova_NumericOperation_static_Nova_searchNextType(0, exceptionData, operation, l2_Nova_bounds1->nova_datastruct_Nova_Bounds_Nova_end, &l2_Nova_index2);
	l2_Nova_bounds3 = (nova_datastruct_Nova_Bounds*)((nova_Nova_Object*)nova_null);
	nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_bounds1), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)(l2_Nova_bounds2), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(" and "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_index1)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(", "))), exceptionData, nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, l2_Nova_index2))))))));
	l2_Nova_lh = nova_datastruct_Nova_Bounds_Nova_extractString(l2_Nova_bounds1, exceptionData, operation);
	l2_Nova_op = nova_datastruct_Nova_Bounds_Nova_extractString(l2_Nova_bounds2, exceptionData, operation);
	l2_Nova_rh = (nova_Nova_String*)((nova_Nova_Object*)nova_null);
	l2_Nova_type1 = nova_math_Nova_NumericOperation_0_static_Nova_getType(0, exceptionData, l2_Nova_lh);
	l2_Nova_type2 = nova_math_Nova_NumericOperation_0_static_Nova_getType(0, exceptionData, l2_Nova_op);
	if (l2_Nova_type2 != nova_math_Nova_NumericOperation_Nova_OPERATOR)
	{
		if (l2_Nova_type1 == nova_math_Nova_NumericOperation_Nova_OPERATOR)
		{
			THROW(8, nova_math_Nova_InvalidNumericStatementException_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Missing left hand operand in operation '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((operation)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("'"))))));
		}
		l2_Nova_rh = l2_Nova_op;
		l2_Nova_op = nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("*"));
		l2_Nova_bounds3 = nova_datastruct_Nova_Bounds_Nova_clone(l2_Nova_bounds2, exceptionData);
		l2_Nova_bounds2->nova_datastruct_Nova_Bounds_Nova_end = l2_Nova_bounds2->nova_datastruct_Nova_Bounds_Nova_start;
	}
	else
	{
		l2_Nova_bounds3 = nova_math_Nova_NumericOperation_static_Nova_searchNextType(0, exceptionData, operation, l2_Nova_bounds2->nova_datastruct_Nova_Bounds_Nova_end, (int*)(&nova_garbageData));
		l2_Nova_rh = nova_datastruct_Nova_Bounds_Nova_extractString(l2_Nova_bounds3, exceptionData, operation);
	}
	if (l2_Nova_bounds3->nova_datastruct_Nova_Bounds_Nova_end != operation->nova_Nova_String_Nova_count)
	{
	}
}

void nova_math_Nova_NumericOperation_0_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* left, nova_Nova_String* operator, nova_Nova_String* right)
{
	nova_math_Nova_NumericOperand* l2_Nova_leftOperator = (nova_math_Nova_NumericOperand*)nova_null;
	nova_math_Nova_NumericOperand* l2_Nova_rightOperator = (nova_math_Nova_NumericOperand*)nova_null;
	
	l2_Nova_leftOperator = nova_math_Nova_NumericOperation_Nova_decodeOperand(this, exceptionData, left);
	l2_Nova_rightOperator = nova_math_Nova_NumericOperation_Nova_decodeOperand(this, exceptionData, right);
	if (left == (nova_Nova_String*)nova_null)
	{
		THROW(1, nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Left operand '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((left)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' is invalid"))))));
	}
	else if (right == (nova_Nova_String*)nova_null)
	{
		THROW(1, nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Right operand '"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((right)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("' is invalid"))))));
	}
	nova_math_Nova_NumericOperation_1_Nova_this(this, exceptionData, this->prv->nova_math_Nova_NumericOperation_Nova_leftOperand, operator, this->prv->nova_math_Nova_NumericOperation_Nova_rightOperand);
}

void nova_math_Nova_NumericOperation_1_Nova_this(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_math_Nova_NumericOperand* left, nova_Nova_String* operator, nova_math_Nova_NumericOperand* right)
{
	this->prv->nova_math_Nova_NumericOperation_Nova_leftOperand = left;
	this->prv->nova_math_Nova_NumericOperation_Nova_rightOperand = right;
	this->prv->nova_math_Nova_NumericOperation_Nova_operator = operator;
}

nova_math_Nova_NumericOperand* nova_math_Nova_NumericOperation_Nova_decodeOperand(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* operand)
{
	return (nova_math_Nova_NumericOperand*)(nova_Nova_Object*)nova_null;
}

int nova_math_Nova_NumericOperation_0_static_Nova_getType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* s)
{
	if (s->nova_Nova_String_Nova_count <= 0)
	{
		return (int)0;
	}
	return nova_math_Nova_NumericOperation_1_static_Nova_getType(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Accessor_Nova_first((nova_datastruct_list_Nova_CharArray*)(s->nova_Nova_String_Nova_chars), exceptionData)));
}

int nova_math_Nova_NumericOperation_1_static_Nova_getType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
{
	if (nova_math_Nova_NumericOperation_static_Nova_isNumeric(0, exceptionData, c))
	{
		return nova_math_Nova_NumericOperation_Nova_NUMBER;
	}
	if (nova_math_Nova_NumericOperation_static_Nova_isOperator(0, exceptionData, c))
	{
		return nova_math_Nova_NumericOperation_Nova_OPERATOR;
	}
	if (nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_NumericOperation_Nova_INVALID_OPERATORS, exceptionData, c))
	{
		return (int)0;
	}
	return nova_math_Nova_NumericOperation_Nova_VARIABLE;
}

nova_datastruct_Nova_Bounds* nova_math_Nova_NumericOperation_static_Nova_searchNextType(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start, int* ret1)
{
	nova_datastruct_list_Nova_IntArray* l1_Nova_operators = (nova_datastruct_list_Nova_IntArray*)nova_null;
	int l1_Nova_minIndex = 0;
	int l1_Nova_minRank = 0;
	int l1_Nova_index = 0;
	nova_datastruct_Nova_Bounds* nova_local_0 = (nova_datastruct_Nova_Bounds*)nova_null;
	
	l1_Nova_operators = nova_datastruct_list_Nova_IntArray_0_Nova_construct(0, exceptionData);
	l1_Nova_minIndex = nova_primitive_number_Nova_Int_Nova_MAX_VALUE;
	l1_Nova_minRank = nova_primitive_number_Nova_Int_Nova_MIN_VALUE;
	l1_Nova_index = nova_math_Nova_NumericOperation_static_Nova_nextOperator(0, exceptionData, str, start);
	while (l1_Nova_index >= 0)
	{
		char l1_Nova_operator = 0;
		int l1_Nova_rank = 0;
		
		l1_Nova_operator = (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(str->nova_Nova_String_Nova_chars), exceptionData, l1_Nova_index));
		l1_Nova_rank = nova_math_Nova_NumericOperation_static_Nova_getOperatorRank(0, exceptionData, l1_Nova_operator);
		if (l1_Nova_rank > l1_Nova_minRank)
		{
			l1_Nova_minIndex = l1_Nova_index;
			l1_Nova_minRank = l1_Nova_rank;
		}
		l1_Nova_index = nova_math_Nova_NumericOperation_static_Nova_nextOperator(0, exceptionData, str, l1_Nova_index + 1);
	}
	if (l1_Nova_minIndex >= str->nova_Nova_String_Nova_count)
	{
		return (nova_datastruct_Nova_Bounds*)(nova_Nova_Object*)nova_null;
	}
	l1_Nova_minIndex = nova_math_Nova_NumericOperation_static_Nova_nextNonWhitespaceIndex(0, exceptionData, str, l1_Nova_minIndex - 1, -1) + 1;
	nova_local_0 = nova_datastruct_Nova_Bounds_1_Nova_construct(0, exceptionData, start, l1_Nova_minIndex);
	(*ret1) = l1_Nova_index;
	return nova_local_0;
}

int nova_math_Nova_NumericOperation_static_Nova_nextOperator(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start)
{
	int l2_Nova_i = 0;
	
	l2_Nova_i = (int)start;
	for (; l2_Nova_i < (int)str->nova_Nova_String_Nova_count; l2_Nova_i++)
	{
		if (nova_math_Nova_NumericOperation_static_Nova_isOperator(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(str->nova_Nova_String_Nova_chars), exceptionData, l2_Nova_i))))
		{
			return l2_Nova_i;
		}
	}
	return (int)-1;
}

int nova_math_Nova_NumericOperation_static_Nova_getOperatorRank(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char operator)
{
	switch (operator)
	{
		case '-':
		case '+':
		return nova_math_Nova_NumericOperation_Nova_ADDITION;
		case '/':
		case '*':
		return nova_math_Nova_NumericOperation_Nova_MULTIPLICATION;
		case '^':
		return nova_math_Nova_NumericOperation_Nova_EXPONENT;
		case '[':
		case '(':
			return nova_math_Nova_NumericOperation_Nova_GROUPING;
			default:
			return nova_math_Nova_NumericOperation_Nova_INVALID;
		}
	}
	
	int nova_math_Nova_NumericOperation_static_Nova_nextNonWhitespaceIndex(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* str, int start, int direction)
	{
		while (start >= 0 && start < str->nova_Nova_String_Nova_count && nova_math_Nova_NumericOperation_static_Nova_isWhitespace(0, exceptionData, (char)(intptr_t)(nova_datastruct_list_Nova_CharArray_Nova_get((nova_datastruct_list_Nova_CharArray*)(str->nova_Nova_String_Nova_chars), exceptionData, start))))
		{
			start = start + direction;
		}
		if (start < 0 || start >= str->nova_Nova_String_Nova_count)
		{
			return (int)-1;
		}
		else
		{
			return start - direction;
		}
	}
	
	char nova_math_Nova_NumericOperation_static_Nova_isLetter(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
	{
		return !nova_math_Nova_NumericOperation_static_Nova_isOperator(0, exceptionData, c) && !nova_math_Nova_NumericOperation_static_Nova_isWhitespace(0, exceptionData, c);
	}
	
	char nova_math_Nova_NumericOperation_static_Nova_isNumeric(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
	{
		return nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_NumericOperation_Nova_NUMERIC_CHARS, exceptionData, c);
	}
	
	char nova_math_Nova_NumericOperation_static_Nova_isOperator(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
	{
		return nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_NumericOperation_Nova_VALID_OPERATORS, exceptionData, c);
	}
	
	char nova_math_Nova_NumericOperation_static_Nova_isWhitespace(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData, char c)
	{
		return nova_datastruct_list_Nova_CharArray_Nova_contains(nova_math_Nova_NumericOperation_Nova_WHITESPACE_CHARS, exceptionData, c);
	}
	
	nova_Nova_String* nova_math_Nova_NumericOperation_Nova_toString(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->nova_math_Nova_NumericOperation_Nova_leftOperand)), exceptionData)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->prv->nova_math_Nova_NumericOperation_Nova_operator)), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->prv->nova_math_Nova_NumericOperation_Nova_rightOperand)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))));
	}
	
	nova_datastruct_list_Nova_CharArray* generated2(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		char* l1_Nova_temp = (char*)nova_null;
		
		l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 14);
		l1_Nova_temp[0] = '-';
		l1_Nova_temp[1] = '+';
		l1_Nova_temp[2] = '!';
		l1_Nova_temp[3] = '=';
		l1_Nova_temp[4] = '%';
		l1_Nova_temp[5] = '^';
		l1_Nova_temp[6] = '*';
		l1_Nova_temp[7] = '/';
		l1_Nova_temp[8] = '>';
		l1_Nova_temp[9] = '<';
		l1_Nova_temp[10] = '[';
		l1_Nova_temp[11] = ']';
		l1_Nova_temp[12] = '(';
		l1_Nova_temp[13] = ')';
		return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 14);
	}
	
	nova_datastruct_list_Nova_CharArray* generated3(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		char* l1_Nova_temp = (char*)nova_null;
		
		l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 16);
		l1_Nova_temp[0] = '`';
		l1_Nova_temp[1] = '~';
		l1_Nova_temp[2] = '@';
		l1_Nova_temp[3] = '#';
		l1_Nova_temp[4] = '$';
		l1_Nova_temp[5] = '&';
		l1_Nova_temp[6] = '_';
		l1_Nova_temp[7] = ';';
		l1_Nova_temp[8] = ':';
		l1_Nova_temp[9] = '\'';
		l1_Nova_temp[10] = '"';
		l1_Nova_temp[11] = '|';
		l1_Nova_temp[12] = '\\';
		l1_Nova_temp[13] = ',';
		l1_Nova_temp[14] = '.';
		l1_Nova_temp[15] = '?';
		return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 16);
	}
	
	nova_datastruct_list_Nova_CharArray* generated4(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		char* l1_Nova_temp = (char*)nova_null;
		
		l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 4);
		l1_Nova_temp[0] = ' ';
		l1_Nova_temp[1] = '\n';
		l1_Nova_temp[2] = '\r';
		l1_Nova_temp[3] = '\t';
		return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 4);
	}
	
	nova_datastruct_list_Nova_CharArray* generated5(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		char* l1_Nova_temp = (char*)nova_null;
		
		l1_Nova_temp = (char*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Char) * 10);
		l1_Nova_temp[0] = '0';
		l1_Nova_temp[1] = '1';
		l1_Nova_temp[2] = '2';
		l1_Nova_temp[3] = '3';
		l1_Nova_temp[4] = '4';
		l1_Nova_temp[5] = '5';
		l1_Nova_temp[6] = '6';
		l1_Nova_temp[7] = '7';
		l1_Nova_temp[8] = '8';
		l1_Nova_temp[9] = '9';
		return nova_datastruct_list_Nova_CharArray_2_Nova_construct(0, exceptionData, l1_Nova_temp, 10);
	}
	
	void nova_math_Nova_NumericOperation_Nova_super(nova_math_Nova_NumericOperation* this, nova_exception_Nova_ExceptionData* exceptionData)
	{
		this->prv->nova_math_Nova_NumericOperation_Nova_leftOperand = (nova_math_Nova_NumericOperand*)nova_null;
		this->prv->nova_math_Nova_NumericOperation_Nova_rightOperand = (nova_math_Nova_NumericOperand*)nova_null;
		this->prv->nova_math_Nova_NumericOperation_Nova_operator = (nova_Nova_String*)nova_null;
	}
	
		
#include <precompiled.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>



nova_primitive_number_Extension_VTable_Short nova_primitive_number_Extension_VTable_Short_val =
{
	{
		(int(*)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_primitive_number_Nova_Short_0_Nova_compareTo,
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
		(nova_Nova_Object*(*)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_primitive_number_Nova_Short_0_Nova_multiply,
		0,
		0,
	},
	nova_primitive_number_Nova_Short_3_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_primitive_number_Nova_Short_0_Nova_numDigits,
	nova_primitive_number_Nova_Short_0_Nova_compareTo,
	nova_primitive_number_Nova_Short_0_Nova_multiply,
};


void nova_primitive_number_Nova_Short_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_primitive_number_Nova_Short* nova_primitive_number_Nova_Short_Nova_construct(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value)
{
	CCLASS_NEW(nova_primitive_number_Nova_Short, this,);
	this->vtable = &nova_primitive_number_Extension_VTable_Short_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_primitive_Nova_Primitive_Nova_super((nova_primitive_Nova_Primitive*)this, exceptionData);
	nova_primitive_number_Nova_Number_0_Nova_super((nova_primitive_number_Nova_Number*)this, exceptionData);
	nova_primitive_number_Nova_Short_2_Nova_super(this, exceptionData);
	
	{
		nova_primitive_number_Nova_Short_Nova_this(this, exceptionData, nova_primitive_number_Nova_Short_Nova_value);
	}
	
	return this;
}

void nova_primitive_number_Nova_Short_Nova_destroy(nova_primitive_number_Nova_Short** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_primitive_number_Nova_Short_Nova_this(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value)
{
	this->nova_primitive_number_Nova_Short_Nova_value = nova_primitive_number_Nova_Short_Nova_value;
}

int nova_primitive_number_Nova_Short_0_Nova_numDigits(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_number)
{
	return nova_primitive_number_Nova_Long_0_Nova_numDigits(0, exceptionData, nova_primitive_number_Nova_Short_Nova_number);
}

nova_Nova_String* nova_primitive_number_Nova_Short_2_Nova_toString(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value)
{
	return nova_primitive_number_Nova_Long_2_Nova_toString(0, exceptionData, nova_primitive_number_Nova_Short_Nova_value);
}

nova_Nova_String* nova_primitive_number_Nova_Short_3_Nova_toString(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_primitive_number_Nova_Short_2_Nova_toString(0, exceptionData, this->nova_primitive_number_Nova_Short_Nova_value);
}

short nova_primitive_number_Nova_Short_0_Nova_compareTo(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_other)
{
	return this->nova_primitive_number_Nova_Short_Nova_value - nova_primitive_number_Nova_Short_Nova_other;
}

short nova_primitive_number_Nova_Short_0_Nova_multiply(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData, short nova_primitive_number_Nova_Short_Nova_value)
{
	return this->nova_primitive_number_Nova_Short_Nova_value * nova_primitive_number_Nova_Short_Nova_value;
}

void nova_primitive_number_Nova_Short_2_Nova_super(nova_primitive_number_Nova_Short* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_primitive_number_Nova_Short_Nova_value = 0;
}

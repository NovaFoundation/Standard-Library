#include <precompiled.h>
#include <nova/star/nova_star_Nova_Frame.h>



nova_star_Frame_Extension_VTable nova_star_Frame_Extension_VTable_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
		0,
	},
	nova_Nova_Object_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void nova_star_Nova_Frame_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_star_Nova_Frame* nova_star_Nova_Frame_Nova_construct(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_x, int nova_star_Nova_Frame_Nova_y, int nova_star_Nova_Frame_Nova_width, int nova_star_Nova_Frame_Nova_height)
{
	CCLASS_NEW(nova_star_Nova_Frame, this,);
	this->vtable = &nova_star_Frame_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_star_Nova_Frame_Nova_super(this, exceptionData);
	
	{
		nova_star_Nova_Frame_Nova_this(this, exceptionData, nova_star_Nova_Frame_Nova_x, nova_star_Nova_Frame_Nova_y, nova_star_Nova_Frame_Nova_width, nova_star_Nova_Frame_Nova_height);
	}
	
	return this;
}

void nova_star_Nova_Frame_Nova_destroy(nova_star_Nova_Frame** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	
	
	
	NOVA_FREE(*this);
}

void nova_star_Nova_Frame_Nova_this(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_x, int nova_star_Nova_Frame_Nova_y, int nova_star_Nova_Frame_Nova_width, int nova_star_Nova_Frame_Nova_height)
{
	nova_star_Nova_Frame_Nova_x = (int)(nova_star_Nova_Frame_Nova_x == (intptr_t)nova_null ? 0 : nova_star_Nova_Frame_Nova_x);
	nova_star_Nova_Frame_Nova_y = (int)(nova_star_Nova_Frame_Nova_y == (intptr_t)nova_null ? 0 : nova_star_Nova_Frame_Nova_y);
	nova_star_Nova_Frame_Nova_width = (int)(nova_star_Nova_Frame_Nova_width == (intptr_t)nova_null ? 800 : nova_star_Nova_Frame_Nova_width);
	nova_star_Nova_Frame_Nova_height = (int)(nova_star_Nova_Frame_Nova_height == (intptr_t)nova_null ? 600 : nova_star_Nova_Frame_Nova_height);
	nova_star_Nova_Frame_Mutator_Nova_x(this, exceptionData, nova_star_Nova_Frame_Nova_x);
	nova_star_Nova_Frame_Mutator_Nova_y(this, exceptionData, nova_star_Nova_Frame_Nova_y);
	nova_star_Nova_Frame_Mutator_Nova_width(this, exceptionData, nova_star_Nova_Frame_Nova_width);
	nova_star_Nova_Frame_Mutator_Nova_height(this, exceptionData, nova_star_Nova_Frame_Nova_height);
}

int nova_star_Nova_Frame_Mutator_Nova_x(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_value)
{
	nova_star_Nova_Frame_Mutator_Nova_x(this, exceptionData, nova_star_Nova_Frame_Nova_value);
	return nova_star_Nova_Frame_Nova_value;
}

int nova_star_Nova_Frame_Mutator_Nova_y(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_value)
{
	nova_star_Nova_Frame_Mutator_Nova_y(this, exceptionData, nova_star_Nova_Frame_Nova_value);
	return nova_star_Nova_Frame_Nova_value;
}

int nova_star_Nova_Frame_Mutator_Nova_width(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_value)
{
	nova_star_Nova_Frame_Mutator_Nova_width(this, exceptionData, nova_star_Nova_Frame_Nova_value);
	return nova_star_Nova_Frame_Nova_value;
}

int nova_star_Nova_Frame_Mutator_Nova_height(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_star_Nova_Frame_Nova_value)
{
	nova_star_Nova_Frame_Mutator_Nova_height(this, exceptionData, nova_star_Nova_Frame_Nova_value);
	return nova_star_Nova_Frame_Nova_value;
}

void nova_star_Nova_Frame_Nova_super(nova_star_Nova_Frame* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_star_Nova_Frame_Nova_x = 0;
	this->nova_star_Nova_Frame_Nova_y = 0;
	this->nova_star_Nova_Frame_Nova_width = 0;
	this->nova_star_Nova_Frame_Nova_height = 0;
}


#include <precompiled.h>
#include <nova/ar/nova_ar_Nova_TrackPoint.h>



nova_ar_Extension_VTable_TrackPoint nova_ar_Extension_VTable_TrackPoint_val =
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
	},
	nova_Nova_Object_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void nova_ar_Nova_TrackPoint_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_ar_Nova_TrackPoint* nova_ar_Nova_TrackPoint_Nova_construct(nova_ar_Nova_TrackPoint* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_ar_Nova_TrackPoint, this,);
	this->vtable = &nova_ar_Extension_VTable_TrackPoint_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_ar_Nova_TrackPoint_Nova_super(this, exceptionData);
	
	{
		nova_ar_Nova_TrackPoint_0_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_ar_Nova_TrackPoint_Nova_destroy(nova_ar_Nova_TrackPoint** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_ar_Nova_TrackPoint_0_Nova_this(nova_ar_Nova_TrackPoint* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_ar_Nova_TrackPoint_Nova_super(nova_ar_Nova_TrackPoint* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


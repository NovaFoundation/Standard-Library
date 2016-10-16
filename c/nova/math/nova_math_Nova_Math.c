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
#include <math.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>



nova_math_Math_Extension_VTable nova_math_Math_Extension_VTable_val =
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
	},
	nova_Nova_Object_Nova_equals,
	nova_Nova_Object_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


double nova_math_Nova_Math_Nova_PI;
void nova_math_Nova_Math_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_math_Nova_Math_Nova_PI = (double)(3.141592653);
	}
}

nova_math_Nova_Math* nova_math_Nova_Math_Nova_construct(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_math_Nova_Math, this,);
	this->vtable = &nova_math_Math_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_math_Nova_Math_Nova_super(this, exceptionData);
	
	{
		nova_math_Nova_Math_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_math_Nova_Math_Nova_destroy(nova_math_Nova_Math** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

long_long nova_math_Nova_Math_static_Nova_max(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long nova_math_Nova_Math_Nova_a, long_long nova_math_Nova_Math_Nova_b)
{
	return (long_long)(nova_math_Nova_Math_Nova_a > nova_math_Nova_Math_Nova_b ? nova_math_Nova_Math_Nova_a : nova_math_Nova_Math_Nova_b);
}

long_long nova_math_Nova_Math_static_Nova_min(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long nova_math_Nova_Math_Nova_a, long_long nova_math_Nova_Math_Nova_b)
{
	return (long_long)(nova_math_Nova_Math_Nova_a < nova_math_Nova_Math_Nova_b ? nova_math_Nova_Math_Nova_a : nova_math_Nova_Math_Nova_b);
}

char nova_math_Nova_Math_static_Nova_sign(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long nova_math_Nova_Math_Nova_num)
{
	return (char)(nova_math_Nova_Math_Nova_num > 0 ? 1 : ((char)(nova_math_Nova_Math_Nova_num < 0 ? -1 : 0)));
}

long_long nova_math_Nova_Math_static_Nova_random(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long nova_math_Nova_Math_Nova_range)
{
	return rand() % nova_math_Nova_Math_Nova_range;
}

long_long nova_math_Nova_Math_0_static_Nova_abs(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, long_long nova_math_Nova_Math_Nova_number)
{
	return llabs(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_1_static_Nova_abs(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return fabs(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_sqrt(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return sqrt(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_pow(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_base, double nova_math_Nova_Math_Nova_power)
{
	return pow(nova_math_Nova_Math_Nova_base, nova_math_Nova_Math_Nova_power);
}

double nova_math_Nova_Math_static_Nova_sin(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return sin(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_cos(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return cos(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_tan(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return tan(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_asin(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return asin(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_acos(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return acos(nova_math_Nova_Math_Nova_number);
}

double nova_math_Nova_Math_static_Nova_atan(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return atan(nova_math_Nova_Math_Nova_number);
}

long_long nova_math_Nova_Math_static_Nova_round(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return nova_math_Nova_Math_static_Nova_floor(0, exceptionData, nova_math_Nova_Math_Nova_number + 0.5);
}

long_long nova_math_Nova_Math_static_Nova_floor(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return floor(nova_math_Nova_Math_Nova_number);
}

long_long nova_math_Nova_Math_static_Nova_ceil(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData, double nova_math_Nova_Math_Nova_number)
{
	return ceil(nova_math_Nova_Math_Nova_number);
}

void nova_math_Nova_Math_Nova_this(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_math_Nova_Math_Nova_super(nova_math_Nova_Math* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


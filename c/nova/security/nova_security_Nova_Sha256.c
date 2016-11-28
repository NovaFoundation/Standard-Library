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

typedef struct
{
} Context1;


nova_security_Sha256_Extension_VTable nova_security_Sha256_Extension_VTable_val =
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



long_long nova_security_Nova_Sha256_Nova_rotr(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long n, long_long x);
long_long nova_security_Nova_Sha256_Nova_l1(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x);
long_long nova_security_Nova_Sha256_Nova_l2(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x);
long_long nova_security_Nova_Sha256_Nova_l3(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x);
long_long nova_security_Nova_Sha256_Nova_l4(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x);
long_long nova_security_Nova_Sha256_Nova_l5(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x, long_long y, long_long z);
long_long nova_security_Nova_Sha256_Nova_l6(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x, long_long y, long_long z);
nova_datastruct_list_Nova_Array* generated9(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_Array* generated28(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_IntArray* nova_security_Nova_Sha256_Nova_testLambda85(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
nova_datastruct_list_Nova_Array* nova_security_Nova_Sha256_Nova_CONSTANTS;
void nova_security_Nova_Sha256_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_security_Nova_Sha256_Nova_CONSTANTS = generated9(0, exceptionData);
	}
}

nova_security_Nova_Sha256* nova_security_Nova_Sha256_Nova_construct(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_security_Nova_Sha256, this,);
	this->vtable = &nova_security_Sha256_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_security_Nova_Sha256_Nova_super(this, exceptionData);
	
	{
		nova_security_Nova_Sha256_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_security_Nova_Sha256_Nova_destroy(nova_security_Nova_Sha256** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_Nova_String* nova_security_Nova_Sha256_Nova_digest(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* msg)
{
	nova_datastruct_list_Nova_Array* l1_Nova_hash = (nova_datastruct_list_Nova_Array*)nova_null;
	int l1_Nova_l = 0;
	int l1_Nova_n = 0;
	nova_datastruct_list_Nova_Array* l1_Nova_M = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg85 = 
	{
	};
	long_long nova_zero_check3 = 0;
	long_long nova_zero_check4 = 0;
	int l2_Nova_i = 0;
	int l10_Nova_i = 0;
	
	l1_Nova_hash = generated28(this, exceptionData);
	l1_Nova_l = msg->nova_Nova_String_Nova_count / 4 + 2;
	l1_Nova_n = (int)(nova_math_Nova_Math_static_Nova_ceil(0, exceptionData, l1_Nova_l / 16));
	l1_Nova_M = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_0_Nova_map((nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, l1_Nova_n, (intptr_t)nova_null)), exceptionData, (nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)&nova_security_Nova_Sha256_Nova_testLambda85, this, &contextArg85));
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)l1_Nova_n; l2_Nova_i++)
	{
		int l4_Nova_j = 0;
		
		l4_Nova_j = (int)0;
		for (; l4_Nova_j < (int)16; l4_Nova_j++)
		{
			nova_datastruct_list_Nova_IntArray_Nova_set((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_M), exceptionData, l2_Nova_i)), exceptionData, l4_Nova_j, (nova_Nova_String_Nova_get(msg, exceptionData, l2_Nova_i * 64 + l4_Nova_j * 4) << 24) | (nova_Nova_String_Nova_get(msg, exceptionData, l2_Nova_i * 64 + l4_Nova_j * 4 + 1) << 16) | (nova_Nova_String_Nova_get(msg, exceptionData, l2_Nova_i * 64 + l4_Nova_j * 4 + 2) << 8) | (nova_Nova_String_Nova_get(msg, exceptionData, l2_Nova_i * 64 + l4_Nova_j * 4 + 3)));
		}
	}
	nova_zero_check3 = (long_long)nova_math_Nova_Math_static_Nova_pow(0, exceptionData, 2, 32);
	if (nova_zero_check3 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_M), exceptionData, l1_Nova_n - 1);
	nova_zero_check4 = nova_zero_check3;
	if (nova_zero_check4 == 0)
	{
		THROW(nova_exception_Nova_DivideByZeroException_Nova_construct(0, exceptionData), 0);
	}
	nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_M), exceptionData, l1_Nova_n - 1);
	l10_Nova_i = (int)0;
	for (; l10_Nova_i < (int)l1_Nova_n; l10_Nova_i++)
	{
		nova_datastruct_list_Nova_IntArray* l10_Nova_W = (nova_datastruct_list_Nova_IntArray*)nova_null;
		int l12_Nova_t = 0;
		int l14_Nova_t = 0;
		
		l10_Nova_W = nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, 64);
		l12_Nova_t = (int)0;
		for (; l12_Nova_t < (int)16; l12_Nova_t++)
		{
			nova_datastruct_list_Nova_IntArray_Nova_set(l10_Nova_W, exceptionData, l12_Nova_t, (int)(intptr_t)(nova_datastruct_list_Nova_IntArray_Nova_get((nova_datastruct_list_Nova_IntArray*)(nova_datastruct_list_Nova_Array_virtual_Nova_get((nova_datastruct_list_Nova_Array*)(l1_Nova_M), exceptionData, l10_Nova_i)), exceptionData, l12_Nova_t)));
		}
		l14_Nova_t = (int)16;
		for (; l14_Nova_t < (int)64; l14_Nova_t++)
		{
			l10_Nova_W;
		}
	}
	return nova_datastruct_list_Nova_List_virtual_Nova_join((nova_datastruct_list_Nova_List*)(l1_Nova_hash), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

long_long nova_security_Nova_Sha256_Nova_rotr(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long n, long_long x)
{
	return ((unsigned int)x >> n) | (x << (32 - n));
}

long_long nova_security_Nova_Sha256_Nova_l1(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x)
{
	return nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 2, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 13, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 22, x);
}

long_long nova_security_Nova_Sha256_Nova_l2(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x)
{
	return nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 6, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 11, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 25, x);
}

long_long nova_security_Nova_Sha256_Nova_l3(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x)
{
	return nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 7, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 18, x) ^ ((unsigned int)x >> 3);
}

long_long nova_security_Nova_Sha256_Nova_l4(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x)
{
	return nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 17, x) ^ nova_security_Nova_Sha256_Nova_rotr(this, exceptionData, 19, x) ^ ((unsigned int)x >> 10);
}

long_long nova_security_Nova_Sha256_Nova_l5(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x, long_long y, long_long z)
{
	return (x & y) ^ (~x & z);
}

long_long nova_security_Nova_Sha256_Nova_l6(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, long_long x, long_long y, long_long z)
{
	return (x & y) ^ (x & z) ^ (y & z);
}

void nova_security_Nova_Sha256_Nova_this(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

nova_datastruct_list_Nova_Array* generated9(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	long_long* l1_Nova_temp = (long_long*)nova_null;
	
	l1_Nova_temp = (long_long*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Long) * 64);
	l1_Nova_temp[0] = 0x428a2f98;
	l1_Nova_temp[1] = 0x71374491;
	l1_Nova_temp[2] = 0xb5c0fbcf;
	l1_Nova_temp[3] = 0xe9b5dba5;
	l1_Nova_temp[4] = 0x3956c25b;
	l1_Nova_temp[5] = 0x59f111f1;
	l1_Nova_temp[6] = 0x923f82a4;
	l1_Nova_temp[7] = 0xab1c5ed5;
	l1_Nova_temp[8] = 0xd807aa98;
	l1_Nova_temp[9] = 0x12835b01;
	l1_Nova_temp[10] = 0x243185be;
	l1_Nova_temp[11] = 0x550c7dc3;
	l1_Nova_temp[12] = 0x72be5d74;
	l1_Nova_temp[13] = 0x80deb1fe;
	l1_Nova_temp[14] = 0x9bdc06a7;
	l1_Nova_temp[15] = 0xc19bf174;
	l1_Nova_temp[16] = 0xe49b69c1;
	l1_Nova_temp[17] = 0xefbe4786;
	l1_Nova_temp[18] = 0x0fc19dc6;
	l1_Nova_temp[19] = 0x240ca1cc;
	l1_Nova_temp[20] = 0x2de92c6f;
	l1_Nova_temp[21] = 0x4a7484aa;
	l1_Nova_temp[22] = 0x5cb0a9dc;
	l1_Nova_temp[23] = 0x76f988da;
	l1_Nova_temp[24] = 0x983e5152;
	l1_Nova_temp[25] = 0xa831c66d;
	l1_Nova_temp[26] = 0xb00327c8;
	l1_Nova_temp[27] = 0xbf597fc7;
	l1_Nova_temp[28] = 0xc6e00bf3;
	l1_Nova_temp[29] = 0xd5a79147;
	l1_Nova_temp[30] = 0x06ca6351;
	l1_Nova_temp[31] = 0x14292967;
	l1_Nova_temp[32] = 0x27b70a85;
	l1_Nova_temp[33] = 0x2e1b2138;
	l1_Nova_temp[34] = 0x4d2c6dfc;
	l1_Nova_temp[35] = 0x53380d13;
	l1_Nova_temp[36] = 0x650a7354;
	l1_Nova_temp[37] = 0x766a0abb;
	l1_Nova_temp[38] = 0x81c2c92e;
	l1_Nova_temp[39] = 0x92722c85;
	l1_Nova_temp[40] = 0xa2bfe8a1;
	l1_Nova_temp[41] = 0xa81a664b;
	l1_Nova_temp[42] = 0xc24b8b70;
	l1_Nova_temp[43] = 0xc76c51a3;
	l1_Nova_temp[44] = 0xd192e819;
	l1_Nova_temp[45] = 0xd6990624;
	l1_Nova_temp[46] = 0xf40e3585;
	l1_Nova_temp[47] = 0x106aa070;
	l1_Nova_temp[48] = 0x19a4c116;
	l1_Nova_temp[49] = 0x1e376c08;
	l1_Nova_temp[50] = 0x2748774c;
	l1_Nova_temp[51] = 0x34b0bcb5;
	l1_Nova_temp[52] = 0x391c0cb3;
	l1_Nova_temp[53] = 0x4ed8aa4a;
	l1_Nova_temp[54] = 0x5b9cca4f;
	l1_Nova_temp[55] = 0x682e6ff3;
	l1_Nova_temp[56] = 0x748f82ee;
	l1_Nova_temp[57] = 0x78a5636f;
	l1_Nova_temp[58] = 0x84c87814;
	l1_Nova_temp[59] = 0x8cc70208;
	l1_Nova_temp[60] = 0x90befffa;
	l1_Nova_temp[61] = 0xa4506ceb;
	l1_Nova_temp[62] = 0xbef9a3f7;
	l1_Nova_temp[63] = 0xc67178f2;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)&(l1_Nova_temp), 64);
}

nova_datastruct_list_Nova_Array* generated28(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	long_long* l1_Nova_temp = (long_long*)nova_null;
	
	l1_Nova_temp = (long_long*)NOVA_MALLOC(sizeof(nova_primitive_number_Nova_Long) * 8);
	l1_Nova_temp[0] = 0x6a09e667;
	l1_Nova_temp[1] = 0xbb67ae85;
	l1_Nova_temp[2] = 0x3c6ef372;
	l1_Nova_temp[3] = 0xa54ff53a;
	l1_Nova_temp[4] = 0x510e527f;
	l1_Nova_temp[5] = 0x9b05688c;
	l1_Nova_temp[6] = 0x1f83d9ab;
	l1_Nova_temp[7] = 0x5be0cd19;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)&(l1_Nova_temp), 8);
}

nova_datastruct_list_Nova_IntArray* nova_security_Nova_Sha256_Nova_testLambda85(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_IntArray* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_datastruct_list_Nova_IntArray_1_Nova_construct(0, exceptionData, 16);
}

void nova_security_Nova_Sha256_Nova_super(nova_security_Nova_Sha256* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


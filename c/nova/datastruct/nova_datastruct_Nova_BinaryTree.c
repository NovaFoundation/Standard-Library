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
#include <nova/datastruct/nova_datastruct_Nova_BinaryNode.h>
#include <nova/datastruct/nova_datastruct_Nova_Comparable.h>
#include <nova/datastruct/nova_datastruct_Nova_Tree.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;


nova_datastruct_BinaryTree_Extension_VTable nova_datastruct_BinaryTree_Extension_VTable_val =
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



void nova_datastruct_Nova_BinaryTree_Nova_testLambda55(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void nova_datastruct_Nova_BinaryTree_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_BinaryTree* nova_datastruct_Nova_BinaryTree_Nova_construct(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	CCLASS_NEW(nova_datastruct_Nova_BinaryTree, this,);
	this->vtable = &nova_datastruct_BinaryTree_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Tree_Nova_super((nova_datastruct_Nova_Tree*)this, exceptionData);
	nova_datastruct_Nova_BinaryTree_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_BinaryTree_Nova_this(this, exceptionData, data);
	}
	
	return this;
}

void nova_datastruct_Nova_BinaryTree_Nova_destroy(nova_datastruct_Nova_BinaryTree** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_BinaryTree_Nova_this(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	nova_datastruct_Nova_BinaryTree_Nova_addNodes(this, exceptionData, data);
}

nova_datastruct_Nova_BinaryTree* nova_datastruct_Nova_BinaryTree_Nova_addNode(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* data)
{
	if (nova_datastruct_Nova_BinaryTree_Accessorfunc_Nova_root(this, exceptionData) == (nova_datastruct_Nova_BinaryNode*)nova_null)
	{
		nova_datastruct_Nova_BinaryTree_Mutatorfunc_Nova_root(this, exceptionData, (nova_datastruct_Nova_BinaryNode*)(nova_datastruct_Nova_BinaryNode_0_Nova_construct(0, exceptionData, (nova_datastruct_Nova_Comparable*)(data))));
	}
	else
	{
		nova_datastruct_Nova_BinaryNode_Nova_addChild(nova_datastruct_Nova_BinaryTree_Accessorfunc_Nova_root(this, exceptionData), exceptionData, (nova_datastruct_Nova_Comparable*)(data));
	}
	return this;
}

nova_datastruct_Nova_BinaryTree* nova_datastruct_Nova_BinaryTree_Nova_addNodes(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* data)
{
	Context1 contextArg55 = 
	{
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(data), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_BinaryTree_Nova_testLambda55, this, &contextArg55);
	return this;
}

void nova_datastruct_Nova_BinaryTree_Nova_testLambda55(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Comparable* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	nova_datastruct_Nova_BinaryTree_Nova_addNode(this, exceptionData, _1);
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryTree_Accessorfunc_Nova_root(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_datastruct_Nova_BinaryNode*)(nova_datastruct_Nova_BinaryNode*)((nova_datastruct_Nova_Tree*)this)->nova_datastruct_Nova_Tree_Nova_root;
}

nova_datastruct_Nova_BinaryNode* nova_datastruct_Nova_BinaryTree_Mutatorfunc_Nova_root(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_BinaryNode* value)
{
	((nova_datastruct_Nova_Tree*)this)->nova_datastruct_Nova_Tree_Nova_root = (nova_datastruct_Nova_Node*)(value);
	return value;
}

void nova_datastruct_Nova_BinaryTree_Nova_super(nova_datastruct_Nova_BinaryTree* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}


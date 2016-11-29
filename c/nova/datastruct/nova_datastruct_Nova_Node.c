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
#include <nova/datastruct/list/nova_datastruct_list_Nova_Queue.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
} Context1;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context2;
typedef struct
{
} Context3;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context4;
typedef struct
{
} Context5;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context6;
typedef struct
{
} Context7;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context8;
typedef struct
{
} Context9;
typedef struct
{
	/* Queue<Node<Object>, Node<Object>, Node<Object>> queue */ nova_datastruct_list_Nova_Queue** nova_datastruct_Nova_Node_Nova_queue;
} Context10;


nova_datastruct_Node_Extension_VTable nova_datastruct_Node_Extension_VTable_val =
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
	nova_datastruct_Nova_Node_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array);
char nova_datastruct_Nova_Node_Nova_testLambda62(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void nova_datastruct_Nova_Node_Nova_testLambda63(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char nova_datastruct_Nova_Node_Nova_testLambda64(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);
void nova_datastruct_Nova_Node_Nova_testLambda65(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context);
char nova_datastruct_Nova_Node_Nova_testLambda66(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context);
void nova_datastruct_Nova_Node_Nova_testLambda67(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context);
char nova_datastruct_Nova_Node_Nova_testLambda68(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context);
void nova_datastruct_Nova_Node_Nova_testLambda69(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context);
nova_datastruct_list_Nova_Array* generated26(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
char nova_datastruct_Nova_Node_Nova_testLambda70(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context9* context);
void nova_datastruct_Nova_Node_Nova_testLambda71(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context);
void nova_datastruct_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_construct(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int numChildren)
{
	CCLASS_NEW(nova_datastruct_Nova_Node, this,);
	this->vtable = &nova_datastruct_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Node_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Node_Nova_this(this, exceptionData, data, numChildren);
	}
	
	return this;
}

void nova_datastruct_Nova_Node_Nova_destroy(nova_datastruct_Nova_Node** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_datastruct_Nova_Node_Nova_children, exceptionData);
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Node_Nova_this(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* data, int numChildren)
{
	data = (nova_Nova_Object*)(data == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)data);
	numChildren = (int)(numChildren == (intptr_t)nova_null ? 5 : numChildren);
	this->nova_datastruct_Nova_Node_Nova_children = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, numChildren, (intptr_t)nova_null);
	this->nova_datastruct_Nova_Node_Nova_data = data;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Node_1_Nova_preorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Node_1_Nova_inorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Node_1_Nova_postorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_datastruct_Nova_Node_1_Nova_levelorder(this, exceptionData, nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	Context1 contextArg62 = 
	{
	};
	Context2 contextArg63 = 
	{
		&array,
	};
	
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_testLambda62, this, &contextArg62)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda63, this, &contextArg63);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	int l1_Nova_half = 0;
	Context3 contextArg64 = 
	{
	};
	Context4 contextArg65 = 
	{
		&array,
	};
	Context5 contextArg66 = 
	{
	};
	Context6 contextArg67 = 
	{
		&array,
	};
	
	l1_Nova_half = (int)(nova_math_Nova_Math_static_Nova_ceil(0, exceptionData, nova_datastruct_list_Nova_Array_Accessorfunc_Nova_count((nova_datastruct_list_Nova_Array*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData) / 2.0));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_take((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_testLambda64, this, &contextArg64)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda65, this, &contextArg65);
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual_Nova_skip((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_testLambda66, this, &contextArg66)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda67, this, &contextArg67);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	Context7 contextArg68 = 
	{
	};
	Context8 contextArg69 = 
	{
		&array,
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_testLambda68, this, &contextArg68)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda69, this, &contextArg69);
	nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* array)
{
	nova_datastruct_list_Nova_Queue* l1_Nova_queue = (nova_datastruct_list_Nova_Queue*)nova_null;
	
	l1_Nova_queue = nova_datastruct_list_Nova_Queue_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated26(this, exceptionData)));
	while (!nova_datastruct_list_Nova_Queue_Accessor_Nova_empty((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData))
	{
		nova_datastruct_Nova_Node* l1_Nova_current = (nova_datastruct_Nova_Node*)nova_null;
		Context9 contextArg70 = 
		{
		};
		Context10 contextArg71 = 
		{
			&l1_Nova_queue,
		};
		
		l1_Nova_current = (nova_datastruct_Nova_Node*)(nova_datastruct_list_Nova_Queue_Nova_dequeue((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(array, exceptionData, l1_Nova_current->nova_datastruct_Nova_Node_Nova_data);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_current->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_testLambda70, this, &contextArg70)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda71, this, &contextArg71);
	}
	return (nova_datastruct_list_Nova_Array*)array;
}

nova_Nova_String* nova_datastruct_Nova_Node_Nova_toString(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_Object_virtual_Nova_toString((nova_Nova_Object*)((this->nova_datastruct_Nova_Node_Nova_data)), exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")));
}

char nova_datastruct_Nova_Node_Nova_testLambda62(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_testLambda63(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	nova_datastruct_Nova_Node_1_Nova_preorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_testLambda64(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_testLambda65(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context4* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_testLambda66(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context5* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_testLambda67(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context6* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

char nova_datastruct_Nova_Node_Nova_testLambda68(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context7* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_testLambda69(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context8* context)
{
	nova_datastruct_Nova_Node_1_Nova_postorder(_1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

nova_datastruct_list_Nova_Array* generated26(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_Nova_Node** l1_Nova_temp = (nova_datastruct_Nova_Node**)nova_null;
	
	l1_Nova_temp = (nova_datastruct_Nova_Node**)NOVA_MALLOC(sizeof(nova_datastruct_Nova_Node) * 1);
	l1_Nova_temp[0] = this;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

char nova_datastruct_Nova_Node_Nova_testLambda70(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context9* context)
{
	return _1 != (nova_datastruct_Nova_Node*)nova_null;
}

void nova_datastruct_Nova_Node_Nova_testLambda71(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context10* context)
{
	nova_datastruct_list_Nova_Queue_Nova_enqueue((nova_datastruct_list_Nova_Queue*)((*context->nova_datastruct_Nova_Node_Nova_queue)), exceptionData, (nova_Nova_Object*)(_1));
}

void nova_datastruct_Nova_Node_Nova_super(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Node_Nova_data = (nova_Nova_Object*)nova_null;
	this->nova_datastruct_Nova_Node_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
}


#include <precompiled.h>
#include <nova/datastruct/nova_datastruct_Nova_Node.h>

typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context1;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context2;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context3;
typedef struct
{
	/* Array<Object> array */ nova_datastruct_list_Nova_Array** nova_datastruct_Nova_Node_Nova_array;
} Context4;
typedef struct
{
	/* Queue<Node<Object>> queue */ nova_datastruct_list_Nova_Queue** nova_datastruct_Nova_Node_Nova_queue;
} Context5;


nova_datastruct_Node_Extension_VTable nova_datastruct_Node_Extension_VTable_val =
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
	nova_datastruct_Nova_Node_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



char nova_datastruct_Nova_Node_Nova_notNull(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_value);
void nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array);
nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array);
void nova_datastruct_Nova_Node_Nova_testLambda12(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context1* context);
void nova_datastruct_Nova_Node_Nova_testLambda13(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context2* context);
void nova_datastruct_Nova_Node_Nova_testLambda14(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context3* context);
void nova_datastruct_Nova_Node_Nova_testLambda15(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context4* context);
nova_datastruct_list_Nova_Array* generated9(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_Nova_Node_Nova_testLambda16(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context5* context);
void nova_datastruct_Nova_Node_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_construct(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_Nova_Node_Nova_data, int nova_datastruct_Nova_Node_Nova_numChildren)
{
	CCLASS_NEW(nova_datastruct_Nova_Node, this,);
	this->vtable = &nova_datastruct_Node_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Node_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Node_1_Nova_this(this, exceptionData, nova_datastruct_Nova_Node_Nova_data, nova_datastruct_Nova_Node_Nova_numChildren);
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

void nova_datastruct_Nova_Node_1_Nova_this(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_Nova_Node_Nova_data, int nova_datastruct_Nova_Node_Nova_numChildren)
{
	nova_datastruct_Nova_Node_Nova_data = (nova_Nova_Object*)(nova_datastruct_Nova_Node_Nova_data == 0 ? (nova_Nova_Object*)(nova_Nova_Object*)nova_null : (nova_Nova_Object*)nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_Nova_Node_Nova_numChildren = (int)(nova_datastruct_Nova_Node_Nova_numChildren == (intptr_t)nova_null ? 5 : nova_datastruct_Nova_Node_Nova_numChildren);
	this->nova_datastruct_Nova_Node_Nova_children = nova_datastruct_list_Nova_Array_1_Nova_construct(0, exceptionData, nova_datastruct_Nova_Node_Nova_numChildren);
	this->nova_datastruct_Nova_Node_Nova_data = nova_datastruct_Nova_Node_Nova_data;
}

char nova_datastruct_Nova_Node_Nova_notNull(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova_value)
{
	return nova_datastruct_Nova_Node_Nova_value != (nova_datastruct_Nova_Node*)nova_null;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	nova_datastruct_Nova_Node_1_Nova_preorder(this, exceptionData, l1_Nova_array);
	return (nova_datastruct_list_Nova_Array*)l1_Nova_array;
}

void nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array)
{
	Context1 contextArg12 = 
	{
		&nova_datastruct_Nova_Node_Nova_array,
	};
	
	nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Nova_Node_Nova_array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_notNull, this, nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda12, this, &contextArg12);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_inorder(this, exceptionData, l1_Nova_array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array)
{
	int l1_Nova_half = 0;
	Context2 contextArg13 = 
	{
		&nova_datastruct_Nova_Node_Nova_array,
	};
	Context3 contextArg14 = 
	{
		&nova_datastruct_Nova_Node_Nova_array,
	};
	
	l1_Nova_half = (int)(nova_math_Nova_Math_Nova_ceil(0, exceptionData, this->nova_datastruct_Nova_Node_Nova_children->nova_datastruct_list_Nova_Array_Nova_count / 2.0));
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_take((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_notNull, this, nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda13, this, &contextArg13);
	nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Nova_Node_Nova_array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_skip((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, l1_Nova_half)), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_notNull, this, nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda14, this, &contextArg14);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_postorder(this, exceptionData, l1_Nova_array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array)
{
	Context4 contextArg15 = 
	{
		&nova_datastruct_Nova_Node_Nova_array,
	};
	
	nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(this->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_notNull, this, nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda15, this, &contextArg15);
	nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Nova_Node_Nova_array, exceptionData, this->nova_datastruct_Nova_Node_Nova_data);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_Nova_array;
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_0_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_array = (nova_datastruct_list_Nova_Array*)nova_null;
	
	l1_Nova_array = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_1_Nova_levelorder(this, exceptionData, l1_Nova_array);
}

nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_1_Nova_levelorder(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova_array)
{
	nova_datastruct_list_Nova_Queue* l1_Nova_queue = (nova_datastruct_list_Nova_Queue*)nova_null;
	
	l1_Nova_queue = nova_datastruct_list_Nova_Queue_1_Nova_construct(0, exceptionData, (nova_datastruct_list_Nova_Array*)(generated9(this, exceptionData)));
	while (!nova_datastruct_list_Nova_Queue_Accessor_Nova_empty((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData))
	{
		nova_datastruct_Nova_Node* l1_Nova_current = (nova_datastruct_Nova_Node*)nova_null;
		Context5 contextArg16 = 
		{
			&l1_Nova_queue,
		};
		
		l1_Nova_current = (nova_datastruct_Nova_Node*)(nova_datastruct_list_Nova_Queue_Nova_dequeue((nova_datastruct_list_Nova_Queue*)(l1_Nova_queue), exceptionData));
		nova_datastruct_list_Nova_Array_0_Nova_add(nova_datastruct_Nova_Node_Nova_array, exceptionData, l1_Nova_current->nova_datastruct_Nova_Node_Nova_data);
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_current->nova_datastruct_Nova_Node_Nova_children), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_datastruct_Nova_Node_Nova_notNull, this, nova_null)), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_datastruct_Nova_Node_Nova_testLambda16, this, &contextArg16);
	}
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_Nova_Node_Nova_array;
}

nova_Nova_String* nova_datastruct_Nova_Node_0_Nova_toString(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (nova_Nova_String*)(nova_Nova_Object_virtual1_Nova_toString((nova_Nova_Object*)(this->nova_datastruct_Nova_Node_Nova_data), exceptionData));
}

void nova_datastruct_Nova_Node_Nova_testLambda12(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context1* context)
{
	nova_datastruct_Nova_Node_1_Nova_preorder(nova_datastruct_Nova_Node_Nova__1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

void nova_datastruct_Nova_Node_Nova_testLambda13(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context2* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node_Nova__1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

void nova_datastruct_Nova_Node_Nova_testLambda14(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context3* context)
{
	nova_datastruct_Nova_Node_1_Nova_inorder(nova_datastruct_Nova_Node_Nova__1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

void nova_datastruct_Nova_Node_Nova_testLambda15(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context4* context)
{
	nova_datastruct_Nova_Node_1_Nova_postorder(nova_datastruct_Nova_Node_Nova__1, exceptionData, (*context->nova_datastruct_Nova_Node_Nova_array));
}

nova_datastruct_list_Nova_Array* generated9(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_Nova_Node** l1_Nova_temp = (nova_datastruct_Nova_Node**)nova_null;
	
	l1_Nova_temp = (nova_datastruct_Nova_Node**)NOVA_MALLOC(sizeof(nova_datastruct_Nova_Node) * 1);
	l1_Nova_temp[0] = this;
	return nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)(l1_Nova_temp), 1);
}

void nova_datastruct_Nova_Node_Nova_testLambda16(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_Nova_Node* nova_datastruct_Nova_Node_Nova__1, int nova_datastruct_Nova_Node_Nova__2, nova_datastruct_list_Nova_Array* nova_datastruct_Nova_Node_Nova__3, Context5* context)
{
	nova_datastruct_list_Nova_Queue_Nova_enqueue((nova_datastruct_list_Nova_Queue*)((*context->nova_datastruct_Nova_Node_Nova_queue)), exceptionData, (nova_Nova_Object*)(nova_datastruct_Nova_Node_Nova__1));
}

void nova_datastruct_Nova_Node_Nova_super(nova_datastruct_Nova_Node* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_Nova_Node_Nova_data = (nova_Nova_Object*)nova_null;
	this->nova_datastruct_Nova_Node_Nova_children = (nova_datastruct_list_Nova_Array*)nova_null;
}


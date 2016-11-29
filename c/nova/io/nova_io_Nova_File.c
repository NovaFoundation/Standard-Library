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
#include <nova/io/NativeFile.h>
#include <nova/time/nova_time_Nova_Time.h>
#include <tinydir.h>
#include <nova/NativeObject.h>
#include <nova/operators/nova_operators_Nova_Equals.h>

typedef struct
{
	/* Bool includeHidden = false */ int* nova_io_Nova_File_Nova_includeHidden;
} Context1;
typedef struct
{
	/* Array<File, File, File> list */ nova_datastruct_list_Nova_Array** nova_io_Nova_File_Nova_list;
} Context2;
typedef struct
{
	/* Bool includeHidden = false */ int* nova_io_Nova_File_Nova_includeHidden;
} Context3;


nova_io_File_Extension_VTable nova_io_File_Extension_VTable_val =
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
	nova_io_Nova_File_Nova_toString,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	tinydir_file* nova_io_Nova_File_Nova_file;
	
)

char nova_io_Nova_File_Nova_testLambda76(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context);
void nova_io_Nova_File_Nova_testLambda77(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context);
char nova_io_Nova_File_Nova_testLambda78(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context);





void nova_io_Nova_File_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
	{
		nova_io_Nova_File* l1_Nova_exitLog = (nova_io_Nova_File*)nova_null;
		
		l1_Nova_exitLog = nova_io_Nova_File_1_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("log"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_static_Nova_toString(0, exceptionData, (nova_time_Nova_Time_Accessor_static_Nova_currentTimeMillis(0, exceptionData)))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))));
	}
}

nova_io_Nova_File* nova_io_Nova_File_0_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, tinydir_file* file)
{
	CCLASS_NEW(nova_io_Nova_File, this);
	this->vtable = &nova_io_File_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_File_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_File_0_Nova_this(this, exceptionData, location, file);
	}
	
	return this;
}

nova_io_Nova_File* nova_io_Nova_File_1_Nova_construct(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	CCLASS_NEW(nova_io_Nova_File, this);
	this->vtable = &nova_io_File_Extension_VTable_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_io_Nova_File_Nova_super(this, exceptionData);
	
	{
		nova_io_Nova_File_1_Nova_this(this, exceptionData, location);
	}
	
	return this;
}

void nova_io_Nova_File_Nova_destroy(nova_io_Nova_File** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	nova_Nova_Class_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_class, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_location, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_name, exceptionData);
	nova_Nova_String_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_extension, exceptionData);
	
	
	
	nova_datastruct_list_Nova_Array_Nova_destroy(&(*this)->nova_io_Nova_File_Nova_files, exceptionData);
	
	
	NOVA_FREE(*this);
}

void nova_io_Nova_File_0_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location, tinydir_file* file)
{
	this->nova_io_Nova_File_Nova_location = location;
	this->prv->nova_io_Nova_File_Nova_file = file;
}

void nova_io_Nova_File_1_Nova_this(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	this->nova_io_Nova_File_Nova_location = location;
	errno = 0;
	this->prv->nova_io_Nova_File_Nova_file = NOVA_MALLOC(sizeof(tinydir_file));
	tinydir_file_open(this->prv->nova_io_Nova_File_Nova_file, (char*)location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
}

nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_getChildFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int recursive, int includeHidden)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	nova_datastruct_list_Nova_Array* l1_Nova_directories = (nova_datastruct_list_Nova_Array*)nova_null;
	Context1 contextArg76 = 
	{
		&includeHidden,
	};
	Context3 contextArg78 = 
	{
		&includeHidden,
	};
	
	recursive = (int)(recursive == (intptr_t)nova_null ? 0 : recursive);
	includeHidden = (int)(includeHidden == (intptr_t)nova_null ? 0 : includeHidden);
	l1_Nova_list = nova_io_Nova_File_Accessorfunc_Nova_files(this, exceptionData);
	l1_Nova_directories = (nova_datastruct_list_Nova_Array*)(nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_io_Nova_File_Nova_testLambda76, this, &contextArg76));
	if (recursive)
	{
		Context2 contextArg77 = 
		{
			&l1_Nova_list,
		};
		
		nova_datastruct_list_Nova_List_virtual0_Nova_forEach((nova_datastruct_list_Nova_List*)(l1_Nova_directories), exceptionData, (nova_datastruct_list_Nova_List_closure3_Nova_func)&nova_io_Nova_File_Nova_testLambda77, this, &contextArg77);
	}
	return (nova_datastruct_list_Nova_Array*)nova_datastruct_list_Nova_List_virtual0_Nova_filter((nova_datastruct_list_Nova_List*)(l1_Nova_list), exceptionData, (nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)&nova_io_Nova_File_Nova_testLambda78, this, &contextArg78);
}

nova_Nova_String* nova_io_Nova_File_Nova_toString(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("{File \""))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)((this->nova_io_Nova_File_Nova_location)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\"}"))));
}

char nova_io_Nova_File_Nova_testLambda76(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, int _2, nova_datastruct_list_Nova_Array* _3, Context1* context)
{
	return nova_io_Nova_File_Accessorfunc_Nova_isDirectory(file, exceptionData) && ((*context->nova_io_Nova_File_Nova_includeHidden) || !nova_io_Nova_File_Accessorfunc_Nova_isHidden(file, exceptionData)) && !nova_Nova_String_Nova_equals(nova_io_Nova_File_Accessorfunc_Nova_name(file, exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("."))) && !nova_Nova_String_Nova_equals(nova_io_Nova_File_Accessorfunc_Nova_name(file, exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("..")));
}

void nova_io_Nova_File_Nova_testLambda77(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* _1, int _2, nova_datastruct_list_Nova_Array* _3, Context2* context)
{
	nova_datastruct_list_Nova_Array_Nova_addAll((nova_datastruct_list_Nova_Array*)((*context->nova_io_Nova_File_Nova_list)), exceptionData, (nova_datastruct_list_Nova_Array*)(nova_io_Nova_File_Nova_getChildFiles(_1, exceptionData, 1, (intptr_t)nova_null)));
}

char nova_io_Nova_File_Nova_testLambda78(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_io_Nova_File* file, int _2, nova_datastruct_list_Nova_Array* _3, Context3* context)
{
	return !nova_io_Nova_File_Accessorfunc_Nova_isDirectory(file, exceptionData) && ((*context->nova_io_Nova_File_Nova_includeHidden) || !nova_io_Nova_File_Accessorfunc_Nova_isHidden(file, exceptionData));
}

nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_directoryContents(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	tinydir_dir dir;
	tinydir_open(&dir, (char*)location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		printf("%s", file.name);
		if (file.is_dir) {
			printf("/");
		}
		printf("\n");
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return (nova_datastruct_list_Nova_Array*)(nova_Nova_Object*)nova_null;
}

nova_datastruct_list_Nova_Array* nova_io_Nova_File_Nova_listFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* location)
{
	nova_datastruct_list_Nova_Array* l1_Nova_names = (nova_datastruct_list_Nova_Array*)nova_null;
	char* l1_Nova_current = (char*)nova_null;
	
	l1_Nova_names = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	tinydir_dir dir;
	tinydir_open(&dir, (char*)location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	while (dir.has_next) {
		tinydir_file file;
		tinydir_readfile(&dir, &file);
		if (!file.is_dir) {
			l1_Nova_current = file.name;
			nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_names), exceptionData, (nova_Nova_Object*)(nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_current)));
			
		}
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return (nova_datastruct_list_Nova_Array*)l1_Nova_names;
}

char nova_io_Nova_File_Accessorfunc_Nova_isDirectory(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->nova_io_Nova_File_Nova_file->is_dir;
}


nova_datastruct_list_Nova_Array* nova_io_Nova_File_Accessorfunc_Nova_files(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	nova_datastruct_list_Nova_Array* l1_Nova_list = (nova_datastruct_list_Nova_Array*)nova_null;
	char* l1_Nova_current = (char*)nova_null;
	tinydir_file* l1_Nova_f = (tinydir_file*)nova_null;
	
	if (!nova_io_Nova_File_Accessorfunc_Nova_isDirectory(this, exceptionData))
	{
		THROW(nova_exception_Nova_Exception_Nova_construct(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Must be a directory to list files"))), 0);
	}
	l1_Nova_list = nova_datastruct_list_Nova_Array_0_Nova_construct(0, exceptionData);
	tinydir_dir dir;
	tinydir_open(&dir, (char*)this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data);
	while (dir.has_next) {
		l1_Nova_f = NOVA_MALLOC(sizeof(tinydir_file));
		tinydir_readfile(&dir, l1_Nova_f);
		l1_Nova_current = l1_Nova_f->name;
		nova_datastruct_list_Nova_Array_0_Nova_add((nova_datastruct_list_Nova_Array*)(l1_Nova_list), exceptionData, (nova_Nova_Object*)(nova_io_Nova_File_0_Nova_construct(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(this->nova_io_Nova_File_Nova_location), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, l1_Nova_current))), l1_Nova_f)));
		
		tinydir_next(&dir);
	}
	tinydir_close(&dir);
	return (nova_datastruct_list_Nova_Array*)l1_Nova_list;
}

int nova_io_Nova_File_Mutatorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData, int value)
{
	short l1_Nova_min = 0;
	short l1_Nova_max = 0;
	
	l1_Nova_min = (short)20;
	l1_Nova_max = (short)2048;
	if (value > l1_Nova_max || value < l1_Nova_min)
	{
		nova_io_Nova_Console_1_static_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("Invalid max number of open files: "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_static_Nova_toString(0, exceptionData, (value))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("\nValid values include "))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, (l1_Nova_min))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("-"))), exceptionData, nova_Nova_String_virtual_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Short_static_Nova_toString(0, exceptionData, (l1_Nova_max))), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("")))))))));
	}
	else
	{
		setMaxOpenFiles(value);
	}
	return value;
}

nova_Nova_String* nova_io_Nova_File_Accessorfunc_Nova_name(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_io_Nova_File_Nova_location), exceptionData, nova_Nova_String_0_Nova_lastIndexOf(this->nova_io_Nova_File_Nova_location, exceptionData, '/', (intptr_t)nova_null, (intptr_t)nova_null) + 1, (intptr_t)nova_null);
}


nova_Nova_String* nova_io_Nova_File_Accessorfunc_Nova_extension(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_virtual_Nova_substring((nova_Nova_String*)(this->nova_io_Nova_File_Nova_location), exceptionData, nova_Nova_String_0_Nova_lastIndexOf(this->nova_io_Nova_File_Nova_location, exceptionData, '.', (intptr_t)nova_null, this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_count), (intptr_t)nova_null);
}


char nova_io_Nova_File_Accessorfunc_Nova_isHidden(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return nova_Nova_String_1_Nova_startsWith(nova_io_Nova_File_Accessorfunc_Nova_name(this, exceptionData), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)(".")));
}


char nova_io_Nova_File_Accessorfunc_Nova_exists(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return access((char*)(this->nova_io_Nova_File_Nova_location->nova_Nova_String_Nova_chars->nova_datastruct_list_Nova_Array_Nova_data), F_OK) != -1;
}


int nova_io_Nova_File_Accessorfunc_Nova_maxOpenFiles(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return getMaxOpenFiles();
}

void nova_io_Nova_File_Nova_super(nova_io_Nova_File* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_io_Nova_File_Nova_class = (nova_Nova_Class*)nova_null;
	this->nova_io_Nova_File_Nova_location = (nova_Nova_String*)nova_null;
	this->nova_io_Nova_File_Nova_name = (nova_Nova_String*)nova_null;
	this->nova_io_Nova_File_Nova_extension = (nova_Nova_String*)nova_null;
	this->nova_io_Nova_File_Nova_isHidden = 0;
	this->nova_io_Nova_File_Nova_isDirectory = 0;
	this->nova_io_Nova_File_Nova_exists = 0;
	this->nova_io_Nova_File_Nova_files = (nova_datastruct_list_Nova_Array*)nova_null;
	this->nova_io_Nova_File_Nova_maxOpenFiles = 0;
}


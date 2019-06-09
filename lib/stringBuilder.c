struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g);

static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator**,struct _global_Allocator*,struct _global_Context* g);

struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator*,struct _global_Allocator*,struct _global_Context* g);
void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g);
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g);
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g);
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g);
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g);
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g);

static inline char* _global_Maybe_unwrap_rchar(char**,struct _global_Context* g);

char* _global_Maybe_unwrap_rcharByValue(char*,struct _global_Context* g);
char _global_Array_pop_char(struct _global_Array_char* _global_self, struct _global_Context* g);
void stringBuilder_StringBuilder_append(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_String stringBuilder_s, struct _global_Context* g){;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
_global_Array_reserve_char(&((stringBuilder_self)->chars),((stringBuilder_self)->chars).length+(stringBuilder_s).length,g);
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
struct _global_Range h =_global_RangeInit(0,(stringBuilder_s).length);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
for (unsigned int j = h.start; j < h.end; j++) {
unsigned int stringBuilder_i;stringBuilder_i = j;
;_global_Array_append_char(&((stringBuilder_self)->chars),*(_global_String_op_getByValue(stringBuilder_s,(unsigned int)stringBuilder_i,g)),g);
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
}
;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;}
void stringBuilder_StringBuilder_shorten(struct stringBuilder_StringBuilder* stringBuilder_self, unsigned int stringBuilder_num, struct _global_Context* g){;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
_global_Array_shorten_char(&((stringBuilder_self)->chars),stringBuilder_num,g);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;}
struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_Context* g){;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
_global_Array_append_char(&((stringBuilder_self)->chars),'\0',g);
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
struct _global_String stringBuilder_s;stringBuilder_s = _global_make_String(((stringBuilder_self)->chars).length-1,_global_Maybe_unwrap_rcharByValue(((stringBuilder_self)->chars).data,g),g);;
#line 23 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
_global_Array_pop_char(&((stringBuilder_self)->chars),g);
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
_global_log_string(stringBuilder_s,g);
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;return stringBuilder_s;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;}
static inline struct _global_String stringBuilder_StringBuilder_toStringByValue(struct stringBuilder_StringBuilder h,struct _global_Context* g){
return stringBuilder_StringBuilder_toString(&h,g);
}struct stringBuilder_StringBuilder stringBuilder_make_StringBuilder(struct _global_Context* g){;return stringBuilder_StringBuilderInit(_global_Array_charInit(0, 0, NULL, NULL));
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//stringBuilder.top"
;}
struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g){;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;struct _global_Allocator* h =_global_self;
if(h != NULL){struct _global_Allocator* _global_x = h;
return _global_x;}else if(h == NULL){return _global_value;};
#line 26 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator** j,struct _global_Allocator* k,struct _global_Context* g){
return _global_Maybe_default_rAllocatorByValue(*j,k,g);
}void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(char),g);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),g);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((char*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline char* tmpstringBuilderb(struct _global_Array_char** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* g) {
char* h =(*_global_self)->data;
if(h != NULL){char* _global_data = h;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),g);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
char* _global_newData;_global_newData = (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_char(_global_newData,_global_data,(*_global_self)->length,g);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,g);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(h == NULL){return (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));}
}
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(g)->allocator,g);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpstringBuilderb(&_global_self,&_global_newSize,&_global_allocator, g);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_char(_global_self,1,g);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_char(_global_self,(_global_self)->capacity*2,g);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((char*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g){;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(((int)(_global_self)->length)-(int)_global_num<(int)0){;
#line 38 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(21,"Shorten out of bounds"),g);
#line 39 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 38 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-_global_num;;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g){;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
char* _global_x;;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
char* h =_global_self;if(h != NULL){_global_x = h;

#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
else if(1){
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),g);
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
#line 15 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;return _global_x;
#line 17 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/maybe.top"
;}
static inline char* _global_Maybe_unwrap_rchar(char** j,struct _global_Context* g){
return _global_Maybe_unwrap_rcharByValue(*j,g);
}char _global_Array_pop_char(struct _global_Array_char* _global_self, struct _global_Context* g){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),g);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
char _global_tmp;_global_tmp = *(_global_Array_op_get_char(_global_self,(unsigned int)(_global_self)->length-1,g));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

void stringBuilderInitTypes() { 
 
_global_Array_charType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_charType.size->tag = 1;
_global_Array_charType.array_type=
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
rCharType_VTABLE_FOR_Type.type
, &_global_CharType_toString
, &_global_CharType_get_size
)
;_global_Maybe_rcharType.p_type =
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_CharType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_CharType_toString
, &_global_CharType_get_size
)
;
_global_Maybe_rcharType.nullable = 1;stringBuilder_StringBuilderType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
stringBuilder_StringBuilderType.fields = _global_StaticArray_StaticArray_S_FieldInit(
stringBuilder_StringBuilderType_fields
,1
);
stringBuilder_StringBuilderType.package = _global_StringInit(13, "stringBuilder");
stringBuilder_StringBuilderType.name = _global_StringInit(13, "StringBuilder");
stringBuilder_StringBuilderType.size = sizeof(struct stringBuilder_StringBuilder);
stringBuilder_StringBuilderType_fields[0].name = _global_StringInit(5, "chars");
stringBuilder_StringBuilderType_fields[0].offset = offsetof(struct stringBuilder_StringBuilder, chars);
stringBuilder_StringBuilderType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_char_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; }
void stringBuilderInit() { 
;
};
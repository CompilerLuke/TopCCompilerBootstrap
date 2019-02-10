struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g);

static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator**,struct _global_Allocator*,struct _global_Context* g);

struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator*,struct _global_Allocator*,struct _global_Context* g);
void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g);
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g);
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g);
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g);
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g);
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g);

static inline char* _global_Maybe_unwrap_rchar(char**,struct _global_Context* g);

char* _global_Maybe_unwrap_rcharByValue(char*,struct _global_Context* g);
void stringBuilder_StringBuilder_append(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_String stringBuilder_s, struct _global_Context* g){;
;
_global_Array_reserve_char(&((stringBuilder_self)->chars),((stringBuilder_self)->chars).length+(stringBuilder_s).length,g);
struct _global_Range h =_global_RangeInit(0,(stringBuilder_s).length);
for (unsigned int j = h.start; j < h.end; j++) {
unsigned int stringBuilder_i;stringBuilder_i = j;
;_global_Array_append_char(&((stringBuilder_self)->chars),*(_global_String_op_getByValue(stringBuilder_s,(unsigned int)stringBuilder_i,g)),g);
}
;
;}
void stringBuilder_StringBuilder_shorten(struct stringBuilder_StringBuilder* stringBuilder_self, unsigned int stringBuilder_num, struct _global_Context* g){;
;
_global_Array_shorten_char(&((stringBuilder_self)->chars),stringBuilder_num,g);
;}
struct _global_String stringBuilder_StringBuilder_toString(struct stringBuilder_StringBuilder* stringBuilder_self, struct _global_Context* g){;
struct _global_Array_char stringBuilder_chars;stringBuilder_chars = _global_Array_charInit(0, 0, NULL, NULL);;
_global_Array_reserve_char(&(stringBuilder_chars),((stringBuilder_self)->chars).length+1,g);
struct _global_Array_char h =(stringBuilder_self)->chars;
for (unsigned int j = 0;j < h.length; j++) {
char stringBuilder_c;stringBuilder_c = *_global_Array_op_get_char(&h, j, g);
;unsigned int stringBuilder_i;stringBuilder_i = j;
_global_Array_append_char(&(stringBuilder_chars),stringBuilder_c,g);
}
;
_global_Array_append_char(&(stringBuilder_chars),'\0',g);
;return _global_make_String(((stringBuilder_self)->chars).length,_global_Maybe_unwrap_rcharByValue((stringBuilder_chars).data,g),g);
;}
static inline struct _global_String stringBuilder_StringBuilder_toStringByValue(struct stringBuilder_StringBuilder k,struct _global_Context* g){
return stringBuilder_StringBuilder_toString(&k,g);
}struct stringBuilder_StringBuilder stringBuilder_make_StringBuilder(struct _global_Context* g){;return stringBuilder_StringBuilderInit(_global_Array_charInit(0, 0, NULL, NULL));
;}
struct _global_Allocator* _global_Maybe_default_rAllocatorByValue(struct _global_Allocator* _global_self, struct _global_Allocator* _global_value, struct _global_Context* g){;
;
;struct _global_Allocator* h =_global_self;
if(h != NULL){struct _global_Allocator* _global_x = h;
return _global_x;}else if(h == NULL){return _global_value;};
;}
static inline struct _global_Allocator* _global_Maybe_default_rAllocator(struct _global_Allocator** j,struct _global_Allocator* k,struct _global_Context* g){
return _global_Maybe_default_rAllocatorByValue(*j,k,g);
}void _global_memcpy_char(char* _global_target, char* _global_destination, unsigned int _global_length, struct _global_Context* g){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(char),g);
;}

static inline char* tmpstringBuilderb(struct _global_Array_char** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* g) {
char* h =(*_global_self)->data;
if(h != NULL){char* _global_data = h;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),g);
char* _global_newData;_global_newData = (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));;
_global_memcpy_char(_global_newData,_global_data,(*_global_self)->length,g);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,g);
return _global_newData;}else if(h == NULL){return (char*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(char),g));}
}
void _global_Array_reserve_char(struct _global_Array_char* _global_self, unsigned int _global_newSize, struct _global_Context* g){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(g)->allocator,g);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpstringBuilderb(&_global_self,&_global_newSize,&_global_allocator, g);;
;}
void _global_Array_append_char(struct _global_Array_char* _global_self, char _global_value, struct _global_Context* g){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_char(_global_self,1,g);
;}
else{_global_Array_reserve_char(_global_self,(_global_self)->capacity*2,g);
;};
;};
*(((_global_Maybe_unwrap_rcharByValue((_global_self)->data,g) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_shorten_char(struct _global_Array_char* _global_self, unsigned int _global_num, struct _global_Context* g){;
;
(_global_self)->length=(_global_self)->length-_global_num;;
if((_global_self)->length<0){;
_global_panic(_global_StringInit(21,"shorten out of bounds"),g);
;};
;}
char* _global_Array_op_get_char(struct _global_Array_char* _global_self, unsigned int _global_index, struct _global_Context* g){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),g);
;return (_global_Maybe_unwrap_rcharByValue((_global_self)->data,g) + (int64_t)_global_index);
;}
char* _global_Maybe_unwrap_rcharByValue(char* _global_self, struct _global_Context* g){;
char* _global_x;;
char* h =_global_self;if(h != NULL){_global_x = h;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),g);
;}
;
;return _global_x;
;}
static inline char* _global_Maybe_unwrap_rchar(char** j,struct _global_Context* g){
return _global_Maybe_unwrap_rcharByValue(*j,g);
}
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
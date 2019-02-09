void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo**,struct _global_Context* h);

struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo*,struct _global_Context* h);
void _global_memcpy_hashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo* _global_target, struct hashMap_HashMap_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h);
struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfo(struct scope_DeclInfo**,struct _global_Context* h);

struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo*,struct _global_Context* h);
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Context* h);
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* h);
void _global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo* _global_self, struct _global_Context* h);

static inline struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo**,struct _global_Context* h);

struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo*,struct _global_Context* h);
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h);
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* h);
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_scope_DeclInfo(struct _global_Context* h);
void _global_Array_append_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, struct hashMap_HashMap_scope_DeclInfo _global_value, struct _global_Context* h);
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* h);
struct hashMap_HashMap_scope_DeclInfo* _global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h);
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h);
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h);
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* h);
struct types_CompilerType scope_DeclInfo_type_of_desc(struct scope_DeclInfo* scope_self, struct _global_Context* h){;
;return (scope_self)->_type;
;}
struct scope_DeclInfo scope_make_DeclInfo(struct _global_Context* h){;return scope_DeclInfoInit(types_CompilerTypeFromStruct(types_make_Void(h),&rtypes_Void_VTABLE_FOR_types_CompilerType,rtypes_Void_VTABLE_FOR_types_CompilerType.type, &types_Void_toString, &types_Void_duck_type, &types_Void_equals, &types_Void_calc_size),0);
;}
struct scope_Scope* scope_make_Scope(struct _global_Context* h){struct _global_Array_hashMap_HashMap_scope_DeclInfo_ scope_vars;scope_vars = _global_Array_hashMap_HashMap_scope_DeclInfo_Init(0, 0, NULL, NULL);;
_global_Array_append_hashMap_HashMap_scope_DeclInfo_(&(scope_vars),hashMap_make_HashMap_scope_DeclInfo(h),h);
;return _global_box_scope_Scope(scope_ScopeInit(scope_vars),h);
;}
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* h){;
;
int scope_i;scope_i = (int)((scope_self)->vars).length-1;;
;while(scope_i>=(int)0){struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &(*(_global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(&((scope_self)->vars),(unsigned int)(unsigned int)scope_i,h)));;if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,h)){;
return &(*(hashMap_HashMap_op_get_scope_DeclInfo(scope_vars,(struct _global_String)scope_name,h)));
;
;};scope_i=scope_i-(int)1;;};
;return NULL;
;}
_Bool scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct _global_Context* h){;
;
;
_global_assert(((scope_self)->vars).length>0,_global_StringInit(20,"Missing global scope"),h);
struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &(*(_global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(&((scope_self)->vars),(unsigned int)((scope_self)->vars).length-1,h)));;
if(((scope_self)->vars).length==1){;
(scope_info)->is_global=1;;
;};
;if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,h)){;
return 1;}
else{hashMap_HashMap_insert_scope_DeclInfo(scope_vars,scope_name,*(scope_info),h);
return 0;};
;}
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h);
;}
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_DeclInfo),h);
;}

static inline struct hashMap_HashBucket_scope_DeclInfo* tmpscopeX(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct hashMap_HashBucket_scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct hashMap_HashBucket_scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct hashMap_HashBucket_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h));;
_global_memcpy_hashMap_HashBucket_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),h));}
}
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeX(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(struct hashMap_HashBucket_scope_DeclInfo* _global_self, struct _global_Context* h){;
struct hashMap_HashBucket_scope_DeclInfo* _global_x;;
struct hashMap_HashBucket_scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashBucket_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue(*k,h);
}void _global_memcpy_hashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo* _global_target, struct hashMap_HashMap_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashMap_scope_DeclInfo),h);
;}
struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfoByValue(struct scope_DeclInfo* _global_self, struct _global_Context* h){;
struct scope_DeclInfo* _global_x;;
struct scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct scope_DeclInfo* _global_Maybe_unwrap_rscope_DeclInfo(struct scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rscope_DeclInfoByValue(*k,h);
}
static inline struct scope_DeclInfo* tmpscopeY(struct _global_Array_scope_DeclInfo** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct scope_DeclInfo* _global_newData;_global_newData = (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),h));;
_global_memcpy_scope_DeclInfo(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),h));}
}
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeY(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Context* h){;return hashMap_HashBucket_scope_DeclInfoInit(_global_Array_stringInit(0, 0, NULL, NULL),_global_Array_scope_DeclInfoInit(0, 0, NULL, NULL));
;}
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,1,h);
;}
else{_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashBucket_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

static inline struct hashMap_HashMap_scope_DeclInfo* tmpscopeZ(struct _global_Array_hashMap_HashMap_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct hashMap_HashMap_scope_DeclInfo* j =(*_global_self)->data;
if(j != NULL){struct hashMap_HashMap_scope_DeclInfo* _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct hashMap_HashMap_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashMap_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashMap_scope_DeclInfo),h));;
_global_memcpy_hashMap_HashMap_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct hashMap_HashMap_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashMap_scope_DeclInfo),h));}
}
void _global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpscopeZ(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(struct hashMap_HashMap_scope_DeclInfo* _global_self, struct _global_Context* h){;
struct hashMap_HashMap_scope_DeclInfo* _global_x;;
struct hashMap_HashMap_scope_DeclInfo* j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct hashMap_HashMap_scope_DeclInfo* _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_(struct hashMap_HashMap_scope_DeclInfo** k,struct _global_Context* h){
return _global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue(*k,h);
}struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rscope_DeclInfoByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_scope_DeclInfo(_global_self,1,h);
;}
else{_global_Array_reserve_scope_DeclInfo(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rscope_DeclInfoByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_scope_DeclInfo(struct _global_Context* h){struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(0, 0, NULL, NULL);;
struct _global_Range j =_global_RangeInit(0,hashMap_default_table_size);
for (unsigned int k = j.start; k < j.end; k++) {
unsigned int hashMap_i;hashMap_i = k;
;_global_Array_append_hashMap_HashBucket_scope_DeclInfo_(&(hashMap_buckets),hashMap_make_HashBucket_scope_DeclInfo(h),h);
}
;
;return hashMap_HashMap_scope_DeclInfoInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(hashMap_buckets.data, hashMap_buckets.length));
;}
void _global_Array_append_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, struct hashMap_HashMap_scope_DeclInfo _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(_global_self,1,h);
;}
else{_global_Array_reserve_hashMap_HashMap_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* h){;
struct scope_Scope* _global_pointer;_global_pointer = (struct scope_Scope*)(_global_Allocator_alloc((h)->allocator,(uint64_t)sizeof(struct scope_Scope),h));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct hashMap_HashMap_scope_DeclInfo* _global_Array_op_get_hashMap_HashMap_scope_DeclInfo_(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* h){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),h);
;return (_global_Maybe_unwrap_rhashMap_HashMap_scope_DeclInfo_ByValue((_global_self)->data,h) + (int64_t)_global_index);
;}
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
struct _global_Array_string j =(hashMap_bucket)->keys;
for (unsigned int k = 0;k < j.length; k++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&j, k, h);
;unsigned int hashMap_i;hashMap_i = k;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,h)){;
return 1;
;
;};
}
;
;return 0;
;}
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* h){;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
struct _global_Array_string j =(hashMap_bucket)->keys;
for (unsigned int k = 0;k < j.length; k++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&j, k, h);
;unsigned int hashMap_i;hashMap_i = k;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,h)){;
return &(*(_global_Array_op_get_scope_DeclInfo(&((hashMap_bucket)->values),(unsigned int)hashMap_i,h)));
;
;};
}
;
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),h),_global_StringInit(12," in hash map"),h),h);
;return (struct scope_DeclInfo*)0;
;}
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* h){;
;
;
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,hashMap_default_table_size,h);;
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,h)));;
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,h);
_global_Array_append_scope_DeclInfo(&((hashMap_bucket)->values),hashMap_value,h);
;}

void scopeInitTypes() { 
 
_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.p_type =
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.nullable = 1;_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.size->tag = 1;
_global_Array_hashMap_HashBucket_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
; }
void scopeInit() { 
;
;
};
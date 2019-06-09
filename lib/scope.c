void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_free_string(struct _global_Array_string* _global_self, struct _global_Context* m);
void _global_Array_free_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct _global_Context* m);
void _global_memcpy_scope_ScopeBlock(struct scope_ScopeBlock* _global_target, struct scope_ScopeBlock* _global_destination, unsigned int _global_length, struct _global_Context* m);
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* m);
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* m);
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Allocator* hashMap_allocator, struct _global_Context* m);
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* m);
void hashMap_HashBucket_free_scope_DeclInfo(struct hashMap_HashBucket_scope_DeclInfo* hashMap_self, struct _global_Context* m);
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_reserve_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_newSize, struct _global_Context* m);
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* m);
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* m);
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* m);
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_size_scope_DeclInfo(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* m);
void hashMap_HashMap_free_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_Context* m);
void _global_Array_append_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct scope_ScopeBlock _global_value, struct _global_Context* m);
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* m);
struct scope_ScopeBlock* _global_Array_op_get_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_index, struct _global_Context* m);
void _global_Array_free_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m);
struct scope_ScopeBlock _global_Array_pop_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m);
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m);
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m);
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* m);
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* m);
struct scope_DeclInfo scope_make_DeclInfo(struct types_CompilerType scope__type, struct _global_Context* m){;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;return scope_DeclInfoInit(scope__type,0);
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
struct scope_ScopeBlock scope_make_ScopeBlock(struct _global_Context* m){struct hashMap_HashMap_scope_DeclInfo scope_vars;scope_vars = hashMap_make_HashMap_size_scope_DeclInfo(powf(2,3),&(_global_malloc_as_allocator),m);;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;return scope_ScopeBlockInit(scope_vars);
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
void scope_ScopeBlock_free(struct scope_ScopeBlock* scope_self, struct _global_Context* m){;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
hashMap_HashMap_free_scope_DeclInfo(&((scope_self)->vars),m);
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
struct scope_Scope* scope_make_Scope(struct _global_Context* m){struct _global_Array_scope_ScopeBlock scope_blocks;scope_blocks = _global_Array_scope_ScopeBlockInit(0, 0, NULL, NULL);;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
_global_Array_append_scope_ScopeBlock(&(scope_blocks),scope_make_ScopeBlock(m),m);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;return _global_box_scope_Scope(scope_ScopeInit(scope_blocks),m);
#line 36 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
void scope_Scope_free(struct scope_Scope* scope_self, struct _global_Context* m){;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
struct _global_Range n =_global_RangeInit(0,((scope_self)->blocks).length);
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int scope_i;scope_i = p;
;scope_ScopeBlock_free(&(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)scope_i,m))),m);
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
}
;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
_global_Array_free_scope_ScopeBlock(&((scope_self)->blocks),m);
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
void scope_Scope_push(struct scope_Scope* scope_self, struct _global_Context* m){;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
_global_Array_append_scope_ScopeBlock(&((scope_self)->blocks),scope_make_ScopeBlock(m),m);
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
void scope_Scope_pop(struct scope_Scope* scope_self, struct _global_Context* m){;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
scope_ScopeBlock_free(&(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1,m))),m);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
_global_Array_pop_scope_ScopeBlock(&((scope_self)->blocks),m);
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* m){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
struct _global_Range n =_global_RangeInit(0,((scope_self)->blocks).length);
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int scope_i;scope_i = p;
;struct hashMap_HashMap_scope_DeclInfo* scope_vars;scope_vars = &((*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1-scope_i,m))).vars);;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
if(hashMap_HashMap_contains_scope_DeclInfo(scope_vars,scope_name,m)){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
return &(*(hashMap_HashMap_op_get_scope_DeclInfo(scope_vars,(struct _global_String)scope_name,m)));
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;};
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
}
;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;return NULL;
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct ast_AST* scope_node, struct _global_Context* m){;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
_global_assert(((scope_self)->blocks).length>0,_global_StringInit(20,"Missing global scope"),m);
#line 63 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
struct scope_ScopeBlock* scope_outer_block;scope_outer_block = &(*(_global_Array_op_get_scope_ScopeBlock(&((scope_self)->blocks),(unsigned int)((scope_self)->blocks).length-1,m)));;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
(scope_info)->is_global = ((scope_self)->blocks).length==1;;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;if(hashMap_HashMap_contains_scope_DeclInfo(&((scope_outer_block)->vars),scope_name,m)){;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
return error_make_Error_rast_AST(scope_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"Var "),(scope_name),m),_global_StringInit(15," already exists"),m),m);}
else{hashMap_HashMap_insert_scope_DeclInfo(&((scope_outer_block)->vars),scope_name,*(scope_info),m);
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
return NULL;};
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;}
void _global_memcpy_hashMap_HashBucket_scope_DeclInfo_(struct hashMap_HashBucket_scope_DeclInfo* _global_target, struct hashMap_HashBucket_scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_string(struct _global_String* _global_target, struct _global_String* _global_destination, unsigned int _global_length, struct _global_Context* m){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_String),m);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
void _global_memcpy_scope_DeclInfo(struct scope_DeclInfo* _global_target, struct scope_DeclInfo* _global_destination, unsigned int _global_length, struct _global_Context* m){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_DeclInfo),m);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline struct hashMap_HashBucket_scope_DeclInfo* tmpscopeC(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct hashMap_HashBucket_scope_DeclInfo* n =(*_global_self)->data;
if(n != NULL){struct hashMap_HashBucket_scope_DeclInfo* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct hashMap_HashBucket_scope_DeclInfo* _global_newData;_global_newData = (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_hashMap_HashBucket_scope_DeclInfo_(_global_newData,_global_data,(*_global_self)->length,m);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(n == NULL){return (struct hashMap_HashBucket_scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct hashMap_HashBucket_scope_DeclInfo),m));}
}
void _global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpscopeC(&_global_self,&_global_newSize,&_global_allocator, m);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_free_string(struct _global_Array_string* _global_self, struct _global_Context* m){;
#line 127 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 128 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_String* n =(_global_self)->data;if(n != NULL){struct _global_String* _global_data = n;

#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_free((void*)_global_data,m);
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
else if(n == NULL){
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_free_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct _global_Context* m){;
#line 127 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 128 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct scope_DeclInfo* n =(_global_self)->data;if(n != NULL){struct scope_DeclInfo* _global_data = n;

#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_free((void*)_global_data,m);
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
else if(n == NULL){
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_memcpy_scope_ScopeBlock(struct scope_ScopeBlock* _global_target, struct scope_ScopeBlock* _global_destination, unsigned int _global_length, struct _global_Context* m){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct scope_ScopeBlock),m);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline struct _global_String* tmpscopeD(struct _global_Array_string** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct _global_String* n =(*_global_self)->data;
if(n != NULL){struct _global_String* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_String* _global_newData;_global_newData = (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),m));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_string(_global_newData,_global_data,(*_global_self)->length,m);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(n == NULL){return (struct _global_String*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_String),m));}
}
void _global_Array_reserve_string(struct _global_Array_string* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpscopeD(&_global_self,&_global_newSize,&_global_allocator, m);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}

static inline struct scope_DeclInfo* tmpscopeF(struct _global_Array_scope_DeclInfo** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct scope_DeclInfo* n =(*_global_self)->data;
if(n != NULL){struct scope_DeclInfo* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct scope_DeclInfo* _global_newData;_global_newData = (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),m));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_scope_DeclInfo(_global_newData,_global_data,(*_global_self)->length,m);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(n == NULL){return (struct scope_DeclInfo*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_DeclInfo),m));}
}
void _global_Array_reserve_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpscopeF(&_global_self,&_global_newSize,&_global_allocator, m);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct hashMap_HashBucket_scope_DeclInfo hashMap_make_HashBucket_scope_DeclInfo(struct _global_Allocator* hashMap_allocator, struct _global_Context* m){;
#line 24 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string hashMap_keys;hashMap_keys = _global_Array_stringInit(0, 0, NULL, NULL);;
#line 25 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_scope_DeclInfo hashMap_values;hashMap_values = _global_Array_scope_DeclInfoInit(0, 0, NULL, NULL);;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_keys).allocator = hashMap_allocator;;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_values).allocator = hashMap_allocator;;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return hashMap_HashBucket_scope_DeclInfoInit(hashMap_keys,hashMap_values);
#line 31 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
void _global_Array_append_hashMap_HashBucket_scope_DeclInfo_(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* _global_self, struct hashMap_HashBucket_scope_DeclInfo _global_value, struct _global_Context* m){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,1,m);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_hashMap_HashBucket_scope_DeclInfo_(_global_self,(_global_self)->capacity*2,m);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct hashMap_HashBucket_scope_DeclInfo*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void hashMap_HashBucket_free_scope_DeclInfo(struct hashMap_HashBucket_scope_DeclInfo* hashMap_self, struct _global_Context* m){;
#line 20 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_free_string(&((hashMap_self)->keys),m);
#line 21 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_free_scope_DeclInfo(&((hashMap_self)->values),m);
#line 22 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct hashMap_HashBucket_scope_DeclInfo* _global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* _global_self, unsigned int _global_index, struct _global_Context* m){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}

static inline struct scope_ScopeBlock* tmpscopeG(struct _global_Array_scope_ScopeBlock** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* m) {
struct scope_ScopeBlock* n =(*_global_self)->data;
if(n != NULL){struct scope_ScopeBlock* _global_data = n;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),m);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct scope_ScopeBlock* _global_newData;_global_newData = (struct scope_ScopeBlock*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_ScopeBlock),m));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_scope_ScopeBlock(_global_newData,_global_data,(*_global_self)->length,m);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,m);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(n == NULL){return (struct scope_ScopeBlock*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct scope_ScopeBlock),m));}
}
void _global_Array_reserve_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_newSize, struct _global_Context* m){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpscopeG(&_global_self,&_global_newSize,&_global_allocator, m);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct _global_String* _global_Array_op_get_string(struct _global_Array_string* _global_self, unsigned int _global_index, struct _global_Context* m){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct _global_String*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct scope_DeclInfo* _global_Array_op_get_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, unsigned int _global_index, struct _global_Context* m){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct scope_DeclInfo*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_string(struct _global_Array_string* _global_self, struct _global_String _global_value, struct _global_Context* m){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_string(_global_self,1,m);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_string(_global_self,(_global_self)->capacity*2,m);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct _global_String*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_append_scope_DeclInfo(struct _global_Array_scope_DeclInfo* _global_self, struct scope_DeclInfo _global_value, struct _global_Context* m){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_scope_DeclInfo(_global_self,1,m);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_scope_DeclInfo(_global_self,(_global_self)->capacity*2,m);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct scope_DeclInfo*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct hashMap_HashMap_scope_DeclInfo hashMap_make_HashMap_size_scope_DeclInfo(unsigned int hashMap_size, struct _global_Allocator* hashMap_allocator, struct _global_Context* m){;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ hashMap_buckets;hashMap_buckets = _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(0, 0, NULL, NULL);;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_buckets).allocator = hashMap_allocator;;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Range n =_global_RangeInit(0,hashMap_size);
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int p = n.start; p < n.end; p++) {
unsigned int hashMap_i;hashMap_i = p;
;_global_Array_append_hashMap_HashBucket_scope_DeclInfo_(&(hashMap_buckets),hashMap_make_HashBucket_scope_DeclInfo(hashMap_allocator,m),m);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return hashMap_HashMap_scope_DeclInfoInit(_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(hashMap_buckets.data, hashMap_buckets.length),0);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
void hashMap_HashMap_free_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_Context* m){;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ n =(hashMap_self)->buckets;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int p = 0;p < n.length; p++) {
struct hashMap_HashBucket_scope_DeclInfo hashMap_bucket;hashMap_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
hashMap_HashBucket_free_scope_DeclInfo(&(hashMap_bucket),m);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
void _global_Array_append_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct scope_ScopeBlock _global_value, struct _global_Context* m){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_scope_ScopeBlock(_global_self,1,m);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_scope_ScopeBlock(_global_self,(_global_self)->capacity*2,m);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((struct scope_ScopeBlock*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct scope_Scope* _global_box_scope_Scope(struct scope_Scope _global_value, struct _global_Context* m){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct scope_Scope* _global_pointer;_global_pointer = (struct scope_Scope*)(_global_Allocator_alloc((m)->allocator,(uint64_t)sizeof(struct scope_Scope),m));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}
struct scope_ScopeBlock* _global_Array_op_get_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, unsigned int _global_index, struct _global_Context* m){;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),m);
#line 34 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return ((struct scope_ScopeBlock*)(_global_self)->data + (int64_t)_global_index);
#line 35 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
void _global_Array_free_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m){;
#line 127 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(m)->allocator,m);;
#line 128 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct scope_ScopeBlock* n =(_global_self)->data;if(n != NULL){struct scope_ScopeBlock* _global_data = n;

#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_free((void*)_global_data,m);
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 131 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
else if(n == NULL){
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
#line 132 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 130 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct scope_ScopeBlock _global_Array_pop_scope_ScopeBlock(struct _global_Array_scope_ScopeBlock* _global_self, struct _global_Context* m){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),m);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct scope_ScopeBlock _global_tmp;_global_tmp = *(_global_Array_op_get_scope_ScopeBlock(_global_self,(unsigned int)(_global_self)->length-1,m));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
_Bool hashMap_HashMap_contains_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m){;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string n =(hashMap_bucket)->keys;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int p = 0;p < n.length; p++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,m)){;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
return 1;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 78 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return 0;
#line 81 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct scope_DeclInfo* hashMap_HashMap_op_get_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct _global_Context* m){;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
#line 65 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Array_string n =(hashMap_bucket)->keys;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int p = 0;p < n.length; p++) {
struct _global_String hashMap_b_key;hashMap_b_key = *_global_Array_op_get_string(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
if(_global_String_op_eqByValue(hashMap_b_key,hashMap_key,m)){;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
return &(*(_global_Array_op_get_scope_DeclInfo(&((hashMap_bucket)->values),(unsigned int)hashMap_i,m)));
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_panic(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(3,"No "),(hashMap_key),m),_global_StringInit(12," in hash map"),m),m);
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;return (struct scope_DeclInfo*)0;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* m){;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
struct error_CompilerError* error_err;error_err = _global_box_longterm_error_CompilerError(error_CompilerErrorInit(ast_AST_get_filename(error_self,m),ast_AST_get_line(error_self,m),error_mesg,ast_AST_get_column(error_self,m)),m);;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
_global_panic(error_CompilerError_toString(error_err,m),m);
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;return error_err;
#line 64 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//error.top"
;}
void hashMap_HashMap_insert_scope_DeclInfo(struct hashMap_HashMap_scope_DeclInfo* hashMap_self, struct _global_String hashMap_key, struct scope_DeclInfo hashMap_value, struct _global_Context* m){;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
if((hashMap_self)->length>((hashMap_self)->buckets).length/3*4){;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_assert(((hashMap_self)->buckets).length>0,_global_StringInit(24,"Resizing empty hash map!"),m);
#line 42 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_Allocator* hashMap_hash_map_allocator;hashMap_hash_map_allocator = _global_Maybe_default_rAllocatorByValue(((*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)0,m))).keys).allocator,(m)->allocator,m);;
#line 44 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashMap_scope_DeclInfo hashMap_new_hash;hashMap_new_hash = hashMap_make_HashMap_size_scope_DeclInfo(((hashMap_self)->buckets).length*2,hashMap_hash_map_allocator,m);;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ n =(hashMap_self)->buckets;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int p = 0;p < n.length; p++) {
struct hashMap_HashBucket_scope_DeclInfo hashMap_per_bucket;hashMap_per_bucket = *_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&n, p, m);
;unsigned int hashMap_i;hashMap_i = p;
struct _global_Range q =_global_RangeInit(0,((hashMap_per_bucket).keys).length);
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
for (unsigned int r = q.start; r < q.end; r++) {
unsigned int hashMap_c;hashMap_c = r;
;hashMap_HashMap_insert_scope_DeclInfo(&(hashMap_new_hash),*(_global_Array_op_get_string(&((hashMap_per_bucket).keys),(unsigned int)hashMap_c,m)),*(_global_Array_op_get_scope_DeclInfo(&((hashMap_per_bucket).values),(unsigned int)hashMap_c,m)),m);
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
}
;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
hashMap_HashMap_free_scope_DeclInfo(hashMap_self,m);
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
*(hashMap_self) = hashMap_new_hash;;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;};
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
unsigned int hashMap_hash;hashMap_hash = hashMap_hash_string(hashMap_key,((hashMap_self)->buckets).length,m);;
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
struct hashMap_HashBucket_scope_DeclInfo* hashMap_bucket;hashMap_bucket = &(*(_global_StaticArray_op_get_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_(&((hashMap_self)->buckets),(unsigned int)hashMap_hash,m)));;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_append_string(&((hashMap_bucket)->keys),hashMap_key,m);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
_global_Array_append_scope_DeclInfo(&((hashMap_bucket)->values),hashMap_value,m);
#line 60 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
(hashMap_self)->length = (hashMap_self)->length+1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src//hashMap.top"
;}

void scopeInitTypes() { 
 
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_stringType.size->tag = 1;
_global_Array_stringType.array_type=
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;_global_Maybe_rstringType.p_type =
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
_global_Maybe_rstringType.nullable = 1;_global_Array_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_types_CompilerTypeType.size->tag = 1;
_global_Array_types_CompilerTypeType.array_type=
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;types_Void.tag = 0;
types_String.tag = 1;
types_Bool.tag = 2;
struct _global_Case* C =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 7);
C[0].name = _global_StringInit(4, "Void");
C[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[1].name = _global_StringInit(6, "String");
C[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[2].name = _global_StringInit(4, "Bool");
C[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
C[3].name = _global_StringInit(3, "Int");
C[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
C[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; C[3].args.data[0].offset = offsetof(struct types_CompilerType_Int, field0);
C[3].args.data[1].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; C[3].args.data[1].offset = offsetof(struct types_CompilerType_Int, field1);
C[4].name = _global_StringInit(5, "Float");
C[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[4].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; C[4].args.data[0].offset = offsetof(struct types_CompilerType_Float, field0);
C[5].name = _global_StringInit(6, "Struct");
C[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[5].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_StructInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; C[5].args.data[0].offset = offsetof(struct types_CompilerType_Struct, field0);
C[6].name = _global_StringInit(4, "Func");
C[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
C[6].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; C[6].args.data[0].offset = offsetof(struct types_CompilerType_Func, field0);
types_CompilerTypeType.tag_field.name = _global_StringInit(3, "tag");

types_CompilerTypeType.tag_field.offset = offsetof(struct types_CompilerType, tag);
types_CompilerTypeType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

types_CompilerTypeType.size = sizeof(struct types_CompilerType);

types_CompilerTypeType.package = _global_StringInit(5, "types");
types_CompilerTypeType.name = _global_StringInit(12, "CompilerType");
types_CompilerTypeType.cases.data = C;
types_CompilerTypeType.cases.length = 7;
_global_Maybe_rtypes_CompilerTypeType.p_type =
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
_global_Maybe_rtypes_CompilerTypeType.nullable = 1;hashMap_HashBucket_types_CompilerTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_types_CompilerTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_types_CompilerTypeType_fields
,2
);
hashMap_HashBucket_types_CompilerTypeType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_types_CompilerTypeType.name = _global_StringInit(29, "HashBucket_types_CompilerType");
hashMap_HashBucket_types_CompilerTypeType.size = sizeof(struct hashMap_HashBucket_types_CompilerType);
hashMap_HashBucket_types_CompilerTypeType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_types_CompilerTypeType_fields[0].offset = offsetof(struct hashMap_HashBucket_types_CompilerType, keys);
hashMap_HashBucket_types_CompilerTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_types_CompilerTypeType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_types_CompilerTypeType_fields[1].offset = offsetof(struct hashMap_HashBucket_types_CompilerType, values);
hashMap_HashBucket_types_CompilerTypeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_types_CompilerType_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_types_CompilerTypeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_types_CompilerTypeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_types_CompilerTypeType_fields
,2
);
hashMap_HashMap_types_CompilerTypeType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_types_CompilerTypeType.name = _global_StringInit(26, "HashMap_types_CompilerType");
hashMap_HashMap_types_CompilerTypeType.size = sizeof(struct hashMap_HashMap_types_CompilerType);
hashMap_HashMap_types_CompilerTypeType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_types_CompilerTypeType_fields[0].offset = offsetof(struct hashMap_HashMap_types_CompilerType, buckets);
hashMap_HashMap_types_CompilerTypeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashMap_types_CompilerTypeType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_types_CompilerTypeType_fields[1].offset = offsetof(struct hashMap_HashMap_types_CompilerType, length);
hashMap_HashMap_types_CompilerTypeType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;types_StructInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
types_StructInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_StructInfoType_fields
,2
);
types_StructInfoType.package = _global_StringInit(5, "types");
types_StructInfoType.name = _global_StringInit(10, "StructInfo");
types_StructInfoType.size = sizeof(struct types_StructInfo);
types_StructInfoType_fields[0].name = _global_StringInit(4, "name");
types_StructInfoType_fields[0].offset = offsetof(struct types_StructInfo, name);
types_StructInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
types_StructInfoType_fields[1].name = _global_StringInit(6, "fields");
types_StructInfoType_fields[1].offset = offsetof(struct types_StructInfo, fields);
types_StructInfoType_fields[1].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_types_CompilerType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_types_CompilerTypeType.size->tag = 2;
_global_StaticArray_StaticArray_S_types_CompilerTypeType.array_type=
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;types_FuncPtrType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
types_FuncPtrType.fields = _global_StaticArray_StaticArray_S_FieldInit(
types_FuncPtrType_fields
,3
);
types_FuncPtrType.package = _global_StringInit(5, "types");
types_FuncPtrType.name = _global_StringInit(7, "FuncPtr");
types_FuncPtrType.size = sizeof(struct types_FuncPtr);
types_FuncPtrType_fields[0].name = _global_StringInit(4, "args");
types_FuncPtrType_fields[0].offset = offsetof(struct types_FuncPtr, args);
types_FuncPtrType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_types_CompilerType_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
types_FuncPtrType_fields[1].name = _global_StringInit(11, "return_type");
types_FuncPtrType_fields[1].offset = offsetof(struct types_FuncPtr, return_type);
types_FuncPtrType_fields[1].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
types_FuncPtrType_fields[2].name = _global_StringInit(8, "external");
types_FuncPtrType_fields[2].offset = offsetof(struct types_FuncPtr, external);
types_FuncPtrType_fields[2].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_DeclInfoType_fields
,2
);
scope_DeclInfoType.package = _global_StringInit(5, "scope");
scope_DeclInfoType.name = _global_StringInit(8, "DeclInfo");
scope_DeclInfoType.size = sizeof(struct scope_DeclInfo);
scope_DeclInfoType_fields[0].name = _global_StringInit(5, "_type");
scope_DeclInfoType_fields[0].offset = offsetof(struct scope_DeclInfo, _type);
scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
scope_DeclInfoType_fields[1].name = _global_StringInit(9, "is_global");
scope_DeclInfoType_fields[1].offset = offsetof(struct scope_DeclInfo, is_global);
scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_scope_DeclInfoType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_scope_DeclInfoType.size->tag = 1;
_global_Array_scope_DeclInfoType.array_type=
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rscope_DeclInfoType.p_type =
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rscope_DeclInfoType.nullable = 1;hashMap_HashBucket_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_scope_DeclInfoType_fields
,2
);
hashMap_HashBucket_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_scope_DeclInfoType.name = _global_StringInit(25, "HashBucket_scope_DeclInfo");
hashMap_HashBucket_scope_DeclInfoType.size = sizeof(struct hashMap_HashBucket_scope_DeclInfo);
hashMap_HashBucket_scope_DeclInfoType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, keys);
hashMap_HashBucket_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_scope_DeclInfoType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_scope_DeclInfoType_fields[1].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, values);
hashMap_HashBucket_scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashMap_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_scope_DeclInfoType_fields
,2
);
hashMap_HashMap_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_scope_DeclInfoType.name = _global_StringInit(22, "HashMap_scope_DeclInfo");
hashMap_HashMap_scope_DeclInfoType.size = sizeof(struct hashMap_HashMap_scope_DeclInfo);
hashMap_HashMap_scope_DeclInfoType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashMap_scope_DeclInfo, buckets);
hashMap_HashMap_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashMap_scope_DeclInfoType_fields[1].name = _global_StringInit(6, "length");
hashMap_HashMap_scope_DeclInfoType_fields[1].offset = offsetof(struct hashMap_HashMap_scope_DeclInfo, length);
hashMap_HashMap_scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;scope_ScopeBlockType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeBlockType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeBlockType_fields
,1
);
scope_ScopeBlockType.package = _global_StringInit(5, "scope");
scope_ScopeBlockType.name = _global_StringInit(10, "ScopeBlock");
scope_ScopeBlockType.size = sizeof(struct scope_ScopeBlock);
scope_ScopeBlockType_fields[0].name = _global_StringInit(4, "vars");
scope_ScopeBlockType_fields[0].offset = offsetof(struct scope_ScopeBlock, vars);
scope_ScopeBlockType_fields[0].field_type = 
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_scope_ScopeBlockType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_scope_ScopeBlockType.size->tag = 1;
_global_Array_scope_ScopeBlockType.array_type=
_global_TypeFromStruct(
scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rscope_ScopeBlockType.p_type =
_global_TypeFromStruct(
scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rscope_ScopeBlockType.nullable = 1;scope_ScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeType_fields
,1
);
scope_ScopeType.package = _global_StringInit(5, "scope");
scope_ScopeType.name = _global_StringInit(5, "Scope");
scope_ScopeType.size = sizeof(struct scope_Scope);
scope_ScopeType_fields[0].name = _global_StringInit(6, "blocks");
scope_ScopeType_fields[0].offset = offsetof(struct scope_Scope, blocks);
scope_ScopeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_scope_ScopeBlock_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;ast_Add.tag = 0;
ast_Mul.tag = 1;
ast_Div.tag = 2;
ast_LT.tag = 3;
ast_Sub.tag = 4;
struct _global_Case* P =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 5);
P[0].name = _global_StringInit(3, "Add");
P[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[1].name = _global_StringInit(3, "Mul");
P[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[2].name = _global_StringInit(3, "Div");
P[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[3].name = _global_StringInit(2, "LT");
P[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
P[4].name = _global_StringInit(3, "Sub");
P[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
ast_OperatorKindType.tag_field.name = _global_StringInit(3, "tag");

ast_OperatorKindType.tag_field.offset = offsetof(struct ast_OperatorKind, tag);
ast_OperatorKindType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

ast_OperatorKindType.size = sizeof(struct ast_OperatorKind);

ast_OperatorKindType.package = _global_StringInit(3, "ast");
ast_OperatorKindType.name = _global_StringInit(12, "OperatorKind");
ast_OperatorKindType.cases.data = P;
ast_OperatorKindType.cases.length = 5;
ast_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
ast_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ReadInfoType_fields
,2
);
ast_ReadInfoType.package = _global_StringInit(3, "ast");
ast_ReadInfoType.name = _global_StringInit(8, "ReadInfo");
ast_ReadInfoType.size = sizeof(struct ast_ReadInfo);
ast_ReadInfoType_fields[0].name = _global_StringInit(9, "is_global");
ast_ReadInfoType_fields[0].offset = offsetof(struct ast_ReadInfo, is_global);
ast_ReadInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;
ast_ReadInfoType_fields[1].name = _global_StringInit(4, "name");
ast_ReadInfoType_fields[1].offset = offsetof(struct ast_ReadInfo, name);
ast_ReadInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;ast_FuncInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
ast_FuncInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_FuncInfoType_fields
,2
);
ast_FuncInfoType.package = _global_StringInit(3, "ast");
ast_FuncInfoType.name = _global_StringInit(8, "FuncInfo");
ast_FuncInfoType.size = sizeof(struct ast_FuncInfo);
ast_FuncInfoType_fields[0].name = _global_StringInit(4, "name");
ast_FuncInfoType_fields[0].offset = offsetof(struct ast_FuncInfo, name);
ast_FuncInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
ast_FuncInfoType_fields[1].name = _global_StringInit(5, "_type");
ast_FuncInfoType_fields[1].offset = offsetof(struct ast_FuncInfo, _type);
ast_FuncInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
types_FuncPtr_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;ast_Root.tag = 0;
ast_FuncCall.tag = 6;
ast_CreateAssign.tag = 7;
ast_Create.tag = 8;
ast_Assign.tag = 9;
ast_If.tag = 10;
ast_Block.tag = 11;
ast_Condition.tag = 12;
ast_Else.tag = 13;
ast_While.tag = 14;
ast_Tuple.tag = 16;
struct _global_Case* by =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 19);
by[0].name = _global_StringInit(4, "Root");
by[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[1].name = _global_StringInit(3, "Int");
by[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[1].args.data[0].offset = offsetof(struct ast_Payload_Int, field0);
by[2].name = _global_StringInit(5, "Float");
by[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[2].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[2].args.data[0].offset = offsetof(struct ast_Payload_Float, field0);
by[3].name = _global_StringInit(4, "Bool");
by[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; by[3].args.data[0].offset = offsetof(struct ast_Payload_Bool, field0);
by[4].name = _global_StringInit(8, "Operator");
by[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[4].args.data[0].arg_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; by[4].args.data[0].offset = offsetof(struct ast_Payload_Operator, field0);
by[5].name = _global_StringInit(10, "Identifier");
by[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[5].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_ReadInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; by[5].args.data[0].offset = offsetof(struct ast_Payload_Identifier, field0);
by[6].name = _global_StringInit(8, "FuncCall");
by[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[7].name = _global_StringInit(12, "CreateAssign");
by[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[8].name = _global_StringInit(6, "Create");
by[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[9].name = _global_StringInit(6, "Assign");
by[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[10].name = _global_StringInit(2, "If");
by[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[11].name = _global_StringInit(5, "Block");
by[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[12].name = _global_StringInit(9, "Condition");
by[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[13].name = _global_StringInit(4, "Else");
by[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[14].name = _global_StringInit(5, "While");
by[14].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[15].name = _global_StringInit(7, "FuncDef");
by[15].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[15].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_FuncInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; by[15].args.data[0].offset = offsetof(struct ast_Payload_FuncDef, field0);
by[16].name = _global_StringInit(5, "Tuple");
by[16].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
by[17].name = _global_StringInit(7, "FuncArg");
by[17].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 2), 2);
by[17].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[17].args.data[0].offset = offsetof(struct ast_Payload_FuncArg, field0);
by[17].args.data[1].arg_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; by[17].args.data[1].offset = offsetof(struct ast_Payload_FuncArg, field1);
by[18].name = _global_StringInit(6, "String");
by[18].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
by[18].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; by[18].args.data[0].offset = offsetof(struct ast_Payload_String, field0);
ast_PayloadType.tag_field.name = _global_StringInit(3, "tag");

ast_PayloadType.tag_field.offset = offsetof(struct ast_Payload, tag);
ast_PayloadType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

ast_PayloadType.size = sizeof(struct ast_Payload);

ast_PayloadType.package = _global_StringInit(3, "ast");
ast_PayloadType.name = _global_StringInit(7, "Payload");
ast_PayloadType.cases.data = by;
ast_PayloadType.cases.length = 19;
_global_Array_rast_ASTType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rast_ASTType.size->tag = 1;
_global_Array_rast_ASTType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;ast_ASTType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
ast_ASTType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ASTType_fields
,7
);
ast_ASTType.package = _global_StringInit(3, "ast");
ast_ASTType.name = _global_StringInit(3, "AST");
ast_ASTType.size = sizeof(struct ast_AST);
ast_ASTType_fields[0].name = _global_StringInit(7, "payload");
ast_ASTType_fields[0].offset = offsetof(struct ast_AST, payload);
ast_ASTType_fields[0].field_type = 
_global_TypeFromStruct(
ast_Payload_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
ast_ASTType_fields[1].name = _global_StringInit(5, "nodes");
ast_ASTType_fields[1].offset = offsetof(struct ast_AST, nodes);
ast_ASTType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_rast_AST_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
ast_ASTType_fields[2].name = _global_StringInit(5, "_type");
ast_ASTType_fields[2].offset = offsetof(struct ast_AST, _type);
ast_ASTType_fields[2].field_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
ast_ASTType_fields[3].name = _global_StringInit(5, "owner");
ast_ASTType_fields[3].offset = offsetof(struct ast_AST, owner);
ast_ASTType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Maybe_rast_AST_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
ast_ASTType_fields[4].name = _global_StringInit(9, "_filename");
ast_ASTType_fields[4].offset = offsetof(struct ast_AST, _filename);
ast_ASTType_fields[4].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
ast_ASTType_fields[5].name = _global_StringInit(5, "_line");
ast_ASTType_fields[5].offset = offsetof(struct ast_AST, _line);
ast_ASTType_fields[5].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
ast_ASTType_fields[6].name = _global_StringInit(7, "_column");
ast_ASTType_fields[6].offset = offsetof(struct ast_AST, _column);
ast_ASTType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_rrast_ASTType.p_type =
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
_global_Maybe_rrast_ASTType.nullable = 1;_global_Maybe_rast_ASTType.p_type =
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rast_ASTType.nullable = 1;_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type.p_type =
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
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/scope.top"
;
};
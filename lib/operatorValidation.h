struct _global_Array_hashMap_HashMap_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashMap_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashMap_scope_DeclInfo_ _global_Array_hashMap_HashMap_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashMap_scope_DeclInfo* data){
struct _global_Array_hashMap_HashMap_scope_DeclInfo_ j;
j.length=length;j.capacity=capacity;j.allocator=allocator;j.data=data;return j;
};
struct _global_ArrayType _global_Array_hashMap_HashMap_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashMap_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashMap_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashMap_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashMap_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashMap_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashMap_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashMap_scope_DeclInfo_Type;struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ {
struct hashMap_HashBucket_scope_DeclInfo* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(struct hashMap_HashBucket_scope_DeclInfo* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ g;
g.data=data;g.length=length;return g;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_Array_scope_DeclInfo {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct scope_DeclInfo* data;
};
static inline struct _global_Array_scope_DeclInfo _global_Array_scope_DeclInfoInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct scope_DeclInfo* data){
struct _global_Array_scope_DeclInfo d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_ArrayType* _global_Array_scope_DeclInfo_get_type(struct _global_Array_scope_DeclInfo* self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType* _global_Array_scope_DeclInfo_get_typeByValue(struct _global_Array_scope_DeclInfo self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct scope_DeclInfo {
struct types_CompilerType _type;
_Bool is_global;
};
static inline struct scope_DeclInfo scope_DeclInfoInit(struct types_CompilerType _type,_Bool is_global){
struct scope_DeclInfo c;
c._type=_type;c.is_global=is_global;return c;
};
struct _global_StructType scope_DeclInfoType;struct _global_StructType* scope_DeclInfo_get_type(struct scope_DeclInfo* self, struct _global_Context* c){return &scope_DeclInfoType;}
struct _global_Field* scope_DeclInfoType_fields;
struct _global_PointerType _global_Maybe_rscope_DeclInfoType;struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_type(struct scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_typeByValue(struct scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct hashMap_HashBucket_scope_DeclInfo {
struct _global_Array_string keys;
struct _global_Array_scope_DeclInfo values;
};
static inline struct hashMap_HashBucket_scope_DeclInfo hashMap_HashBucket_scope_DeclInfoInit(struct _global_Array_string keys,struct _global_Array_scope_DeclInfo values){
struct hashMap_HashBucket_scope_DeclInfo f;
f.keys=keys;f.values=values;return f;
};
struct _global_StructType hashMap_HashBucket_scope_DeclInfoType;struct _global_StructType* hashMap_HashBucket_scope_DeclInfo_get_type(struct hashMap_HashBucket_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashBucket_scope_DeclInfoType;}
struct _global_Field* hashMap_HashBucket_scope_DeclInfoType_fields;
struct hashMap_HashMap_scope_DeclInfo {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets;
};
static inline struct hashMap_HashMap_scope_DeclInfo hashMap_HashMap_scope_DeclInfoInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets){
struct hashMap_HashMap_scope_DeclInfo h;
h.buckets=buckets;return h;
};
struct _global_StructType hashMap_HashMap_scope_DeclInfoType;struct _global_StructType* hashMap_HashMap_scope_DeclInfo_get_type(struct hashMap_HashMap_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashMap_scope_DeclInfoType;}
struct _global_Field* hashMap_HashMap_scope_DeclInfoType_fields;
struct _global_PointerType _global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashMap_scope_DeclInfo__get_type(struct hashMap_HashMap_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashMap_scope_DeclInfo__get_typeByValue(struct hashMap_HashMap_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type;}
struct scope_Scope {
struct _global_Array_hashMap_HashMap_scope_DeclInfo_ vars;
};
static inline struct scope_Scope scope_ScopeInit(struct _global_Array_hashMap_HashMap_scope_DeclInfo_ vars){
struct scope_Scope k;
k.vars=vars;return k;
};
struct _global_StructType scope_ScopeType;struct _global_StructType* scope_Scope_get_type(struct scope_Scope* self, struct _global_Context* c){return &scope_ScopeType;}
struct _global_Field* scope_ScopeType_fields;
struct validator_State {
struct scope_Scope* scope;
};
static inline struct validator_State validator_StateInit(struct scope_Scope* scope){
struct validator_State l;
l.scope=scope;return l;
};
struct _global_StructType validator_StateType;struct _global_StructType* validator_State_get_type(struct validator_State* self, struct _global_Context* c){return &validator_StateType;}
struct _global_Field* validator_StateType_fields;
struct _global_StaticArray_StaticArray_S_rast_AST {
struct ast_AST** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rast_AST _global_StaticArray_StaticArray_S_rast_ASTInit(struct ast_AST** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rast_AST m;
m.data=data;m.length=length;return m;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_type(struct _global_StaticArray_StaticArray_S_rast_AST* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rast_AST_get_typeByValue(struct _global_StaticArray_StaticArray_S_rast_AST self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rast_ASTType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rast_ASTType;
struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* b);

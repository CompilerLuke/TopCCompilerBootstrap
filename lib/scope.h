struct _global_PointerType _global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_type(struct hashMap_HashBucket_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct hashMap_HashBucket_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_scope_DeclInfo* data){
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;
struct types_CompilerType scope_DeclInfo_type_of_desc(struct scope_DeclInfo* scope_self, struct _global_Context* b);
struct scope_DeclInfo scope_make_DeclInfo(struct _global_Context* c);
struct scope_Scope* scope_make_Scope(struct _global_Context* d);
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* f);
_Bool scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct _global_Context* g);
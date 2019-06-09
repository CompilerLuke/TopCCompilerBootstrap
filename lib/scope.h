struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ {
struct hashMap_HashBucket_types_CompilerType* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Init(struct hashMap_HashBucket_types_CompilerType* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ g;
g.data=data;g.length=length;return g;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_Type;struct _global_Array_string {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_String* data;
};
static inline struct _global_Array_string _global_Array_stringInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_String* data){
struct _global_Array_string c;
c.length=length;c.capacity=capacity;c.allocator=allocator;c.data=data;return c;
};
struct _global_ArrayType _global_Array_stringType;struct _global_ArrayType* _global_Array_string_get_type(struct _global_Array_string* self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType* _global_Array_string_get_typeByValue(struct _global_Array_string self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType _global_Array_stringType;struct _global_PointerType _global_Maybe_rstringType;struct _global_PointerType* _global_Maybe_rstring_get_type(struct _global_String*** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_PointerType* _global_Maybe_rstring_get_typeByValue(struct _global_String** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_Array_types_CompilerType {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct types_CompilerType* data;
};
static inline struct _global_Array_types_CompilerType _global_Array_types_CompilerTypeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct types_CompilerType* data){
struct _global_Array_types_CompilerType d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
};
struct _global_ArrayType _global_Array_types_CompilerTypeType;struct _global_ArrayType* _global_Array_types_CompilerType_get_type(struct _global_Array_types_CompilerType* self, struct _global_Context* c){return &_global_Array_types_CompilerTypeType;}
struct _global_ArrayType* _global_Array_types_CompilerType_get_typeByValue(struct _global_Array_types_CompilerType self, struct _global_Context* c){return &_global_Array_types_CompilerTypeType;}
struct _global_ArrayType _global_Array_types_CompilerTypeType;struct types_CompilerType_Int {
_Bool field0;
unsigned int field1;

};struct types_CompilerType_Float {
unsigned int field0;

};struct types_CompilerType_Struct {
struct types_StructInfo* field0;

};struct types_CompilerType_Func {
struct types_FuncPtr* field0;

};union types_CompilerType_cases {
struct types_CompilerType_Int Int;
struct types_CompilerType_Float Float;
struct types_CompilerType_Struct Struct;
struct types_CompilerType_Func Func;

};
struct types_CompilerType {
union types_CompilerType_cases cases;
unsigned char tag;
};
struct types_CompilerType types_Void;
struct types_CompilerType types_String;
struct types_CompilerType types_Bool;
struct types_CompilerType types_Int(_Bool m,unsigned int n,struct _global_Context* p){
struct types_CompilerType q;
q.cases.Int.field0 = m;q.cases.Int.field1 = n;q.tag = 3;
return q;}
struct types_CompilerType types_Float(unsigned int r,struct _global_Context* s){
struct types_CompilerType t;
t.cases.Float.field0 = r;t.tag = 4;
return t;}
struct types_CompilerType types_Struct(struct types_StructInfo* v,struct _global_Context* w){
struct types_CompilerType x;
x.cases.Struct.field0 = v;x.tag = 5;
return x;}
struct types_CompilerType types_Func(struct types_FuncPtr* y,struct _global_Context* z){
struct types_CompilerType B;
B.cases.Func.field0 = y;B.tag = 6;
return B;}
struct _global_EnumType types_CompilerTypeType;struct _global_EnumType* types_CompilerType_get_type(struct types_CompilerType* self, struct _global_Context* c){return &types_CompilerTypeType;}
struct _global_EnumType* types_CompilerType_get_typeByValue(struct types_CompilerType self, struct _global_Context* c){return &types_CompilerTypeType;}
struct _global_PointerType _global_Maybe_rtypes_CompilerTypeType;struct _global_PointerType* _global_Maybe_rtypes_CompilerType_get_type(struct types_CompilerType*** self, struct _global_Context* c){return &_global_Maybe_rtypes_CompilerTypeType;}
struct _global_PointerType* _global_Maybe_rtypes_CompilerType_get_typeByValue(struct types_CompilerType** self, struct _global_Context* c){return &_global_Maybe_rtypes_CompilerTypeType;}
struct hashMap_HashBucket_types_CompilerType {
struct _global_Array_string keys;
struct _global_Array_types_CompilerType values;
};
static inline struct hashMap_HashBucket_types_CompilerType hashMap_HashBucket_types_CompilerTypeInit(struct _global_Array_string keys,struct _global_Array_types_CompilerType values){
struct hashMap_HashBucket_types_CompilerType f;
f.keys=keys;f.values=values;return f;
};
struct _global_StructType hashMap_HashBucket_types_CompilerTypeType;struct _global_StructType* hashMap_HashBucket_types_CompilerType_get_type(struct hashMap_HashBucket_types_CompilerType* self, struct _global_Context* c){return &hashMap_HashBucket_types_CompilerTypeType;}
struct _global_Field* hashMap_HashBucket_types_CompilerTypeType_fields;
struct hashMap_HashMap_types_CompilerType {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_types_CompilerType hashMap_HashMap_types_CompilerTypeInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_types_CompilerType_ buckets,unsigned int length){
struct hashMap_HashMap_types_CompilerType h;
h.buckets=buckets;h.length=length;return h;
};
struct _global_StructType hashMap_HashMap_types_CompilerTypeType;struct _global_StructType* hashMap_HashMap_types_CompilerType_get_type(struct hashMap_HashMap_types_CompilerType* self, struct _global_Context* c){return &hashMap_HashMap_types_CompilerTypeType;}
struct _global_Field* hashMap_HashMap_types_CompilerTypeType_fields;
struct types_StructInfo {
struct _global_String name;
struct hashMap_HashMap_types_CompilerType fields;
};
static inline struct types_StructInfo types_StructInfoInit(struct _global_String name,struct hashMap_HashMap_types_CompilerType fields){
struct types_StructInfo j;
j.name=name;j.fields=fields;return j;
};
struct _global_StructType types_StructInfoType;struct _global_StructType* types_StructInfo_get_type(struct types_StructInfo* self, struct _global_Context* c){return &types_StructInfoType;}
struct _global_Field* types_StructInfoType_fields;
struct _global_StaticArray_StaticArray_S_types_CompilerType {
struct types_CompilerType* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_types_CompilerType _global_StaticArray_StaticArray_S_types_CompilerTypeInit(struct types_CompilerType* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_types_CompilerType k;
k.data=data;k.length=length;return k;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_type(struct _global_StaticArray_StaticArray_S_types_CompilerType* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_types_CompilerType_get_typeByValue(struct _global_StaticArray_StaticArray_S_types_CompilerType self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_types_CompilerTypeType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_types_CompilerTypeType;struct types_FuncPtr {
struct _global_StaticArray_StaticArray_S_types_CompilerType args;
struct types_CompilerType return_type;
_Bool external;
};
static inline struct types_FuncPtr types_FuncPtrInit(struct _global_StaticArray_StaticArray_S_types_CompilerType args,struct types_CompilerType return_type,_Bool external){
struct types_FuncPtr l;
l.args=args;l.return_type=return_type;l.external=external;return l;
};
struct _global_StructType types_FuncPtrType;struct _global_StructType* types_FuncPtr_get_type(struct types_FuncPtr* self, struct _global_Context* c){return &types_FuncPtrType;}
struct _global_Field* types_FuncPtrType_fields;
struct scope_DeclInfo {
struct types_CompilerType _type;
_Bool is_global;
};
static inline struct scope_DeclInfo scope_DeclInfoInit(struct types_CompilerType _type,_Bool is_global){
struct scope_DeclInfo F;
F._type=_type;F.is_global=is_global;return F;
};
struct _global_StructType scope_DeclInfoType;struct _global_StructType* scope_DeclInfo_get_type(struct scope_DeclInfo* self, struct _global_Context* c){return &scope_DeclInfoType;}
struct _global_Field* scope_DeclInfoType_fields;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ {
struct hashMap_HashBucket_scope_DeclInfo* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Init(struct hashMap_HashBucket_scope_DeclInfo* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ J;
J.data=data;J.length=length;return J;
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
struct _global_Array_scope_DeclInfo G;
G.length=length;G.capacity=capacity;G.allocator=allocator;G.data=data;return G;
};
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_ArrayType* _global_Array_scope_DeclInfo_get_type(struct _global_Array_scope_DeclInfo* self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType* _global_Array_scope_DeclInfo_get_typeByValue(struct _global_Array_scope_DeclInfo self, struct _global_Context* c){return &_global_Array_scope_DeclInfoType;}
struct _global_ArrayType _global_Array_scope_DeclInfoType;struct _global_PointerType _global_Maybe_rscope_DeclInfoType;struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_type(struct scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct _global_PointerType* _global_Maybe_rscope_DeclInfo_get_typeByValue(struct scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rscope_DeclInfoType;}
struct hashMap_HashBucket_scope_DeclInfo {
struct _global_Array_string keys;
struct _global_Array_scope_DeclInfo values;
};
static inline struct hashMap_HashBucket_scope_DeclInfo hashMap_HashBucket_scope_DeclInfoInit(struct _global_Array_string keys,struct _global_Array_scope_DeclInfo values){
struct hashMap_HashBucket_scope_DeclInfo H;
H.keys=keys;H.values=values;return H;
};
struct _global_StructType hashMap_HashBucket_scope_DeclInfoType;struct _global_StructType* hashMap_HashBucket_scope_DeclInfo_get_type(struct hashMap_HashBucket_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashBucket_scope_DeclInfoType;}
struct _global_Field* hashMap_HashBucket_scope_DeclInfoType_fields;
struct hashMap_HashMap_scope_DeclInfo {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_scope_DeclInfo hashMap_HashMap_scope_DeclInfoInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_ buckets,unsigned int length){
struct hashMap_HashMap_scope_DeclInfo K;
K.buckets=buckets;K.length=length;return K;
};
struct _global_StructType hashMap_HashMap_scope_DeclInfoType;struct _global_StructType* hashMap_HashMap_scope_DeclInfo_get_type(struct hashMap_HashMap_scope_DeclInfo* self, struct _global_Context* c){return &hashMap_HashMap_scope_DeclInfoType;}
struct _global_Field* hashMap_HashMap_scope_DeclInfoType_fields;
struct scope_ScopeBlock {
struct hashMap_HashMap_scope_DeclInfo vars;
};
static inline struct scope_ScopeBlock scope_ScopeBlockInit(struct hashMap_HashMap_scope_DeclInfo vars){
struct scope_ScopeBlock L;
L.vars=vars;return L;
};
struct _global_StructType scope_ScopeBlockType;struct _global_StructType* scope_ScopeBlock_get_type(struct scope_ScopeBlock* self, struct _global_Context* c){return &scope_ScopeBlockType;}
struct _global_Field* scope_ScopeBlockType_fields;
struct _global_Array_scope_ScopeBlock {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct scope_ScopeBlock* data;
};
static inline struct _global_Array_scope_ScopeBlock _global_Array_scope_ScopeBlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct scope_ScopeBlock* data){
struct _global_Array_scope_ScopeBlock M;
M.length=length;M.capacity=capacity;M.allocator=allocator;M.data=data;return M;
};
struct _global_ArrayType _global_Array_scope_ScopeBlockType;struct _global_ArrayType* _global_Array_scope_ScopeBlock_get_type(struct _global_Array_scope_ScopeBlock* self, struct _global_Context* c){return &_global_Array_scope_ScopeBlockType;}
struct _global_ArrayType* _global_Array_scope_ScopeBlock_get_typeByValue(struct _global_Array_scope_ScopeBlock self, struct _global_Context* c){return &_global_Array_scope_ScopeBlockType;}
struct _global_ArrayType _global_Array_scope_ScopeBlockType;struct _global_PointerType _global_Maybe_rscope_ScopeBlockType;struct _global_PointerType* _global_Maybe_rscope_ScopeBlock_get_type(struct scope_ScopeBlock*** self, struct _global_Context* c){return &_global_Maybe_rscope_ScopeBlockType;}
struct _global_PointerType* _global_Maybe_rscope_ScopeBlock_get_typeByValue(struct scope_ScopeBlock** self, struct _global_Context* c){return &_global_Maybe_rscope_ScopeBlockType;}
struct scope_Scope {
struct _global_Array_scope_ScopeBlock blocks;
};
static inline struct scope_Scope scope_ScopeInit(struct _global_Array_scope_ScopeBlock blocks){
struct scope_Scope N;
N.blocks=blocks;return N;
};
struct _global_StructType scope_ScopeType;struct _global_StructType* scope_Scope_get_type(struct scope_Scope* self, struct _global_Context* c){return &scope_ScopeType;}
struct _global_Field* scope_ScopeType_fields;
union ast_OperatorKind_cases {

};
struct ast_OperatorKind {
union ast_OperatorKind_cases cases;
unsigned char tag;
};
struct ast_OperatorKind ast_Add;
struct ast_OperatorKind ast_Mul;
struct ast_OperatorKind ast_Div;
struct ast_OperatorKind ast_LT;
struct ast_OperatorKind ast_Sub;
struct _global_EnumType ast_OperatorKindType;struct _global_EnumType* ast_OperatorKind_get_type(struct ast_OperatorKind* self, struct _global_Context* c){return &ast_OperatorKindType;}
struct _global_EnumType* ast_OperatorKind_get_typeByValue(struct ast_OperatorKind self, struct _global_Context* c){return &ast_OperatorKindType;}
struct ast_ReadInfo {
_Bool is_global;
struct _global_String name;
};
static inline struct ast_ReadInfo ast_ReadInfoInit(_Bool is_global,struct _global_String name){
struct ast_ReadInfo R;
R.is_global=is_global;R.name=name;return R;
};
struct _global_StructType ast_ReadInfoType;struct _global_StructType* ast_ReadInfo_get_type(struct ast_ReadInfo* self, struct _global_Context* c){return &ast_ReadInfoType;}
struct _global_Field* ast_ReadInfoType_fields;
struct ast_FuncInfo {
struct _global_String name;
struct types_FuncPtr* _type;
};
static inline struct ast_FuncInfo ast_FuncInfoInit(struct _global_String name,struct types_FuncPtr* _type){
struct ast_FuncInfo S;
S.name=name;S._type=_type;return S;
};
struct _global_StructType ast_FuncInfoType;struct _global_StructType* ast_FuncInfo_get_type(struct ast_FuncInfo* self, struct _global_Context* c){return &ast_FuncInfoType;}
struct _global_Field* ast_FuncInfoType_fields;
struct ast_Payload_Int {
struct _global_String field0;

};struct ast_Payload_Float {
struct _global_String field0;

};struct ast_Payload_Bool {
_Bool field0;

};struct ast_Payload_Operator {
struct ast_OperatorKind field0;

};struct ast_Payload_Identifier {
struct ast_ReadInfo* field0;

};struct ast_Payload_FuncDef {
struct ast_FuncInfo* field0;

};struct ast_Payload_FuncArg {
struct _global_String field0;
struct types_CompilerType field1;

};struct ast_Payload_String {
struct _global_String field0;

};union ast_Payload_cases {
struct ast_Payload_Int Int;
struct ast_Payload_Float Float;
struct ast_Payload_Bool Bool;
struct ast_Payload_Operator Operator;
struct ast_Payload_Identifier Identifier;
struct ast_Payload_FuncDef FuncDef;
struct ast_Payload_FuncArg FuncArg;
struct ast_Payload_String String;

};
struct ast_Payload {
union ast_Payload_cases cases;
unsigned char tag;
};
struct ast_Payload ast_Root;
struct ast_Payload ast_Int(struct _global_String T,struct _global_Context* V){
struct ast_Payload W;
W.cases.Int.field0 = T;W.tag = 1;
return W;}
struct ast_Payload ast_Float(struct _global_String X,struct _global_Context* Y){
struct ast_Payload Z;
Z.cases.Float.field0 = X;Z.tag = 2;
return Z;}
struct ast_Payload ast_Bool(_Bool bb,struct _global_Context* bc){
struct ast_Payload bd;
bd.cases.Bool.field0 = bb;bd.tag = 3;
return bd;}
struct ast_Payload ast_Operator(struct ast_OperatorKind bf,struct _global_Context* bg){
struct ast_Payload bh;
bh.cases.Operator.field0 = bf;bh.tag = 4;
return bh;}
struct ast_Payload ast_Identifier(struct ast_ReadInfo* bj,struct _global_Context* bk){
struct ast_Payload bl;
bl.cases.Identifier.field0 = bj;bl.tag = 5;
return bl;}
struct ast_Payload ast_FuncCall;
struct ast_Payload ast_CreateAssign;
struct ast_Payload ast_Create;
struct ast_Payload ast_Assign;
struct ast_Payload ast_If;
struct ast_Payload ast_Block;
struct ast_Payload ast_Condition;
struct ast_Payload ast_Else;
struct ast_Payload ast_While;
struct ast_Payload ast_FuncDef(struct ast_FuncInfo* bm,struct _global_Context* bn){
struct ast_Payload bp;
bp.cases.FuncDef.field0 = bm;bp.tag = 15;
return bp;}
struct ast_Payload ast_Tuple;
struct ast_Payload ast_FuncArg(struct _global_String bq,struct types_CompilerType br,struct _global_Context* bs){
struct ast_Payload bt;
bt.cases.FuncArg.field0 = bq;bt.cases.FuncArg.field1 = br;bt.tag = 17;
return bt;}
struct ast_Payload ast_String(struct _global_String bv,struct _global_Context* bw){
struct ast_Payload bx;
bx.cases.String.field0 = bv;bx.tag = 18;
return bx;}
struct _global_EnumType ast_PayloadType;struct _global_EnumType* ast_Payload_get_type(struct ast_Payload* self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_EnumType* ast_Payload_get_typeByValue(struct ast_Payload self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_Array_rast_AST {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct ast_AST** data;
};
static inline struct _global_Array_rast_AST _global_Array_rast_ASTInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct ast_AST** data){
struct _global_Array_rast_AST bB;
bB.length=length;bB.capacity=capacity;bB.allocator=allocator;bB.data=data;return bB;
};
struct _global_ArrayType _global_Array_rast_ASTType;struct _global_ArrayType* _global_Array_rast_AST_get_type(struct _global_Array_rast_AST* self, struct _global_Context* c){return &_global_Array_rast_ASTType;}
struct _global_ArrayType* _global_Array_rast_AST_get_typeByValue(struct _global_Array_rast_AST self, struct _global_Context* c){return &_global_Array_rast_ASTType;}
struct _global_ArrayType _global_Array_rast_ASTType;struct ast_AST {
struct ast_Payload payload;
struct _global_Array_rast_AST nodes;
struct types_CompilerType _type;
struct ast_AST* owner;
struct _global_String _filename;
unsigned int _line;
unsigned int _column;
};
static inline struct ast_AST ast_ASTInit(struct ast_Payload payload,struct _global_Array_rast_AST nodes,struct types_CompilerType _type,struct ast_AST* owner,struct _global_String _filename,unsigned int _line,unsigned int _column){
struct ast_AST bC;
bC.payload=payload;bC.nodes=nodes;bC._type=_type;bC.owner=owner;bC._filename=_filename;bC._line=_line;bC._column=_column;return bC;
};
struct _global_StructType ast_ASTType;struct _global_StructType* ast_AST_get_type(struct ast_AST* self, struct _global_Context* c){return &ast_ASTType;}
struct _global_Field* ast_ASTType_fields;
struct _global_PointerType _global_Maybe_rrast_ASTType;struct _global_PointerType* _global_Maybe_rrast_AST_get_type(struct ast_AST**** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType* _global_Maybe_rrast_AST_get_typeByValue(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType _global_Maybe_rast_ASTType;struct _global_PointerType* _global_Maybe_rast_AST_get_type(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType* _global_Maybe_rast_AST_get_typeByValue(struct ast_AST** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType _global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_type(struct hashMap_HashBucket_scope_DeclInfo*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct hashMap_HashBucket_scope_DeclInfo** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_scope_DeclInfo* data;
};
static inline struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ _global_Array_hashMap_HashBucket_scope_DeclInfo_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_scope_DeclInfo* data){
struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ bD;
bD.length=length;bD.capacity=capacity;bD.allocator=allocator;bD.data=data;return bD;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_type(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_scope_DeclInfo__get_typeByValue(struct _global_Array_hashMap_HashBucket_scope_DeclInfo_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_scope_DeclInfo_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_scope_DeclInfo_Type;
struct scope_DeclInfo scope_make_DeclInfo(struct types_CompilerType scope__type, struct _global_Context* b);
struct scope_ScopeBlock scope_make_ScopeBlock(struct _global_Context* c);
void scope_ScopeBlock_free(struct scope_ScopeBlock* scope_self, struct _global_Context* d);
struct scope_Scope* scope_make_Scope(struct _global_Context* f);
void scope_Scope_free(struct scope_Scope* scope_self, struct _global_Context* g);
void scope_Scope_push(struct scope_Scope* scope_self, struct _global_Context* h);
void scope_Scope_pop(struct scope_Scope* scope_self, struct _global_Context* j);
struct scope_DeclInfo* scope_Scope_get_var(struct scope_Scope* scope_self, struct _global_String scope_name, struct _global_Context* k);
struct error_CompilerError* scope_Scope_create_decl(struct scope_Scope* scope_self, struct _global_String scope_name, struct scope_DeclInfo* scope_info, struct ast_AST* scope_node, struct _global_Context* l);

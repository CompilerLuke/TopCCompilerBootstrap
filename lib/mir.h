struct _global_AliasType mir_ID_Type;struct _global_Array_mir_OpCode {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_OpCode* data;
};
static inline struct _global_Array_mir_OpCode _global_Array_mir_OpCodeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_OpCode* data){
struct _global_Array_mir_OpCode bg;
bg.length=length;bg.capacity=capacity;bg.allocator=allocator;bg.data=data;return bg;
};
struct _global_ArrayType _global_Array_mir_OpCodeType;struct _global_ArrayType* _global_Array_mir_OpCode_get_type(struct _global_Array_mir_OpCode* self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType* _global_Array_mir_OpCode_get_typeByValue(struct _global_Array_mir_OpCode self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType _global_Array_mir_OpCodeType;struct mir_ReadInfo {
_Bool is_global;
struct types_CompilerType _type;
unsigned int id;
struct _global_String name;
};
static inline struct mir_ReadInfo mir_ReadInfoInit(_Bool is_global,struct types_CompilerType _type,unsigned int id,struct _global_String name){
struct mir_ReadInfo c;
c.is_global=is_global;c._type=_type;c.id=id;c.name=name;return c;
};
struct _global_StructType mir_ReadInfoType;struct _global_StructType* mir_ReadInfo_get_type(struct mir_ReadInfo* self, struct _global_Context* c){return &mir_ReadInfoType;}
struct _global_Field* mir_ReadInfoType_fields;
struct mir_OpCode_Store_i32 {
int32_t field0;

};struct mir_OpCode_Store_f32 {
float field0;

};struct mir_OpCode_Store_bool {
_Bool field0;

};struct mir_OpCode_Create {
struct mir_ReadInfo* field0;

};struct mir_OpCode_Read {
struct mir_ReadInfo* field0;

};struct mir_OpCode_Assign {
struct mir_ReadInfo* field0;

};struct mir_OpCode_FuncArg {
unsigned int field0;
struct mir_ReadInfo* field1;

};struct mir_OpCode_FuncCall {
struct types_FuncPtr* field0;

};struct mir_OpCode_FuncReturn {
struct types_CompilerType field0;

};struct mir_OpCode_CondJump {
unsigned int field0;
unsigned int field1;

};struct mir_OpCode_Jump {
unsigned int field0;

};struct mir_OpCode_StringRef {
unsigned int field0;

};struct mir_OpCode_StringDecl {
unsigned int field0;
struct _global_String field1;

};union mir_OpCode_cases {
struct mir_OpCode_Store_i32 Store_i32;
struct mir_OpCode_Store_f32 Store_f32;
struct mir_OpCode_Store_bool Store_bool;
struct mir_OpCode_Create Create;
struct mir_OpCode_Read Read;
struct mir_OpCode_Assign Assign;
struct mir_OpCode_FuncArg FuncArg;
struct mir_OpCode_FuncCall FuncCall;
struct mir_OpCode_FuncReturn FuncReturn;
struct mir_OpCode_CondJump CondJump;
struct mir_OpCode_Jump Jump;
struct mir_OpCode_StringRef StringRef;
struct mir_OpCode_StringDecl StringDecl;

};
struct mir_OpCode {
union mir_OpCode_cases cases;
unsigned char tag;
};
struct mir_OpCode mir_Add_i32;
struct mir_OpCode mir_Sub_i32;
struct mir_OpCode mir_Mul_i32;
struct mir_OpCode mir_Div_i32;
struct mir_OpCode mir_LT_i32;
struct mir_OpCode mir_Add_f32;
struct mir_OpCode mir_Sub_f32;
struct mir_OpCode mir_Mul_f32;
struct mir_OpCode mir_Div_f32;
struct mir_OpCode mir_LT_f32;
struct mir_OpCode mir_Store_i32(int32_t d,struct _global_Context* f){
struct mir_OpCode g;
g.cases.Store_i32.field0 = d;g.tag = 10;
return g;}
struct mir_OpCode mir_Store_f32(float h,struct _global_Context* j){
struct mir_OpCode k;
k.cases.Store_f32.field0 = h;k.tag = 11;
return k;}
struct mir_OpCode mir_Store_bool(_Bool l,struct _global_Context* m){
struct mir_OpCode n;
n.cases.Store_bool.field0 = l;n.tag = 12;
return n;}
struct mir_OpCode mir_Create(struct mir_ReadInfo* p,struct _global_Context* q){
struct mir_OpCode r;
r.cases.Create.field0 = p;r.tag = 13;
return r;}
struct mir_OpCode mir_Read(struct mir_ReadInfo* s,struct _global_Context* t){
struct mir_OpCode v;
v.cases.Read.field0 = s;v.tag = 14;
return v;}
struct mir_OpCode mir_Assign(struct mir_ReadInfo* w,struct _global_Context* x){
struct mir_OpCode y;
y.cases.Assign.field0 = w;y.tag = 15;
return y;}
struct mir_OpCode mir_FuncArg(unsigned int z,struct mir_ReadInfo* B,struct _global_Context* C){
struct mir_OpCode D;
D.cases.FuncArg.field0 = z;D.cases.FuncArg.field1 = B;D.tag = 16;
return D;}
struct mir_OpCode mir_FuncCall(struct types_FuncPtr* F,struct _global_Context* G){
struct mir_OpCode H;
H.cases.FuncCall.field0 = F;H.tag = 17;
return H;}
struct mir_OpCode mir_FuncReturn(struct types_CompilerType J,struct _global_Context* K){
struct mir_OpCode L;
L.cases.FuncReturn.field0 = J;L.tag = 18;
return L;}
struct mir_OpCode mir_CondJump(unsigned int M,unsigned int N,struct _global_Context* P){
struct mir_OpCode Q;
Q.cases.CondJump.field0 = M;Q.cases.CondJump.field1 = N;Q.tag = 19;
return Q;}
struct mir_OpCode mir_Jump(unsigned int R,struct _global_Context* S){
struct mir_OpCode T;
T.cases.Jump.field0 = R;T.tag = 20;
return T;}
struct mir_OpCode mir_StringRef(unsigned int V,struct _global_Context* W){
struct mir_OpCode X;
X.cases.StringRef.field0 = V;X.tag = 21;
return X;}
struct mir_OpCode mir_StringDecl(unsigned int Y,struct _global_String Z,struct _global_Context* bb){
struct mir_OpCode bc;
bc.cases.StringDecl.field0 = Y;bc.cases.StringDecl.field1 = Z;bc.tag = 22;
return bc;}
struct _global_EnumType mir_OpCodeType;struct _global_EnumType* mir_OpCode_get_type(struct mir_OpCode* self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_EnumType* mir_OpCode_get_typeByValue(struct mir_OpCode self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_Type_VTABLE rFloatType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_OpCodeType;struct _global_PointerType* _global_Maybe_rmir_OpCode_get_type(struct mir_OpCode*** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct _global_PointerType* _global_Maybe_rmir_OpCode_get_typeByValue(struct mir_OpCode** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct mir_Block {
unsigned int id;
struct _global_Array_mir_OpCode* code;
};
static inline struct mir_Block mir_BlockInit(unsigned int id,struct _global_Array_mir_OpCode* code){
struct mir_Block bh;
bh.id=id;bh.code=code;return bh;
};
struct _global_StructType mir_BlockType;struct _global_StructType* mir_Block_get_type(struct mir_Block* self, struct _global_Context* c){return &mir_BlockType;}
struct _global_Field* mir_BlockType_fields;
struct _global_Type_VTABLE rAliasType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_BlockType;struct _global_PointerType* _global_Maybe_rmir_Block_get_type(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct _global_PointerType* _global_Maybe_rmir_Block_get_typeByValue(struct mir_Block** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct mir_CFG {
unsigned int return_to;
struct mir_Block* block;
};
static inline struct mir_CFG mir_CFGInit(unsigned int return_to,struct mir_Block* block){
struct mir_CFG bj;
bj.return_to=return_to;bj.block=block;return bj;
};
struct _global_StructType mir_CFGType;struct _global_StructType* mir_CFG_get_type(struct mir_CFG* self, struct _global_Context* c){return &mir_CFGType;}
struct _global_Field* mir_CFGType_fields;
struct _global_Array_mir_CFG {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_CFG* data;
};
static inline struct _global_Array_mir_CFG _global_Array_mir_CFGInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_CFG* data){
struct _global_Array_mir_CFG bk;
bk.length=length;bk.capacity=capacity;bk.allocator=allocator;bk.data=data;return bk;
};
struct _global_ArrayType _global_Array_mir_CFGType;struct _global_ArrayType* _global_Array_mir_CFG_get_type(struct _global_Array_mir_CFG* self, struct _global_Context* c){return &_global_Array_mir_CFGType;}
struct _global_ArrayType* _global_Array_mir_CFG_get_typeByValue(struct _global_Array_mir_CFG self, struct _global_Context* c){return &_global_Array_mir_CFGType;}
struct _global_ArrayType _global_Array_mir_CFGType;struct _global_PointerType _global_Maybe_rmir_CFGType;struct _global_PointerType* _global_Maybe_rmir_CFG_get_type(struct mir_CFG*** self, struct _global_Context* c){return &_global_Maybe_rmir_CFGType;}
struct _global_PointerType* _global_Maybe_rmir_CFG_get_typeByValue(struct mir_CFG** self, struct _global_Context* c){return &_global_Maybe_rmir_CFGType;}
struct _global_Array_rmir_Block {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_rmir_Block _global_Array_rmir_BlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_rmir_Block bl;
bl.length=length;bl.capacity=capacity;bl.allocator=allocator;bl.data=data;return bl;
};
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_ArrayType* _global_Array_rmir_Block_get_type(struct _global_Array_rmir_Block* self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType* _global_Array_rmir_Block_get_typeByValue(struct _global_Array_rmir_Block self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_PointerType _global_Maybe_rrmir_BlockType;struct _global_PointerType* _global_Maybe_rrmir_Block_get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_PointerType* _global_Maybe_rrmir_Block_get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ {
struct hashMap_HashBucket_uint* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(struct hashMap_HashBucket_uint* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ bn;
bn.data=data;bn.length=length;return bn;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct hashMap_HashBucket_uint {
struct _global_Array_string keys;
struct _global_Array_uint values;
};
static inline struct hashMap_HashBucket_uint hashMap_HashBucket_uintInit(struct _global_Array_string keys,struct _global_Array_uint values){
struct hashMap_HashBucket_uint bm;
bm.keys=keys;bm.values=values;return bm;
};
struct _global_StructType hashMap_HashBucket_uintType;struct _global_StructType* hashMap_HashBucket_uint_get_type(struct hashMap_HashBucket_uint* self, struct _global_Context* c){return &hashMap_HashBucket_uintType;}
struct _global_Field* hashMap_HashBucket_uintType_fields;
struct hashMap_HashMap_uint {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets;
unsigned int length;
};
static inline struct hashMap_HashMap_uint hashMap_HashMap_uintInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets,unsigned int length){
struct hashMap_HashMap_uint bp;
bp.buckets=buckets;bp.length=length;return bp;
};
struct _global_StructType hashMap_HashMap_uintType;struct _global_StructType* hashMap_HashMap_uint_get_type(struct hashMap_HashMap_uint* self, struct _global_Context* c){return &hashMap_HashMap_uintType;}
struct _global_Field* hashMap_HashMap_uintType_fields;
struct mir_FuncScope {
unsigned int var_counter;
struct _global_Array_mir_CFG cfgs;
struct mir_Block* block;
unsigned int block_counter;
struct _global_Array_rmir_Block* all_blocks;
struct hashMap_HashMap_uint vars;
unsigned int num_args;
};
static inline struct mir_FuncScope mir_FuncScopeInit(unsigned int var_counter,struct _global_Array_mir_CFG cfgs,struct mir_Block* block,unsigned int block_counter,struct _global_Array_rmir_Block* all_blocks,struct hashMap_HashMap_uint vars,unsigned int num_args){
struct mir_FuncScope bq;
bq.var_counter=var_counter;bq.cfgs=cfgs;bq.block=block;bq.block_counter=block_counter;bq.all_blocks=all_blocks;bq.vars=vars;bq.num_args=num_args;return bq;
};
struct _global_StructType mir_FuncScopeType;struct _global_StructType* mir_FuncScope_get_type(struct mir_FuncScope* self, struct _global_Context* c){return &mir_FuncScopeType;}
struct _global_Field* mir_FuncScopeType_fields;
struct _global_Array_rmir_FuncScope {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_FuncScope** data;
};
static inline struct _global_Array_rmir_FuncScope _global_Array_rmir_FuncScopeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_FuncScope** data){
struct _global_Array_rmir_FuncScope br;
br.length=length;br.capacity=capacity;br.allocator=allocator;br.data=data;return br;
};
struct _global_ArrayType _global_Array_rmir_FuncScopeType;struct _global_ArrayType* _global_Array_rmir_FuncScope_get_type(struct _global_Array_rmir_FuncScope* self, struct _global_Context* c){return &_global_Array_rmir_FuncScopeType;}
struct _global_ArrayType* _global_Array_rmir_FuncScope_get_typeByValue(struct _global_Array_rmir_FuncScope self, struct _global_Context* c){return &_global_Array_rmir_FuncScopeType;}
struct _global_ArrayType _global_Array_rmir_FuncScopeType;struct _global_PointerType _global_Maybe_rrmir_FuncScopeType;struct _global_PointerType* _global_Maybe_rrmir_FuncScope_get_type(struct mir_FuncScope**** self, struct _global_Context* c){return &_global_Maybe_rrmir_FuncScopeType;}
struct _global_PointerType* _global_Maybe_rrmir_FuncScope_get_typeByValue(struct mir_FuncScope*** self, struct _global_Context* c){return &_global_Maybe_rrmir_FuncScopeType;}
struct _global_Array_mir_Function {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Function* data;
};
static inline struct _global_Array_mir_Function _global_Array_mir_FunctionInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Function* data){
struct _global_Array_mir_Function bv;
bv.length=length;bv.capacity=capacity;bv.allocator=allocator;bv.data=data;return bv;
};
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_ArrayType* _global_Array_mir_Function_get_type(struct _global_Array_mir_Function* self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType* _global_Array_mir_Function_get_typeByValue(struct _global_Array_mir_Function self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_StaticArray_StaticArray_S_rmir_Block {
struct mir_Block** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rmir_Block _global_StaticArray_StaticArray_S_rmir_BlockInit(struct mir_Block** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rmir_Block bs;
bs.data=data;bs.length=length;return bs;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_type(struct _global_StaticArray_StaticArray_S_rmir_Block* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_typeByValue(struct _global_StaticArray_StaticArray_S_rmir_Block self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct mir_Function {
struct _global_String name;
struct types_FuncPtr* _type;
struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks;
unsigned int id;
};
static inline struct mir_Function mir_FunctionInit(struct _global_String name,struct types_FuncPtr* _type,struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks,unsigned int id){
struct mir_Function bt;
bt.name=name;bt._type=_type;bt.all_blocks=all_blocks;bt.id=id;return bt;
};
struct _global_StructType mir_FunctionType;struct _global_StructType* mir_Function_get_type(struct mir_Function* self, struct _global_Context* c){return &mir_FunctionType;}
struct _global_Field* mir_FunctionType_fields;
struct _global_PointerType _global_Maybe_rmir_FunctionType;struct _global_PointerType* _global_Maybe_rmir_Function_get_type(struct mir_Function*** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_PointerType* _global_Maybe_rmir_Function_get_typeByValue(struct mir_Function** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct mir_Converter {
unsigned int global_var_counter;
unsigned int string_literal_counter;
struct _global_Array_rmir_FuncScope scopes;
struct _global_Array_mir_Function* functions;
};
static inline struct mir_Converter mir_ConverterInit(unsigned int global_var_counter,unsigned int string_literal_counter,struct _global_Array_rmir_FuncScope scopes,struct _global_Array_mir_Function* functions){
struct mir_Converter bw;
bw.global_var_counter=global_var_counter;bw.string_literal_counter=string_literal_counter;bw.scopes=scopes;bw.functions=functions;return bw;
};
struct _global_StructType mir_ConverterType;struct _global_StructType* mir_Converter_get_type(struct mir_Converter* self, struct _global_Context* c){return &mir_ConverterType;}
struct _global_Field* mir_ConverterType_fields;
struct _global_StaticArray_StaticArray_S_mir_Function {
struct mir_Function* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_Function _global_StaticArray_StaticArray_S_mir_FunctionInit(struct mir_Function* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_Function bx;
bx.data=data;bx.length=length;return bx;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_type(struct _global_StaticArray_StaticArray_S_mir_Function* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_Function self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct mir_Program {
struct _global_StaticArray_StaticArray_S_mir_Function functions;
};
static inline struct mir_Program mir_ProgramInit(struct _global_StaticArray_StaticArray_S_mir_Function functions){
struct mir_Program by;
by.functions=functions;return by;
};
struct _global_StructType mir_ProgramType;struct _global_StructType* mir_Program_get_type(struct mir_Program* self, struct _global_Context* c){return &mir_ProgramType;}
struct _global_Field* mir_ProgramType_fields;
struct _global_PointerType _global_Maybe_rhashMap_HashBucket_uint_Type;struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_uint__get_type(struct hashMap_HashBucket_uint*** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_uint_Type;}
struct _global_PointerType* _global_Maybe_rhashMap_HashBucket_uint__get_typeByValue(struct hashMap_HashBucket_uint** self, struct _global_Context* c){return &_global_Maybe_rhashMap_HashBucket_uint_Type;}
struct _global_Array_hashMap_HashBucket_uint_ {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct hashMap_HashBucket_uint* data;
};
static inline struct _global_Array_hashMap_HashBucket_uint_ _global_Array_hashMap_HashBucket_uint_Init(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct hashMap_HashBucket_uint* data){
struct _global_Array_hashMap_HashBucket_uint_ bz;
bz.length=length;bz.capacity=capacity;bz.allocator=allocator;bz.data=data;return bz;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_type(struct _global_Array_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_typeByValue(struct _global_Array_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;
unsigned int mir_calc_size(struct types_CompilerType mir_self, struct _global_Context* b);
struct _global_String mir_CFG_toString(struct mir_CFG* mir_self, struct _global_Context* c);

struct _global_String mir_CFG_toString(struct mir_CFG*,struct _global_Context* c);
struct mir_FuncScope* mir_Converter_push_scope(struct mir_Converter* mir_self, struct _global_Context* d);
struct mir_FuncScope* mir_Converter_pop_scope(struct mir_Converter* mir_self, struct _global_Context* f);
struct mir_FuncScope* mir_Converter_get_scope(struct mir_Converter* mir_self, struct _global_Context* g);
unsigned int mir_FuncScope_push_block(struct mir_FuncScope* mir_self, struct _global_Context* h);
void mir_FuncScope_append(struct mir_FuncScope* mir_self, struct mir_OpCode mir_code, struct _global_Context* j);
void mir_FuncScope_pop_block(struct mir_FuncScope* mir_self, struct _global_Context* k);
void mir_FuncScope_push_cfg(struct mir_FuncScope* mir_scope, struct mir_CFG mir_cfg, struct _global_Context* l);
void mir_FuncScope_add_block(struct mir_FuncScope* mir_scope, struct mir_Block* mir_block, struct _global_Context* m);
void mir_FuncScope_pop_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* n);
struct mir_CFG* mir_FuncScope_current_cfg(struct mir_FuncScope* mir_scope, struct _global_Context* p);
struct mir_OpCode mir_unsupported(struct _global_String mir_mesg, struct _global_Context* q);
_Bool mir_is_block(struct ast_AST* mir_node, struct _global_Context* r);
struct ast_AST* mir_get_rhs_of_assign(struct ast_AST* mir_node, struct _global_Context* s);
struct ast_AST* mir_get_lhs_of_assign(struct ast_AST* mir_node, struct _global_Context* t);
unsigned int mir_Converter_get_id_of_var(struct mir_Converter* mir_self, struct _global_String mir_name, struct _global_Context* v);
void mir_Converter_convert_nodes(struct mir_Converter* mir_self, struct _global_StaticArray_StaticArray_S_rast_AST mir_nodes, struct _global_Context* w);
void mir_convert_if(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* x);
void mir_convert_while(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* y);
void mir_convert_else(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* z);
void mir_convert_condition(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* B);
void mir_convert_block(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* C);
void mir_convert_func_call(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* D);
void mir_register_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* F);
void mir_convert_func_def(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_FuncInfo* mir_info, struct _global_Context* G);
void mir_convert_func_arg(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_name, struct types_CompilerType mir_typ, struct _global_Context* H);
void mir_convert_operator(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_OperatorKind mir_op_kind, struct _global_Context* J);
unsigned int mir_add_global_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* K);
unsigned int mir_add_local_var(struct mir_Converter* mir_converter, struct _global_String mir_name, struct _global_Context* L);
unsigned int mir_add_var(struct mir_Converter* mir_converter, _Bool mir_is_global, struct _global_String mir_name, struct _global_Context* M);
void mir_convert_create(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* N);
void mir_convert_assign(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* P);
void mir_convert_identifier(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct ast_ReadInfo* mir_read_info, struct _global_Context* Q);
void mir_convert_string(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_String mir_str, struct _global_Context* R);
void mir_Converter_create_decls(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* S);
void mir_Converter_convert_node(struct mir_Converter* mir_converter, struct ast_AST* mir_node, struct _global_Context* T);
struct mir_Program mir_convert(struct ast_AST* mir_node, struct _global_Context* V);

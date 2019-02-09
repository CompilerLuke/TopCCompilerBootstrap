struct _global_Array_mir_OpCode {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_OpCode* data;
};
static inline struct _global_Array_mir_OpCode _global_Array_mir_OpCodeInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_OpCode* data){
struct _global_Array_mir_OpCode P;
P.length=length;P.capacity=capacity;P.allocator=allocator;P.data=data;return P;
};
struct _global_ArrayType _global_Array_mir_OpCodeType;struct _global_ArrayType* _global_Array_mir_OpCode_get_type(struct _global_Array_mir_OpCode* self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType* _global_Array_mir_OpCode_get_typeByValue(struct _global_Array_mir_OpCode self, struct _global_Context* c){return &_global_Array_mir_OpCodeType;}
struct _global_ArrayType _global_Array_mir_OpCodeType;struct mir_ReadInfo {
_Bool is_global;
struct types_CompilerType _type;
unsigned int id;
};
static inline struct mir_ReadInfo mir_ReadInfoInit(_Bool is_global,struct types_CompilerType _type,unsigned int id){
struct mir_ReadInfo c;
c.is_global=is_global;c._type=_type;c.id=id;return c;
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

};struct mir_OpCode_FuncCall {
struct types_FuncPtr* field0;

};struct mir_OpCode_CondJump {
unsigned int field0;
unsigned int field1;

};struct mir_OpCode_Jump {
unsigned int field0;

};union mir_OpCode_cases {
struct mir_OpCode_Store_i32 Store_i32;
struct mir_OpCode_Store_f32 Store_f32;
struct mir_OpCode_Store_bool Store_bool;
struct mir_OpCode_Create Create;
struct mir_OpCode_Read Read;
struct mir_OpCode_Assign Assign;
struct mir_OpCode_FuncCall FuncCall;
struct mir_OpCode_CondJump CondJump;
struct mir_OpCode_Jump Jump;

};
struct mir_OpCode {
union mir_OpCode_cases cases;
unsigned char tag;
};
struct mir_OpCode mir_Add_i32;
struct mir_OpCode mir_Mul_i32;
struct mir_OpCode mir_Div_i32;
struct mir_OpCode mir_Add_f32;
struct mir_OpCode mir_Mul_f32;
struct mir_OpCode mir_Div_f32;
struct mir_OpCode mir_Store_i32(int32_t d,struct _global_Context* f){
struct mir_OpCode g;
g.cases.Store_i32.field0 = d;g.tag = 6;
return g;}
struct mir_OpCode mir_Store_f32(float h,struct _global_Context* j){
struct mir_OpCode k;
k.cases.Store_f32.field0 = h;k.tag = 7;
return k;}
struct mir_OpCode mir_Store_bool(_Bool l,struct _global_Context* m){
struct mir_OpCode n;
n.cases.Store_bool.field0 = l;n.tag = 8;
return n;}
struct mir_OpCode mir_Create(struct mir_ReadInfo* p,struct _global_Context* q){
struct mir_OpCode r;
r.cases.Create.field0 = p;r.tag = 9;
return r;}
struct mir_OpCode mir_Read(struct mir_ReadInfo* s,struct _global_Context* t){
struct mir_OpCode v;
v.cases.Read.field0 = s;v.tag = 10;
return v;}
struct mir_OpCode mir_Assign(struct mir_ReadInfo* w,struct _global_Context* x){
struct mir_OpCode y;
y.cases.Assign.field0 = w;y.tag = 11;
return y;}
struct mir_OpCode mir_FuncCall(struct types_FuncPtr* z,struct _global_Context* B){
struct mir_OpCode C;
C.cases.FuncCall.field0 = z;C.tag = 12;
return C;}
struct mir_OpCode mir_FuncReturn;
struct mir_OpCode mir_CondJump(unsigned int D,unsigned int F,struct _global_Context* G){
struct mir_OpCode H;
H.cases.CondJump.field0 = D;H.cases.CondJump.field1 = F;H.tag = 14;
return H;}
struct mir_OpCode mir_Jump(unsigned int J,struct _global_Context* K){
struct mir_OpCode L;
L.cases.Jump.field0 = J;L.tag = 15;
return L;}
struct _global_EnumType mir_OpCodeType;struct _global_EnumType* mir_OpCode_get_type(struct mir_OpCode* self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_EnumType* mir_OpCode_get_typeByValue(struct mir_OpCode self, struct _global_Context* c){return &mir_OpCodeType;}
struct _global_Type_VTABLE rFloatType_VTABLE_FOR_Type;struct _global_PointerType _global_Maybe_rmir_OpCodeType;struct _global_PointerType* _global_Maybe_rmir_OpCode_get_type(struct mir_OpCode*** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct _global_PointerType* _global_Maybe_rmir_OpCode_get_typeByValue(struct mir_OpCode** self, struct _global_Context* c){return &_global_Maybe_rmir_OpCodeType;}
struct mir_Block {
unsigned int id;
struct _global_Array_mir_OpCode* code;
};
static inline struct mir_Block mir_BlockInit(unsigned int id,struct _global_Array_mir_OpCode* code){
struct mir_Block Q;
Q.id=id;Q.code=code;return Q;
};
struct _global_StructType mir_BlockType;struct _global_StructType* mir_Block_get_type(struct mir_Block* self, struct _global_Context* c){return &mir_BlockType;}
struct _global_Field* mir_BlockType_fields;
struct _global_PointerType _global_Maybe_rmir_BlockType;struct _global_PointerType* _global_Maybe_rmir_Block_get_type(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct _global_PointerType* _global_Maybe_rmir_Block_get_typeByValue(struct mir_Block** self, struct _global_Context* c){return &_global_Maybe_rmir_BlockType;}
struct astToMIR_CFG {
unsigned int return_to;
struct mir_Block* block;
};
static inline struct astToMIR_CFG astToMIR_CFGInit(unsigned int return_to,struct mir_Block* block){
struct astToMIR_CFG R;
R.return_to=return_to;R.block=block;return R;
};
struct _global_StructType astToMIR_CFGType;struct _global_StructType* astToMIR_CFG_get_type(struct astToMIR_CFG* self, struct _global_Context* c){return &astToMIR_CFGType;}
struct _global_Field* astToMIR_CFGType_fields;
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ {
struct hashMap_HashBucket_uint* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Init(struct hashMap_HashBucket_uint* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ W;
W.data=data;W.length=length;return W;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_type(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint__get_typeByValue(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_Type;struct _global_Array_string {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_String* data;
};
static inline struct _global_Array_string _global_Array_stringInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_String* data){
struct _global_Array_string S;
S.length=length;S.capacity=capacity;S.allocator=allocator;S.data=data;return S;
};
struct _global_ArrayType _global_Array_stringType;struct _global_ArrayType* _global_Array_string_get_type(struct _global_Array_string* self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType* _global_Array_string_get_typeByValue(struct _global_Array_string self, struct _global_Context* c){return &_global_Array_stringType;}
struct _global_ArrayType _global_Array_stringType;struct _global_PointerType _global_Maybe_rstringType;struct _global_PointerType* _global_Maybe_rstring_get_type(struct _global_String*** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_PointerType* _global_Maybe_rstring_get_typeByValue(struct _global_String** self, struct _global_Context* c){return &_global_Maybe_rstringType;}
struct _global_Array_uint {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
unsigned int* data;
};
static inline struct _global_Array_uint _global_Array_uintInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,unsigned int* data){
struct _global_Array_uint T;
T.length=length;T.capacity=capacity;T.allocator=allocator;T.data=data;return T;
};
struct _global_ArrayType _global_Array_uintType;struct _global_ArrayType* _global_Array_uint_get_type(struct _global_Array_uint* self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType* _global_Array_uint_get_typeByValue(struct _global_Array_uint self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType _global_Array_uintType;struct _global_PointerType _global_Maybe_ruintType;struct _global_PointerType* _global_Maybe_ruint_get_type(unsigned int*** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct _global_PointerType* _global_Maybe_ruint_get_typeByValue(unsigned int** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct hashMap_HashBucket_uint {
struct _global_Array_string keys;
struct _global_Array_uint values;
};
static inline struct hashMap_HashBucket_uint hashMap_HashBucket_uintInit(struct _global_Array_string keys,struct _global_Array_uint values){
struct hashMap_HashBucket_uint V;
V.keys=keys;V.values=values;return V;
};
struct _global_StructType hashMap_HashBucket_uintType;struct _global_StructType* hashMap_HashBucket_uint_get_type(struct hashMap_HashBucket_uint* self, struct _global_Context* c){return &hashMap_HashBucket_uintType;}
struct _global_Field* hashMap_HashBucket_uintType_fields;
struct hashMap_HashMap_uint {
struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets;
};
static inline struct hashMap_HashMap_uint hashMap_HashMap_uintInit(struct _global_StaticArray_StaticArray_S_hashMap_HashBucket_uint_ buckets){
struct hashMap_HashMap_uint X;
X.buckets=buckets;return X;
};
struct _global_StructType hashMap_HashMap_uintType;struct _global_StructType* hashMap_HashMap_uint_get_type(struct hashMap_HashMap_uint* self, struct _global_Context* c){return &hashMap_HashMap_uintType;}
struct _global_Field* hashMap_HashMap_uintType_fields;
struct _global_Array_astToMIR_CFG {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct astToMIR_CFG* data;
};
static inline struct _global_Array_astToMIR_CFG _global_Array_astToMIR_CFGInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct astToMIR_CFG* data){
struct _global_Array_astToMIR_CFG Y;
Y.length=length;Y.capacity=capacity;Y.allocator=allocator;Y.data=data;return Y;
};
struct _global_ArrayType _global_Array_astToMIR_CFGType;struct _global_ArrayType* _global_Array_astToMIR_CFG_get_type(struct _global_Array_astToMIR_CFG* self, struct _global_Context* c){return &_global_Array_astToMIR_CFGType;}
struct _global_ArrayType* _global_Array_astToMIR_CFG_get_typeByValue(struct _global_Array_astToMIR_CFG self, struct _global_Context* c){return &_global_Array_astToMIR_CFGType;}
struct _global_ArrayType _global_Array_astToMIR_CFGType;struct _global_PointerType _global_Maybe_rastToMIR_CFGType;struct _global_PointerType* _global_Maybe_rastToMIR_CFG_get_type(struct astToMIR_CFG*** self, struct _global_Context* c){return &_global_Maybe_rastToMIR_CFGType;}
struct _global_PointerType* _global_Maybe_rastToMIR_CFG_get_typeByValue(struct astToMIR_CFG** self, struct _global_Context* c){return &_global_Maybe_rastToMIR_CFGType;}
struct _global_Array_rmir_Block {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Block** data;
};
static inline struct _global_Array_rmir_Block _global_Array_rmir_BlockInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Block** data){
struct _global_Array_rmir_Block Z;
Z.length=length;Z.capacity=capacity;Z.allocator=allocator;Z.data=data;return Z;
};
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_ArrayType* _global_Array_rmir_Block_get_type(struct _global_Array_rmir_Block* self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType* _global_Array_rmir_Block_get_typeByValue(struct _global_Array_rmir_Block self, struct _global_Context* c){return &_global_Array_rmir_BlockType;}
struct _global_ArrayType _global_Array_rmir_BlockType;struct _global_PointerType _global_Maybe_rrmir_BlockType;struct _global_PointerType* _global_Maybe_rrmir_Block_get_type(struct mir_Block**** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct _global_PointerType* _global_Maybe_rrmir_Block_get_typeByValue(struct mir_Block*** self, struct _global_Context* c){return &_global_Maybe_rrmir_BlockType;}
struct astToMIR_Converter {
unsigned int global_var_counter;
unsigned int var_counter;
struct hashMap_HashMap_uint vars;
struct _global_Array_astToMIR_CFG cfgs;
struct mir_Block* block;
unsigned int block_counter;
struct _global_Array_rmir_Block* all_blocks;
};
static inline struct astToMIR_Converter astToMIR_ConverterInit(unsigned int global_var_counter,unsigned int var_counter,struct hashMap_HashMap_uint vars,struct _global_Array_astToMIR_CFG cfgs,struct mir_Block* block,unsigned int block_counter,struct _global_Array_rmir_Block* all_blocks){
struct astToMIR_Converter bb;
bb.global_var_counter=global_var_counter;bb.var_counter=var_counter;bb.vars=vars;bb.cfgs=cfgs;bb.block=block;bb.block_counter=block_counter;bb.all_blocks=all_blocks;return bb;
};
struct _global_StructType astToMIR_ConverterType;struct _global_StructType* astToMIR_Converter_get_type(struct astToMIR_Converter* self, struct _global_Context* c){return &astToMIR_ConverterType;}
struct _global_Field* astToMIR_ConverterType_fields;
struct _global_StaticArray_StaticArray_S_mir_Function {
struct mir_Function* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_Function _global_StaticArray_StaticArray_S_mir_FunctionInit(struct mir_Function* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_Function bg;
bg.data=data;bg.length=length;return bg;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_type(struct _global_StaticArray_StaticArray_S_mir_Function* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_Function_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_Function self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_FunctionType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_FunctionType;struct _global_StaticArray_StaticArray_S_mir_CreateVar {
struct mir_CreateVar* data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_mir_CreateVar _global_StaticArray_StaticArray_S_mir_CreateVarInit(struct mir_CreateVar* data,unsigned int length){
struct _global_StaticArray_StaticArray_S_mir_CreateVar bc;
bc.data=data;bc.length=length;return bc;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_CreateVarType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_CreateVar_get_type(struct _global_StaticArray_StaticArray_S_mir_CreateVar* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_CreateVarType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_mir_CreateVar_get_typeByValue(struct _global_StaticArray_StaticArray_S_mir_CreateVar self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_mir_CreateVarType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_mir_CreateVarType;struct _global_StaticArray_StaticArray_S_rmir_Block {
struct mir_Block** data;
unsigned int length;
};
static inline struct _global_StaticArray_StaticArray_S_rmir_Block _global_StaticArray_StaticArray_S_rmir_BlockInit(struct mir_Block** data,unsigned int length){
struct _global_StaticArray_StaticArray_S_rmir_Block bd;
bd.data=data;bd.length=length;return bd;
};
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_type(struct _global_StaticArray_StaticArray_S_rmir_Block* self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType* _global_StaticArray_StaticArray_S_rmir_Block_get_typeByValue(struct _global_StaticArray_StaticArray_S_rmir_Block self, struct _global_Context* c){return &_global_StaticArray_StaticArray_S_rmir_BlockType;}
struct _global_ArrayType _global_StaticArray_StaticArray_S_rmir_BlockType;struct mir_Function {
struct _global_String name;
struct _global_StaticArray_StaticArray_S_mir_CreateVar args;
struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks;
};
static inline struct mir_Function mir_FunctionInit(struct _global_String name,struct _global_StaticArray_StaticArray_S_mir_CreateVar args,struct _global_StaticArray_StaticArray_S_rmir_Block all_blocks){
struct mir_Function bf;
bf.name=name;bf.args=args;bf.all_blocks=all_blocks;return bf;
};
struct _global_StructType mir_FunctionType;struct _global_StructType* mir_Function_get_type(struct mir_Function* self, struct _global_Context* c){return &mir_FunctionType;}
struct _global_Field* mir_FunctionType_fields;
struct mir_Program {
struct _global_StaticArray_StaticArray_S_mir_Function functions;
};
static inline struct mir_Program mir_ProgramInit(struct _global_StaticArray_StaticArray_S_mir_Function functions){
struct mir_Program bh;
bh.functions=functions;return bh;
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
struct _global_Array_hashMap_HashBucket_uint_ bj;
bj.length=length;bj.capacity=capacity;bj.allocator=allocator;bj.data=data;return bj;
};
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_type(struct _global_Array_hashMap_HashBucket_uint_* self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType* _global_Array_hashMap_HashBucket_uint__get_typeByValue(struct _global_Array_hashMap_HashBucket_uint_ self, struct _global_Context* c){return &_global_Array_hashMap_HashBucket_uint_Type;}
struct _global_ArrayType _global_Array_hashMap_HashBucket_uint_Type;struct _global_PointerType _global_Maybe_rmir_FunctionType;struct _global_PointerType* _global_Maybe_rmir_Function_get_type(struct mir_Function*** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_PointerType* _global_Maybe_rmir_Function_get_typeByValue(struct mir_Function** self, struct _global_Context* c){return &_global_Maybe_rmir_FunctionType;}
struct _global_Array_mir_Function {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct mir_Function* data;
};
static inline struct _global_Array_mir_Function _global_Array_mir_FunctionInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct mir_Function* data){
struct _global_Array_mir_Function bk;
bk.length=length;bk.capacity=capacity;bk.allocator=allocator;bk.data=data;return bk;
};
struct _global_ArrayType _global_Array_mir_FunctionType;struct _global_ArrayType* _global_Array_mir_Function_get_type(struct _global_Array_mir_Function* self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType* _global_Array_mir_Function_get_typeByValue(struct _global_Array_mir_Function self, struct _global_Context* c){return &_global_Array_mir_FunctionType;}
struct _global_ArrayType _global_Array_mir_FunctionType;
struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG* astToMIR_self, struct _global_Context* b);

struct _global_String astToMIR_CFG_toString(struct astToMIR_CFG*,struct _global_Context* b);
unsigned int astToMIR_Converter_push_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* c);
void astToMIR_Converter_append(struct astToMIR_Converter* astToMIR_self, struct mir_OpCode astToMIR_code, struct _global_Context* d);
void astToMIR_Converter_pop_block(struct astToMIR_Converter* astToMIR_self, struct _global_Context* f);
void astToMIR_Converter_push_cfg(struct astToMIR_Converter* astToMIR_self, struct astToMIR_CFG astToMIR_cfg, struct _global_Context* g);
void astToMIR_Converter_add_block(struct astToMIR_Converter* astToMIR_self, struct mir_Block* astToMIR_block, struct _global_Context* h);
void astToMIR_Converter_pop_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* j);
struct astToMIR_CFG* astToMIR_Converter_current_cfg(struct astToMIR_Converter* astToMIR_self, struct _global_Context* k);
struct mir_OpCode astToMIR_unsupported(struct _global_String astToMIR_mesg, struct _global_Context* l);
_Bool astToMIR_is_block(struct ast_AST* astToMIR_node, struct _global_Context* m);
void astToMIR_Converter_convert_node(struct astToMIR_Converter* astToMIR_self, struct ast_AST* astToMIR_node, struct _global_Context* n);
struct mir_Program astToMIR_convert(struct ast_AST* astToMIR_node, struct _global_Context* p);

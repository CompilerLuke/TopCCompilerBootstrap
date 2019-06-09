struct error_Thrower {
struct error_Thrower_VTABLE* vtable;
void* data;
};struct error_Thrower_VTABLE {struct _global_Type type;struct _global_String(*method_get_filename)(void*,struct _global_Context*);
unsigned int(*method_get_line)(void*,struct _global_Context*);
unsigned int(*method_get_column)(void*,struct _global_Context*);
};static inline struct error_Thrower error_ThrowerFromStruct(void* data, struct error_Thrower_VTABLE* vtable, struct _global_Type typ, struct _global_String(*d)(void*,struct _global_Context*), unsigned int(*f)(void*,struct _global_Context*), unsigned int(*g)(void*,struct _global_Context*)){ 
struct error_Thrower h;
h.data = data;h.vtable = vtable;h.vtable->method_get_filename = d;
h.vtable->method_get_line = f;
h.vtable->method_get_column = g;
h.vtable->type = typ;
return h; 
}void* error_Thrower_get_pointer_to_data(struct error_Thrower* self, struct _global_Context* context) { return self->data; }static inline struct _global_String error_Thrower_get_filename(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_filename(h->data,c);
};static inline struct _global_String error_Thrower_get_filenameByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_filename(h.data,c);
};static inline unsigned int error_Thrower_get_line(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_line(h->data,c);
};static inline unsigned int error_Thrower_get_lineByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_line(h.data,c);
};static inline unsigned int error_Thrower_get_column(struct error_Thrower* h,struct _global_Context* c){
return h->vtable->method_get_column(h->data,c);
};static inline unsigned int error_Thrower_get_columnByValue(struct error_Thrower h,struct _global_Context* c){
return h.vtable->method_get_column(h.data,c);
};struct _global_Type error_Thrower_get_type(struct error_Thrower* h, struct _global_Context* context){ return h->vtable->type; }struct _global_Type error_Thrower_get_typeByValue(struct error_Thrower h, struct _global_Context* context){ return h.vtable->type; }
struct _global_InterfaceType error_Thrower_Type;struct _global_Result_rerror_CompilerError_types_CompilerType_Ok {
struct types_CompilerType field0;

};struct _global_Result_rerror_CompilerError_types_CompilerType_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError_types_CompilerType_cases {
struct _global_Result_rerror_CompilerError_types_CompilerType_Ok Ok;
struct _global_Result_rerror_CompilerError_types_CompilerType_Error Error;

};
struct _global_Result_rerror_CompilerError_types_CompilerType {
union _global_Result_rerror_CompilerError_types_CompilerType_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError_types_CompilerType _global_Ok_rerror_CompilerError_types_CompilerType(struct types_CompilerType m,struct _global_Context* n){
struct _global_Result_rerror_CompilerError_types_CompilerType p;
p.cases.Ok.field0 = m;p.tag = 0;
return p;}
struct _global_Result_rerror_CompilerError_types_CompilerType _global_Error_rerror_CompilerError_types_CompilerType(struct error_CompilerError* q,struct _global_Context* r){
struct _global_Result_rerror_CompilerError_types_CompilerType s;
s.cases.Error.field0 = q;s.tag = 1;
return s;}
struct _global_EnumType _global_Result_rerror_CompilerError_types_CompilerTypeType;struct _global_EnumType* _global_Result_rerror_CompilerError_types_CompilerType_get_type(struct _global_Result_rerror_CompilerError_types_CompilerType* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_types_CompilerTypeType;}
struct _global_EnumType* _global_Result_rerror_CompilerError_types_CompilerType_get_typeByValue(struct _global_Result_rerror_CompilerError_types_CompilerType self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_types_CompilerTypeType;}
struct _global_Array_____operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_operatorParser_OpDesc* data;
};
static inline struct _global_Array_____operatorParser_OpDesc _global_Array_____operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_operatorParser_OpDesc* data){
struct _global_Array_____operatorParser_OpDesc y;
y.length=length;y.capacity=capacity;y.allocator=allocator;y.data=data;return y;
};
struct _global_ArrayType _global_Array_____operatorParser_OpDescType;struct _global_ArrayType* _global_Array_____operatorParser_OpDesc_get_type(struct _global_Array_____operatorParser_OpDesc* self, struct _global_Context* c){return &_global_Array_____operatorParser_OpDescType;}
struct _global_ArrayType* _global_Array_____operatorParser_OpDesc_get_typeByValue(struct _global_Array_____operatorParser_OpDesc self, struct _global_Context* c){return &_global_Array_____operatorParser_OpDescType;}
struct _global_ArrayType _global_Array_____operatorParser_OpDescType;struct _global_Array_operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct operatorParser_OpDesc* data;
};
static inline struct _global_Array_operatorParser_OpDesc _global_Array_operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct operatorParser_OpDesc* data){
struct _global_Array_operatorParser_OpDesc x;
x.length=length;x.capacity=capacity;x.allocator=allocator;x.data=data;return x;
};
struct _global_ArrayType _global_Array_operatorParser_OpDescType;struct _global_ArrayType* _global_Array_operatorParser_OpDesc_get_type(struct _global_Array_operatorParser_OpDesc* self, struct _global_Context* c){return &_global_Array_operatorParser_OpDescType;}
struct _global_ArrayType* _global_Array_operatorParser_OpDesc_get_typeByValue(struct _global_Array_operatorParser_OpDesc self, struct _global_Context* c){return &_global_Array_operatorParser_OpDescType;}
struct _global_ArrayType _global_Array_operatorParser_OpDescType;struct operatorParser_OpDesc {
_Bool unary;
unsigned int precedence;
struct ast_OperatorKind kind;
_Bool left_a;
};
static inline struct operatorParser_OpDesc operatorParser_OpDescInit(_Bool unary,unsigned int precedence,struct ast_OperatorKind kind,_Bool left_a){
struct operatorParser_OpDesc w;
w.unary=unary;w.precedence=precedence;w.kind=kind;w.left_a=left_a;return w;
};
struct _global_StructType operatorParser_OpDescType;struct _global_StructType* operatorParser_OpDesc_get_type(struct operatorParser_OpDesc* self, struct _global_Context* c){return &operatorParser_OpDescType;}
struct _global_Field* operatorParser_OpDescType_fields;
struct _global_PointerType _global_Maybe_roperatorParser_OpDescType;struct _global_PointerType* _global_Maybe_roperatorParser_OpDesc_get_type(struct operatorParser_OpDesc*** self, struct _global_Context* c){return &_global_Maybe_roperatorParser_OpDescType;}
struct _global_PointerType* _global_Maybe_roperatorParser_OpDesc_get_typeByValue(struct operatorParser_OpDesc** self, struct _global_Context* c){return &_global_Maybe_roperatorParser_OpDescType;}
struct _global_PointerType _global_Maybe_r____operatorParser_OpDescType;struct _global_PointerType* _global_Maybe_r____operatorParser_OpDesc_get_type(struct _global_Array_operatorParser_OpDesc*** self, struct _global_Context* c){return &_global_Maybe_r____operatorParser_OpDescType;}
struct _global_PointerType* _global_Maybe_r____operatorParser_OpDesc_get_typeByValue(struct _global_Array_operatorParser_OpDesc** self, struct _global_Context* c){return &_global_Maybe_r____operatorParser_OpDescType;}
struct operatorParser_OpStack {
struct _global_Array_____operatorParser_OpDesc scopes;
};
static inline struct operatorParser_OpStack operatorParser_OpStackInit(struct _global_Array_____operatorParser_OpDesc scopes){
struct operatorParser_OpStack z;
z.scopes=scopes;return z;
};
struct _global_StructType operatorParser_OpStackType;struct _global_StructType* operatorParser_OpStack_get_type(struct operatorParser_OpStack* self, struct _global_Context* c){return &operatorParser_OpStackType;}
struct _global_Field* operatorParser_OpStackType_fields;
struct _global_Array_uint {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
unsigned int* data;
};
static inline struct _global_Array_uint _global_Array_uintInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,unsigned int* data){
struct _global_Array_uint B;
B.length=length;B.capacity=capacity;B.allocator=allocator;B.data=data;return B;
};
struct _global_ArrayType _global_Array_uintType;struct _global_ArrayType* _global_Array_uint_get_type(struct _global_Array_uint* self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType* _global_Array_uint_get_typeByValue(struct _global_Array_uint self, struct _global_Context* c){return &_global_Array_uintType;}
struct _global_ArrayType _global_Array_uintType;struct _global_PointerType _global_Maybe_ruintType;struct _global_PointerType* _global_Maybe_ruint_get_type(unsigned int*** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct _global_PointerType* _global_Maybe_ruint_get_typeByValue(unsigned int** self, struct _global_Context* c){return &_global_Maybe_ruintType;}
struct parser_Parser {
struct _global_StaticArray_StaticArray_S_lexer_Token tokens;
struct _global_String filename;
struct ast_AST* current_node;
unsigned int iter;
struct operatorParser_OpStack op_stack;
struct _global_Array_uint active_index;
unsigned int num_paren;
unsigned int num_indent;
struct _global_Array_uint paren_stack;
struct _global_Array_uint indent_stack;
};
static inline struct parser_Parser parser_ParserInit(struct _global_StaticArray_StaticArray_S_lexer_Token tokens,struct _global_String filename,struct ast_AST* current_node,unsigned int iter,struct operatorParser_OpStack op_stack,struct _global_Array_uint active_index,unsigned int num_paren,unsigned int num_indent,struct _global_Array_uint paren_stack,struct _global_Array_uint indent_stack){
struct parser_Parser C;
C.tokens=tokens;C.filename=filename;C.current_node=current_node;C.iter=iter;C.op_stack=op_stack;C.active_index=active_index;C.num_paren=num_paren;C.num_indent=num_indent;C.paren_stack=paren_stack;C.indent_stack=indent_stack;return C;
};
struct _global_StructType parser_ParserType;struct _global_StructType* parser_Parser_get_type(struct parser_Parser* self, struct _global_Context* c){return &parser_ParserType;}
struct _global_Field* parser_ParserType_fields;
struct ptypes_CompilerTypectypes_CompilerTypep  { struct types_CompilerType field0;struct types_CompilerType field1; };
struct ptypes_CompilerTypectypes_CompilerTypep ptypes_CompilerTypectypes_CompilerTypepInit(struct types_CompilerType field0,struct types_CompilerType field1) {struct ptypes_CompilerTypectypes_CompilerTypep tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;
struct _global_Result_Result_E_types_CompilerType_Ok {
struct types_CompilerType field0;

};struct _global_Result_Result_E_types_CompilerType_Error {
void* field0;

};union _global_Result_Result_E_types_CompilerType_cases {
struct _global_Result_Result_E_types_CompilerType_Ok Ok;
struct _global_Result_Result_E_types_CompilerType_Error Error;

};
struct _global_Result_Result_E_types_CompilerType {
union _global_Result_Result_E_types_CompilerType_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E_types_CompilerType _global_Ok_Result_E_types_CompilerType(struct types_CompilerType D,struct _global_Context* F){
struct _global_Result_Result_E_types_CompilerType G;
G.cases.Ok.field0 = D;G.tag = 0;
return G;}
struct _global_Result_Result_E_types_CompilerType _global_Error_Result_E_types_CompilerType(void* H,struct _global_Context* J){
struct _global_Result_Result_E_types_CompilerType K;
K.cases.Error.field0 = H;K.tag = 1;
return K;}
struct _global_EnumType _global_Result_Result_E_types_CompilerTypeType;struct _global_EnumType* _global_Result_Result_E_types_CompilerType_get_type(struct _global_Result_Result_E_types_CompilerType* self, struct _global_Context* c){return &_global_Result_Result_E_types_CompilerTypeType;}
struct _global_EnumType* _global_Result_Result_E_types_CompilerType_get_typeByValue(struct _global_Result_Result_E_types_CompilerType self, struct _global_Context* c){return &_global_Result_Result_E_types_CompilerTypeType;}

struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType types_self, struct _global_Context* b);

static inline struct _global_String types_CompilerType_toString(struct types_CompilerType*,struct _global_Context* b);

struct _global_String types_CompilerType_toStringByValue(struct types_CompilerType,struct _global_Context* b);
struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* c);

static inline struct error_CompilerError* types_CompilerType_expect_equals(struct types_CompilerType*,struct types_CompilerType,struct error_Thrower,struct _global_Context* c);

struct error_CompilerError* types_CompilerType_expect_equalsByValue(struct types_CompilerType,struct types_CompilerType,struct error_Thrower,struct _global_Context* c);
_Bool types_CompilerType_equalsByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* d);

static inline _Bool types_CompilerType_equals(struct types_CompilerType*,struct types_CompilerType,struct _global_Context* d);

_Bool types_CompilerType_equalsByValue(struct types_CompilerType,struct types_CompilerType,struct _global_Context* d);
struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* f);

static inline struct error_CompilerError* types_CompilerType_duck_type(struct types_CompilerType*,struct types_CompilerType,struct error_Thrower,struct _global_Context* f);

struct error_CompilerError* types_CompilerType_duck_typeByValue(struct types_CompilerType,struct types_CompilerType,struct error_Thrower,struct _global_Context* f);
struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType types_self, struct _global_Context* g);

static inline struct types_CompilerType types_CompilerType_to_real_type(struct types_CompilerType*,struct _global_Context* g);

struct types_CompilerType types_CompilerType_to_real_typeByValue(struct types_CompilerType,struct _global_Context* g);
_Bool types_CompilerType_is_typeByValue(struct types_CompilerType types_self, struct types_CompilerType types_other, struct _global_Context* h);

static inline _Bool types_CompilerType_is_type(struct types_CompilerType*,struct types_CompilerType,struct _global_Context* h);

_Bool types_CompilerType_is_typeByValue(struct types_CompilerType,struct types_CompilerType,struct _global_Context* h);
struct _global_String types_float_to_string(unsigned int types_size, struct _global_Context* j);
struct error_CompilerError* types_float_duck_type(unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* k);
struct types_CompilerType types_make_Float(struct _global_Context* l);
struct _global_String types_int_to_string(_Bool types_unsigned, unsigned int types_size, struct _global_Context* m);
struct error_CompilerError* types_int_duck_type(_Bool types_unsigned, unsigned int types_size, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* n);
struct types_CompilerType types_make_Int(struct _global_Context* p);
struct _global_String types_FuncPtr_toString(struct types_FuncPtr* types_self, struct _global_Context* q);

struct _global_String types_FuncPtr_toString(struct types_FuncPtr*,struct _global_Context* q);
struct error_CompilerError* types_FuncPtr_duck_type(struct types_FuncPtr* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* r);
_Bool types_FuncPtr_op_eq(struct types_FuncPtr* types_self, struct types_FuncPtr* types_other, struct _global_Context* s);
unsigned int types_FuncPtr_calc_size(struct types_FuncPtr* types_self, struct _global_Context* t);
struct types_FuncPtr* types_make_FuncPtr(struct _global_Context* v);
struct _global_String types_StructInfo_toString(struct types_StructInfo* types_self, struct _global_Context* w);

struct _global_String types_StructInfo_toString(struct types_StructInfo*,struct _global_Context* w);
_Bool types_StructInfo_equals(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct _global_Context* x);
struct error_CompilerError* types_StructInfo_duck_type(struct types_StructInfo* types_self, struct types_CompilerType types_other, struct error_Thrower types_thrower, struct _global_Context* y);
_Bool types_StructInfo_op_eq(struct types_StructInfo* types_self, struct types_StructInfo* types_other, struct _global_Context* z);
struct types_StructInfo* types_make_StructInfo(struct _global_String types_name, struct hashMap_HashMap_types_CompilerType types_fields, struct _global_Context* B);
struct _global_Result_rerror_CompilerError_types_CompilerType types_parse_type(struct parser_Parser* types_self, struct _global_Context* C);

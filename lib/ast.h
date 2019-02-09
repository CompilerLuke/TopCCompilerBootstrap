union ast_OperatorKind_cases {

};
struct ast_OperatorKind {
union ast_OperatorKind_cases cases;
unsigned char tag;
};
struct ast_OperatorKind ast_Add;
struct ast_OperatorKind ast_Mul;
struct ast_OperatorKind ast_Div;
struct _global_EnumType ast_OperatorKindType;struct _global_EnumType* ast_OperatorKind_get_type(struct ast_OperatorKind* self, struct _global_Context* c){return &ast_OperatorKindType;}
struct _global_EnumType* ast_OperatorKind_get_typeByValue(struct ast_OperatorKind self, struct _global_Context* c){return &ast_OperatorKindType;}
struct ast_ReadInfo {
_Bool is_global;
struct _global_String name;
};
static inline struct ast_ReadInfo ast_ReadInfoInit(_Bool is_global,struct _global_String name){
struct ast_ReadInfo f;
f.is_global=is_global;f.name=name;return f;
};
struct _global_StructType ast_ReadInfoType;struct _global_StructType* ast_ReadInfo_get_type(struct ast_ReadInfo* self, struct _global_Context* c){return &ast_ReadInfoType;}
struct _global_Field* ast_ReadInfoType_fields;
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

};union ast_Payload_cases {
struct ast_Payload_Int Int;
struct ast_Payload_Float Float;
struct ast_Payload_Bool Bool;
struct ast_Payload_Operator Operator;
struct ast_Payload_Identifier Identifier;

};
struct ast_Payload {
union ast_Payload_cases cases;
unsigned char tag;
};
struct ast_Payload ast_Root;
struct ast_Payload ast_Int(struct _global_String g,struct _global_Context* h){
struct ast_Payload j;
j.cases.Int.field0 = g;j.tag = 1;
return j;}
struct ast_Payload ast_Float(struct _global_String k,struct _global_Context* l){
struct ast_Payload m;
m.cases.Float.field0 = k;m.tag = 2;
return m;}
struct ast_Payload ast_Bool(_Bool n,struct _global_Context* p){
struct ast_Payload q;
q.cases.Bool.field0 = n;q.tag = 3;
return q;}
struct ast_Payload ast_Operator(struct ast_OperatorKind r,struct _global_Context* s){
struct ast_Payload t;
t.cases.Operator.field0 = r;t.tag = 4;
return t;}
struct ast_Payload ast_Identifier(struct ast_ReadInfo* v,struct _global_Context* w){
struct ast_Payload x;
x.cases.Identifier.field0 = v;x.tag = 5;
return x;}
struct ast_Payload ast_FuncCall;
struct ast_Payload ast_CreateAssign;
struct ast_Payload ast_Create;
struct ast_Payload ast_Assign;
struct ast_Payload ast_If;
struct ast_Payload ast_Block;
struct ast_Payload ast_IfCondition;
struct ast_Payload ast_Else;
struct _global_EnumType ast_PayloadType;struct _global_EnumType* ast_Payload_get_type(struct ast_Payload* self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_EnumType* ast_Payload_get_typeByValue(struct ast_Payload self, struct _global_Context* c){return &ast_PayloadType;}
struct _global_Array_rast_AST {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct ast_AST** data;
};
static inline struct _global_Array_rast_AST _global_Array_rast_ASTInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct ast_AST** data){
struct _global_Array_rast_AST B;
B.length=length;B.capacity=capacity;B.allocator=allocator;B.data=data;return B;
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
struct ast_AST C;
C.payload=payload;C.nodes=nodes;C._type=_type;C.owner=owner;C._filename=_filename;C._line=_line;C._column=_column;return C;
};
struct _global_StructType ast_ASTType;struct _global_StructType* ast_AST_get_type(struct ast_AST* self, struct _global_Context* c){return &ast_ASTType;}
struct _global_Field* ast_ASTType_fields;
struct _global_PointerType _global_Maybe_rrast_ASTType;struct _global_PointerType* _global_Maybe_rrast_AST_get_type(struct ast_AST**** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType* _global_Maybe_rrast_AST_get_typeByValue(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rrast_ASTType;}
struct _global_PointerType _global_Maybe_rast_ASTType;struct _global_PointerType* _global_Maybe_rast_AST_get_type(struct ast_AST*** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}
struct _global_PointerType* _global_Maybe_rast_AST_get_typeByValue(struct ast_AST** self, struct _global_Context* c){return &_global_Maybe_rast_ASTType;}

struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* b);

struct _global_String ast_Payload_toString(struct ast_Payload*,struct _global_Context* b);
struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* c);
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* d);
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* f);
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* g);

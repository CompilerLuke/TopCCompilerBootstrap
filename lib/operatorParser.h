struct _global_Array_____operatorParser_OpDesc {
unsigned int length;
unsigned int capacity;
struct _global_Allocator* allocator;
struct _global_Array_operatorParser_OpDesc* data;
};
static inline struct _global_Array_____operatorParser_OpDesc _global_Array_____operatorParser_OpDescInit(unsigned int length,unsigned int capacity,struct _global_Allocator* allocator,struct _global_Array_operatorParser_OpDesc* data){
struct _global_Array_____operatorParser_OpDesc f;
f.length=length;f.capacity=capacity;f.allocator=allocator;f.data=data;return f;
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
struct _global_Array_operatorParser_OpDesc d;
d.length=length;d.capacity=capacity;d.allocator=allocator;d.data=data;return d;
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
struct operatorParser_OpDesc c;
c.unary=unary;c.precedence=precedence;c.kind=kind;c.left_a=left_a;return c;
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
struct operatorParser_OpStack g;
g.scopes=scopes;return g;
};
struct _global_StructType operatorParser_OpStackType;struct _global_StructType* operatorParser_OpStack_get_type(struct operatorParser_OpStack* self, struct _global_Context* c){return &operatorParser_OpStackType;}
struct _global_Field* operatorParser_OpStackType_fields;
struct parser_Parser {
struct _global_StaticArray_StaticArray_S_lexer_Token tokens;
struct _global_String filename;
struct ast_AST* current_node;
unsigned int iter;
struct operatorParser_OpStack op_stack;
unsigned int num_paren;
unsigned int num_indent;
};
static inline struct parser_Parser parser_ParserInit(struct _global_StaticArray_StaticArray_S_lexer_Token tokens,struct _global_String filename,struct ast_AST* current_node,unsigned int iter,struct operatorParser_OpStack op_stack,unsigned int num_paren,unsigned int num_indent){
struct parser_Parser h;
h.tokens=tokens;h.filename=filename;h.current_node=current_node;h.iter=iter;h.op_stack=op_stack;h.num_paren=num_paren;h.num_indent=num_indent;return h;
};
struct _global_StructType parser_ParserType;struct _global_StructType* parser_Parser_get_type(struct parser_Parser* self, struct _global_Context* c){return &parser_ParserType;}
struct _global_Field* parser_ParserType_fields;
struct _global_StaticArray_5_string {
struct _global_String data[5];
};
struct _global_StaticArray_5_string _global_StaticArray_5_stringFill_array(struct _global_String with){
struct _global_StaticArray_5_string tmp;
for (unsigned int i = 0; i < 5; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_5_string _global_StaticArray_5_stringInit(struct _global_String j,struct _global_String k,struct _global_String l,struct _global_String m,struct _global_String n){
struct _global_StaticArray_5_string tmp;
tmp.data[0] = j;
tmp.data[1] = k;
tmp.data[2] = l;
tmp.data[3] = m;
tmp.data[4] = n;
return tmp; }
struct _global_ArrayType _global_StaticArray_5_stringType;struct _global_ArrayType* _global_StaticArray_5_string_get_type(struct _global_StaticArray_5_string* self, struct _global_Context* c){return &_global_StaticArray_5_stringType;}
struct _global_ArrayType* _global_StaticArray_5_string_get_typeByValue(struct _global_StaticArray_5_string self, struct _global_Context* c){return &_global_StaticArray_5_stringType;}
struct _global_ArrayType _global_StaticArray_5_stringType;
_Bool operatorParser_is_unary(struct parser_Parser* operatorParser_self, struct _global_Context* b);
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* c);
struct operatorParser_OpStack operatorParser_make_OpStack(struct _global_Context* d);
struct error_CompilerError* operatorParser_OpStack_push_op(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct operatorParser_OpDesc operatorParser_desc, struct _global_Context* f);
struct error_CompilerError* operatorParser_parse_operator(struct parser_Parser* operatorParser_self, struct _global_String operatorParser_kind, struct _global_Context* g);
void operatorParser_OpStack_push(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* h);
struct error_CompilerError* operatorParser_OpStack_pop(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* j);

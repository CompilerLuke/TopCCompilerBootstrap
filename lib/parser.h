struct _global_Result_rerror_CompilerError_rast_AST_Ok {
struct ast_AST* field0;

};struct _global_Result_rerror_CompilerError_rast_AST_Error {
struct error_CompilerError* field0;

};union _global_Result_rerror_CompilerError_rast_AST_cases {
struct _global_Result_rerror_CompilerError_rast_AST_Ok Ok;
struct _global_Result_rerror_CompilerError_rast_AST_Error Error;

};
struct _global_Result_rerror_CompilerError_rast_AST {
union _global_Result_rerror_CompilerError_rast_AST_cases cases;
unsigned char tag;
};
struct _global_Result_rerror_CompilerError_rast_AST _global_Ok_rerror_CompilerError_rast_AST(struct ast_AST* c,struct _global_Context* d){
struct _global_Result_rerror_CompilerError_rast_AST f;
f.cases.Ok.field0 = c;f.tag = 0;
return f;}
struct _global_Result_rerror_CompilerError_rast_AST _global_Error_rerror_CompilerError_rast_AST(struct error_CompilerError* g,struct _global_Context* h){
struct _global_Result_rerror_CompilerError_rast_AST j;
j.cases.Error.field0 = g;j.tag = 1;
return j;}
struct _global_EnumType _global_Result_rerror_CompilerError_rast_ASTType;struct _global_EnumType* _global_Result_rerror_CompilerError_rast_AST_get_type(struct _global_Result_rerror_CompilerError_rast_AST* self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_rast_ASTType;}
struct _global_EnumType* _global_Result_rerror_CompilerError_rast_AST_get_typeByValue(struct _global_Result_rerror_CompilerError_rast_AST self, struct _global_Context* c){return &_global_Result_rerror_CompilerError_rast_ASTType;}
struct _global_Result_Result_E_rast_AST_Ok {
struct ast_AST* field0;

};struct _global_Result_Result_E_rast_AST_Error {
void* field0;

};union _global_Result_Result_E_rast_AST_cases {
struct _global_Result_Result_E_rast_AST_Ok Ok;
struct _global_Result_Result_E_rast_AST_Error Error;

};
struct _global_Result_Result_E_rast_AST {
union _global_Result_Result_E_rast_AST_cases cases;
unsigned char tag;
};
struct _global_Result_Result_E_rast_AST _global_Ok_Result_E_rast_AST(struct ast_AST* m,struct _global_Context* n){
struct _global_Result_Result_E_rast_AST p;
p.cases.Ok.field0 = m;p.tag = 0;
return p;}
struct _global_Result_Result_E_rast_AST _global_Error_Result_E_rast_AST(void* q,struct _global_Context* r){
struct _global_Result_Result_E_rast_AST s;
s.cases.Error.field0 = q;s.tag = 1;
return s;}
struct _global_EnumType _global_Result_Result_E_rast_ASTType;struct _global_EnumType* _global_Result_Result_E_rast_AST_get_type(struct _global_Result_Result_E_rast_AST* self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}
struct _global_EnumType* _global_Result_Result_E_rast_AST_get_typeByValue(struct _global_Result_Result_E_rast_AST self, struct _global_Context* c){return &_global_Result_Result_E_rast_ASTType;}

struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* b);
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* c);
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* d);
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* f);
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* g);
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* h);
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* j);
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* k);
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* l);
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* m);
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* n);
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, unsigned int parser_num_indent, struct _global_Context* p);
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* q);

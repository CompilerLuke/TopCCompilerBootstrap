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

struct error_CompilerError* varParser_parse_identifier(struct parser_Parser* varParser_self, struct _global_String varParser_name, struct _global_Context* b);
struct error_CompilerError* varParser_parse_create_assign(struct parser_Parser* varParser_self, struct _global_Context* c);
struct error_CompilerError* varParser_parse_assign(struct parser_Parser* varParser_self, struct _global_Context* d);
struct error_CompilerError* varParser_parse_op_assign(struct parser_Parser* varParser_self, struct ast_OperatorKind varParser_op, struct _global_Context* f);
struct error_CompilerError* varParser_parse_add_assign(struct parser_Parser* varParser_self, struct _global_Context* g);
struct error_CompilerError* varParser_parse_sub_assign(struct parser_Parser* varParser_self, struct _global_Context* h);

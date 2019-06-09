struct prast_ASTcrast_ASTp  { struct ast_AST* field0;struct ast_AST* field1; };
struct prast_ASTcrast_ASTp prast_ASTcrast_ASTpInit(struct ast_AST* field0,struct ast_AST* field1) {struct prast_ASTcrast_ASTp tuple;
tuple.field0 = field0;
tuple.field1 = field1;
return tuple; }
;

struct error_CompilerError* varValidation_validate_read(struct validator_State* varValidation_state, struct ast_ReadInfo* varValidation_read_info, struct ast_AST* varValidation_node, struct _global_Context* b);
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* c);


struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* b);

struct _global_String ast_Payload_toString(struct ast_Payload*,struct _global_Context* b);
struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* c);
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* d);
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* f);
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* g);
struct ast_AST** ast_AST_op_get(struct ast_AST* ast_self, unsigned int ast_index, struct _global_Context* h);
unsigned int ast_AST_length(struct ast_AST* ast_self, struct _global_Context* j);
struct types_CompilerType ast_op_type(struct ast_AST* ast_node, struct _global_Context* k);

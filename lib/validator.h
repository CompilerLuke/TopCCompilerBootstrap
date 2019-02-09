struct _global_StaticArray_1_types_CompilerType {
struct types_CompilerType data[1];
};
struct _global_StaticArray_1_types_CompilerType _global_StaticArray_1_types_CompilerTypeFill_array(struct types_CompilerType with){
struct _global_StaticArray_1_types_CompilerType tmp;
for (unsigned int i = 0; i < 1; i++) {
tmp.data[i] = with;
}; return tmp; }
struct _global_StaticArray_1_types_CompilerType _global_StaticArray_1_types_CompilerTypeInit(struct types_CompilerType c){
struct _global_StaticArray_1_types_CompilerType tmp;
tmp.data[0] = c;
return tmp; }
struct _global_ArrayType _global_StaticArray_1_types_CompilerTypeType;struct _global_ArrayType* _global_StaticArray_1_types_CompilerType_get_type(struct _global_StaticArray_1_types_CompilerType* self, struct _global_Context* c){return &_global_StaticArray_1_types_CompilerTypeType;}
struct _global_ArrayType* _global_StaticArray_1_types_CompilerType_get_typeByValue(struct _global_StaticArray_1_types_CompilerType self, struct _global_Context* c){return &_global_StaticArray_1_types_CompilerTypeType;}
struct _global_ArrayType _global_StaticArray_1_types_CompilerTypeType;
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* b);
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* c);
struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* d);
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* f);
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* g);
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* h);

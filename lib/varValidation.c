struct error_CompilerError* varValidation_validate_read(struct validator_State* varValidation_state, struct ast_ReadInfo* varValidation_read_info, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
;
struct scope_DeclInfo* varValidation_desc_info;;
struct scope_DeclInfo* f =scope_Scope_get_var((varValidation_state)->scope,(varValidation_read_info)->name,d);if(f != NULL){varValidation_desc_info = f;

;}
else if(1){
return error_make_Error_rast_AST(varValidation_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(19,"No variable called "),((varValidation_read_info)->name),d),_global_StringInit(0,""),d),d);
;
;}
;
(varValidation_node)->_type = (varValidation_desc_info)->_type;;
(varValidation_read_info)->is_global = (varValidation_desc_info)->is_global;;
;return NULL;
;}
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
struct ast_AST* varValidation_create;struct ast_AST* varValidation_assign;struct prast_ASTcrast_ASTp f;f = prast_ASTcrast_ASTpInit(*(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)0,d)),*(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)1,d)));varValidation_create=f.field0;varValidation_assign=f.field1;;
struct error_CompilerError* g =validator_State_validate_nodes(varValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((varValidation_assign)->nodes.data, (varValidation_assign)->nodes.length),d);if(g != NULL){struct error_CompilerError* varValidation__x = g;

return varValidation__x;
;
;}
else if(1){
;}
;
struct types_CompilerType varValidation_typ;varValidation_typ = (*(_global_Array_op_get_rast_AST(&((varValidation_assign)->nodes),(unsigned int)0,d)))->_type;;
struct ast_AST* varValidation_v;varValidation_v = *(_global_Array_op_get_rast_AST(&((varValidation_create)->nodes),(unsigned int)0,d));;
(varValidation_v)->_type = varValidation_typ;;
struct ast_ReadInfo* varValidation_read_info;;
struct ast_Payload h =(varValidation_v)->payload;if(h.tag==5){varValidation_read_info = h.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(37,"Expecting identifier in create assign"),d);
;}
;
struct scope_DeclInfo varValidation_decl_info;varValidation_decl_info = scope_make_DeclInfo(varValidation_typ,d);;
struct error_CompilerError* j =scope_Scope_create_decl((varValidation_state)->scope,(varValidation_read_info)->name,&(varValidation_decl_info),varValidation_create,d);if(j != NULL){struct error_CompilerError* varValidation__x = j;

return varValidation__x;
;
;}
else if(1){
;}
;
(varValidation_read_info)->is_global = (varValidation_decl_info).is_global;;
;return NULL;
;}

void varValidationInitTypes() { 
 
 }
void varValidationInit() { 
;
};
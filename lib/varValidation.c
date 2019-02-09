struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* d);
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
(varValidation_node)->_type=scope_DeclInfo_type_of_desc(varValidation_desc_info,d);;
(varValidation_read_info)->is_global=(varValidation_desc_info)->is_global;;
;return NULL;
;}
struct error_CompilerError* varValidation_validate_create_assign(struct validator_State* varValidation_state, struct ast_AST* varValidation_node, struct _global_Context* d){;
;
struct ast_AST* varValidation_create;varValidation_create = *(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)0,d));;
struct ast_AST* varValidation_assign;varValidation_assign = *(_global_Array_op_get_rast_AST(&((varValidation_node)->nodes),(unsigned int)1,d));;
struct error_CompilerError* f =validator_State_validate_nodes(varValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((varValidation_assign)->nodes.data, (varValidation_assign)->nodes.length),d);if(f != NULL){struct error_CompilerError* varValidation_e = f;

return varValidation_e;
;
;}
else if(1){
;}
;
struct types_CompilerType varValidation_typ;varValidation_typ = (*(_global_Array_op_get_rast_AST(&((varValidation_assign)->nodes),(unsigned int)0,d)))->_type;;
struct ast_AST* varValidation_v;varValidation_v = *(_global_Array_op_get_rast_AST(&((varValidation_create)->nodes),(unsigned int)0,d));;
(varValidation_v)->_type=varValidation_typ;;
struct ast_ReadInfo* varValidation_read_info;;
struct ast_Payload g =(varValidation_v)->payload;if(g.tag==5){varValidation_read_info = g.cases.Identifier.field0;

;}
else if(1){
_global_panic(_global_StringInit(37,"Expecting identifier in create assign"),d);
;}
;
struct scope_DeclInfo varValidation_decl_info;varValidation_decl_info = scope_make_DeclInfo(d);;
(varValidation_decl_info)._type=varValidation_typ;;
_Bool varValidation_var_exists;varValidation_var_exists = scope_Scope_create_decl((varValidation_state)->scope,(varValidation_read_info)->name,&(varValidation_decl_info),d);;
if(varValidation_var_exists){;
return error_make_Error_rast_AST(varValidation_node,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(4,"Var "),((varValidation_read_info)->name),d),_global_StringInit(15," already exists"),d),d);
;
;};
(varValidation_read_info)->is_global=(varValidation_decl_info).is_global;;
;return NULL;
;}
struct error_CompilerError* error_make_Error_rast_AST(struct ast_AST* error_self, struct _global_String error_mesg, struct _global_Context* d){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(ast_AST_get_filename(error_self,d),ast_AST_get_line(error_self,d),error_mesg,ast_AST_get_column(error_self,d)),d);
;}

void varValidationInitTypes() { 
 scopeInitTypes();
 }
void varValidationInit() { 
scopeInit();;
;
};
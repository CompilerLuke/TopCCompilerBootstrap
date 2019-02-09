struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* j);
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* j);
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* j){;
;
;struct ast_Payload k =(validator_syntax_tree)->payload;
if(k.tag==4){struct ast_OperatorKind validator_kind = k.cases.Operator.field0;
return operatorValidation_validate(validator_state,validator_kind,validator_syntax_tree,j);}else if(k.tag==5){struct ast_ReadInfo* validator_read_info = k.cases.Identifier.field0;
return varValidation_validate_read(validator_state,validator_read_info,validator_syntax_tree,j);}else if(k.tag==7){return varValidation_validate_create_assign(validator_state,validator_syntax_tree,j);}else if(1){return validator_State_validate_nodes(validator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((validator_syntax_tree)->nodes.data, (validator_syntax_tree)->nodes.length),j);};
;}
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* j){;
;
struct _global_StaticArray_StaticArray_S_rast_AST k =validator_nodes;
for (unsigned int l = 0;l < k.length; l++) {
struct ast_AST* validator_node;validator_node = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&k, l, j);
;unsigned int validator_i;validator_i = l;
struct error_CompilerError* m =validator_State_validate(validator_self,validator_node,j);if(m != NULL){struct error_CompilerError* validator_e = m;

return validator_e;
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
struct _global_StaticArray_StaticArray_S_types_CompilerType tmpvalidatorbb(struct _global_StaticArray_1_types_CompilerType* k) {
return _global_StaticArray_StaticArray_S_types_CompilerTypeInit(k->data, 1);};
struct types_CompilerType_VTABLE rtypes_FuncPtr_VTABLE_FOR_types_CompilerType;struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* j){;
struct validator_State validator_state;validator_state = validator_StateInit(scope_make_Scope(j));;
struct types_FuncPtr* validator_log_func_type;validator_log_func_type = types_make_FuncPtr(j);;
(validator_log_func_type)->args=tmpvalidatorbb(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(types_CompilerTypeFromStruct(types_make_Float(j),&rtypes_Float_VTABLE_FOR_types_CompilerType,rtypes_Float_VTABLE_FOR_types_CompilerType.type, &types_Float_toString, &types_Float_duck_type, &types_Float_equals, &types_Float_calc_size)),j));;
(validator_log_func_type)->external=1;;
struct scope_DeclInfo validator_decl_info;validator_decl_info = scope_make_DeclInfo(j);;
(validator_decl_info)._type=types_CompilerTypeFromStruct(validator_log_func_type,&rtypes_FuncPtr_VTABLE_FOR_types_CompilerType,_global_TypeFromStruct(types_FuncPtr_get_type(NULL,j),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &types_FuncPtr_toString, &types_FuncPtr_duck_type, &types_FuncPtr_equals, &types_FuncPtr_calc_size);;
struct types_FuncPtr* validator_log_func_type_int;validator_log_func_type_int = types_make_FuncPtr(j);;
(validator_log_func_type_int)->args=tmpvalidatorbb(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(types_CompilerTypeFromStruct(types_make_Int(j),&rtypes_Int_VTABLE_FOR_types_CompilerType,rtypes_Int_VTABLE_FOR_types_CompilerType.type, &types_Int_toString, &types_Int_duck_type, &types_Int_equals, &types_Int_calc_size)),j));;
(validator_log_func_type_int)->external=1;;
struct scope_DeclInfo validator_decl_info_2;validator_decl_info_2 = scope_make_DeclInfo(j);;
(validator_decl_info_2)._type=types_CompilerTypeFromStruct(validator_log_func_type,&rtypes_FuncPtr_VTABLE_FOR_types_CompilerType,rtypes_FuncPtr_VTABLE_FOR_types_CompilerType.type, &types_FuncPtr_toString, &types_FuncPtr_duck_type, &types_FuncPtr_equals, &types_FuncPtr_calc_size);;
_global_assert((!((scope_Scope_create_decl((validator_state).scope,_global_StringInit(3,"log"),&(validator_decl_info),j)))),_global_StringInit(19,"Log already defined"),j);
_global_assert((!((scope_Scope_create_decl((validator_state).scope,_global_StringInit(7,"log_int"),&(validator_decl_info_2),j)))),_global_StringInit(23,"Log_int already defined"),j);
struct error_CompilerError* l =validator_State_validate(&(validator_state),validator_syntax_tree,j);if(l != NULL){struct error_CompilerError* validator_e = l;

return validator_e;
;
;}
else if(1){
;}
;
struct error_CompilerError* m =validator_check_useless(validator_syntax_tree,j);if(m != NULL){struct error_CompilerError* validator_e = m;

return validator_e;
;
;}
else if(1){
;}
;
;return validator_check_other(validator_syntax_tree,j);
;}
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* j){;
;
;return error_make_Error_rast_AST(validator_i,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(8,"Useless "),(validator_mesg),j),_global_StringInit(0,""),j),j);
;}
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* j){;
;struct ast_Payload k =(validator_i)->payload;
if(k.tag==5&&1){return validator_useless(validator_i,_global_StringInit(4,"read"),j);}else if(k.tag==1){return validator_useless(validator_i,_global_StringInit(11,"int literal"),j);}else if(k.tag==2){return validator_useless(validator_i,_global_StringInit(13,"float literal"),j);}else if(k.tag==3){return validator_useless(validator_i,_global_StringInit(12,"bool literal"),j);}else if(k.tag==4){struct ast_OperatorKind validator_kind = k.cases.Operator.field0;
return validator_useless(validator_i,_global_StringInit(8,"operator"),j);}else if(k.tag==0){struct _global_Array_rast_AST l =(validator_i)->nodes;
for (unsigned int m = 0;m < l.length; m++) {
struct ast_AST* validator_node;validator_node = *_global_Array_op_get_rast_AST(&l, m, j);
;unsigned int validator_i;validator_i = m;
struct error_CompilerError* n =validator_check_useless(validator_node,j);if(n != NULL){struct error_CompilerError* validator_e = n;

return validator_e;
;
;}
else if(1){
;}
;
}
;
return NULL;}else if(1){return NULL;};
;}
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* j){;
;return NULL;
;}
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* j){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),j);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* j){;
struct _global_StaticArray_1_types_CompilerType* _global_pointer;_global_pointer = (struct _global_StaticArray_1_types_CompilerType*)(_global_Allocator_alloc((j)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_types_CompilerType),j));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}

void validatorInitTypes() { 
 operatorValidationInitTypes();varValidationInitTypes();
_global_StaticArray_1_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_types_CompilerTypeType.size->tag = 0;
_global_StaticArray_1_types_CompilerTypeType.size->cases.Static.field0 = 1;
_global_StaticArray_1_types_CompilerTypeType.array_type = 
_global_TypeFromStruct(
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
; }
void validatorInit() { 
;
operatorValidationInit();;
varValidationInit();;
;
};
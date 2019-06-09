struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l);
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* l);
struct error_CompilerError* validator_State_validate(struct validator_State* validator_state, struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 14 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;struct ast_Payload m =(validator_syntax_tree)->payload;
if(m.tag==4){struct ast_OperatorKind validator_kind = m.cases.Operator.field0;
return operatorValidation_validate(validator_state,validator_kind,validator_syntax_tree,l);}else if(m.tag==5){struct ast_ReadInfo* validator_read_info = m.cases.Identifier.field0;
return varValidation_validate_read(validator_state,validator_read_info,validator_syntax_tree,l);}else if(m.tag==7){return varValidation_validate_create_assign(validator_state,validator_syntax_tree,l);}else if(m.tag==10){return ifValidation_validate_if(validator_state,validator_syntax_tree,l);}else if(m.tag==12){return ifValidation_validate_condition(validator_state,validator_syntax_tree,l);}else if(m.tag==15){struct ast_FuncInfo* validator_info = m.cases.FuncDef.field0;
return funcValidator_validate(validator_state,validator_syntax_tree,validator_info,l);}else if(m.tag==6){return funcValidator_validate_call(validator_state,validator_syntax_tree,l);}else if(m.tag==16){return tupleValidator_validate_tuple(validator_state,validator_syntax_tree,l);}else if(1){return validator_State_validate_nodes(validator_state,_global_StaticArray_StaticArray_S_rast_ASTInit((validator_syntax_tree)->nodes.data, (validator_syntax_tree)->nodes.length),l);};
#line 15 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
struct error_CompilerError* validator_State_validate_nodes(struct validator_State* validator_self, struct _global_StaticArray_StaticArray_S_rast_AST validator_nodes, struct _global_Context* l){;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 26 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct _global_StaticArray_StaticArray_S_rast_AST m =validator_nodes;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
for (unsigned int n = 0;n < m.length; n++) {
struct ast_AST* validator_node;validator_node = *_global_StaticArray_op_get_StaticArray_S_rast_AST(&m, n, l);
;unsigned int validator_i;validator_i = n;
struct error_CompilerError* p =validator_State_validate(validator_self,validator_node,l);if(p != NULL){struct error_CompilerError* validator__x = p;

#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 28 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
}
;
#line 27 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return NULL;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct _global_StaticArray_StaticArray_S_types_CompilerType tmpvalidatorbh(struct _global_StaticArray_1_types_CompilerType* m) {
return _global_StaticArray_StaticArray_S_types_CompilerTypeInit(m->data, 1);};
struct error_CompilerError* validator_register_log_func(struct validator_State* validator_state, struct _global_String validator_name, struct types_CompilerType validator_typ, struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 32 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct types_FuncPtr* validator_log_func_type;validator_log_func_type = types_make_FuncPtr(l);;
#line 33 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
(validator_log_func_type)->args = tmpvalidatorbh(_global_box__1_types_CompilerType(_global_StaticArray_1_types_CompilerTypeInit(validator_typ),l));;
#line 34 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
(validator_log_func_type)->external = 1;;
#line 35 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct scope_DeclInfo validator_decl_info;validator_decl_info = scope_make_DeclInfo(types_Func(validator_log_func_type,l),l);;
#line 37 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return scope_Scope_create_decl((validator_state)->scope,validator_name,&(validator_decl_info),validator_syntax_tree,l);
#line 38 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
struct error_CompilerError* validator_validate(struct ast_AST* validator_syntax_tree, struct _global_Context* l){;
#line 40 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct validator_State validator_state;validator_state = validator_StateInit(scope_make_Scope(l));;
#line 41 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* m =validator_register_log_func(&(validator_state),_global_StringInit(9,"log_float"),types_make_Float(l),validator_syntax_tree,l);if(m != NULL){struct error_CompilerError* validator__x = m;

#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* n =validator_register_log_func(&(validator_state),_global_StringInit(7,"log_int"),types_make_Int(l),validator_syntax_tree,l);if(n != NULL){struct error_CompilerError* validator__x = n;

#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 46 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* p =validator_register_log_func(&(validator_state),_global_StringInit(3,"log"),types_String,validator_syntax_tree,l);if(p != NULL){struct error_CompilerError* validator__x = p;

#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* q =validator_State_create_decl(&(validator_state),validator_syntax_tree,l);if(q != NULL){struct error_CompilerError* validator__x = q;

#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* r =validator_State_validate(&(validator_state),validator_syntax_tree,l);if(r != NULL){struct error_CompilerError* validator__x = r;

#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 50 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* s =validator_check_useless(validator_syntax_tree,l);if(s != NULL){struct error_CompilerError* validator__x = s;

#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return validator_check_other(validator_syntax_tree,l);
#line 53 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
struct error_CompilerError* validator_useless(struct ast_AST* validator_i, struct _global_String validator_mesg, struct _global_Context* l){;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return error_make_Error_rast_AST(validator_i,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(8,"Useless "),(validator_mesg),l),_global_StringInit(0,""),l),l);
#line 56 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
struct error_CompilerError* validator_check_useless(struct ast_AST* validator_i, struct _global_Context* l){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;struct ast_Payload m =(validator_i)->payload;
if(m.tag==5&&1){return validator_useless(validator_i,_global_StringInit(4,"read"),l);}else if(m.tag==1){return validator_useless(validator_i,_global_StringInit(11,"int literal"),l);}else if(m.tag==2){return validator_useless(validator_i,_global_StringInit(13,"float literal"),l);}else if(m.tag==3){return validator_useless(validator_i,_global_StringInit(12,"bool literal"),l);}else if(m.tag==4){struct ast_OperatorKind validator_kind = m.cases.Operator.field0;
return validator_useless(validator_i,_global_StringInit(8,"operator"),l);}else if(m.tag==0){struct _global_Array_rast_AST n =(validator_i)->nodes;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
for (unsigned int p = 0;p < n.length; p++) {
struct ast_AST* validator_node;validator_node = *_global_Array_op_get_rast_AST(&n, p, l);
;struct error_CompilerError* q =validator_check_useless(validator_node,l);if(q != NULL){struct error_CompilerError* validator__x = q;

#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 67 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
}
;
#line 66 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return NULL;}else if(1){return NULL;};
#line 59 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
struct error_CompilerError* validator_State_create_decl(struct validator_State* validator_self, struct ast_AST* validator_node, struct _global_Context* l){;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct _global_Array_rast_AST m =(validator_node)->nodes;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
for (unsigned int n = 0;n < m.length; n++) {
struct ast_AST* validator_n;validator_n = *_global_Array_op_get_rast_AST(&m, n, l);
;unsigned int validator_i;validator_i = n;
struct ast_Payload p =(validator_n)->payload;if(p.tag==15){struct ast_FuncInfo* validator_info = p.cases.FuncDef.field0;

#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
struct error_CompilerError* q =funcValidator_add_func_to_scope(validator_self,validator_node,validator_info,l);if(q != NULL){struct error_CompilerError* validator__x = q;

#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
return validator__x;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 74 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
else if(1){
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;}
#line 75 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
#line 73 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
}
;
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return NULL;
#line 77 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* validator_check_other(struct ast_AST* validator_node, struct _global_Context* l){;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;return NULL;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct ast_AST** _global_StaticArray_op_get_StaticArray_S_rast_AST(struct _global_StaticArray_StaticArray_S_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* l){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),l);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
struct _global_StaticArray_1_types_CompilerType* _global_box__1_types_CompilerType(struct _global_StaticArray_1_types_CompilerType _global_value, struct _global_Context* l){;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
struct _global_StaticArray_1_types_CompilerType* _global_pointer;_global_pointer = (struct _global_StaticArray_1_types_CompilerType*)(_global_Allocator_alloc((l)->allocator,(uint64_t)sizeof(struct _global_StaticArray_1_types_CompilerType),l));;
#line 96 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
*(_global_pointer) = _global_value;;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;return _global_pointer;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

void validatorInitTypes() { 
 operatorValidationInitTypes();varValidationInitTypes();funcValidatorInitTypes();tupleValidatorInitTypes();
_global_StaticArray_1_types_CompilerTypeType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_types_CompilerTypeType.size->tag = 0;
_global_StaticArray_1_types_CompilerTypeType.size->cases.Static.field0 = 1;
_global_StaticArray_1_types_CompilerTypeType.array_type = 
_global_TypeFromStruct(
types_CompilerType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; }
void validatorInit() { 
;
#line 2 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
operatorValidationInit();;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
varValidationInit();;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
funcValidatorInit();;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
tupleValidatorInit();;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/validation/validator.top"
;
};
unsigned char* _global_StaticArray_op_get_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned int _global_index, struct _global_Context* c);
_Bool _global_StaticArray_contains_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned char _global_elem, struct _global_Context* c);
struct error_Thrower_VTABLE rast_AST_VTABLE_FOR_error_Thrower;struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* c){;
;
;
struct error_CompilerError* d =validator_State_validate_nodes(operatorValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((operatorValidation_node)->nodes.data, (operatorValidation_node)->nodes.length),c);if(d != NULL){struct error_CompilerError* operatorValidation__x = d;

return operatorValidation__x;
;
;}
else if(1){
;}
;
struct types_CompilerType operatorValidation_op_t;operatorValidation_op_t = (*(_global_Array_op_get_rast_AST(&((operatorValidation_node)->nodes),(unsigned int)0,c)))->_type;;
struct _global_Range f =_global_RangeInit(1,((operatorValidation_node)->nodes).length);
for (unsigned int g = f.start; g < f.end; g++) {
unsigned int operatorValidation_i;operatorValidation_i = g;
;struct types_CompilerType operatorValidation__type;operatorValidation__type = (*(_global_Array_op_get_rast_AST(&((operatorValidation_node)->nodes),(unsigned int)operatorValidation_i,c)))->_type;;
struct error_CompilerError* h =types_CompilerType_duck_typeByValue(operatorValidation_op_t,operatorValidation__type,error_ThrowerFromStruct(operatorValidation_node,&rast_AST_VTABLE_FOR_error_Thrower,_global_TypeFromStruct(ast_AST_get_type(NULL,c),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),c);if(h != NULL){struct error_CompilerError* operatorValidation__x = h;

return operatorValidation__x;
;
;}
else if(1){
;}
;
}
;
struct _global_StaticArray_1_u8 operatorValidation_comparison;operatorValidation_comparison = _global_StaticArray_1_u8Init((ast_LT).tag);;
(operatorValidation_node)->_type = (_global_StaticArray_contains_1_u8(&(operatorValidation_comparison),(operatorValidation_kind).tag,c) ? types_Bool:(operatorValidation_op_t));;
;return NULL;
;}
unsigned char* _global_StaticArray_op_get_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned int _global_index, struct _global_Context* c){;
;
_global_assert(_global_index<1,_global_StringInit(13,"Out of bounds"),c);
;return ((_global_self)->data + (int64_t)_global_index);
;}
_Bool _global_StaticArray_contains_1_u8(struct _global_StaticArray_1_u8* _global_self, unsigned char _global_elem, struct _global_Context* c){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<1){if(*(&(*(_global_StaticArray_op_get_1_u8(_global_self,(unsigned int)_global_i,c))))==*(&(_global_elem))){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}

void operatorValidationInitTypes() { 
 
validator_StateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
validator_StateType.fields = _global_StaticArray_StaticArray_S_FieldInit(
validator_StateType_fields
,1
);
validator_StateType.package = _global_StringInit(9, "validator");
validator_StateType.name = _global_StringInit(5, "State");
validator_StateType.size = sizeof(struct validator_State);
validator_StateType_fields[0].name = _global_StringInit(5, "scope");
validator_StateType_fields[0].offset = offsetof(struct validator_State, scope);
validator_StateType_fields[0].field_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
scope_Scope_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;_global_StaticArray_1_u8Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_1_u8Type.size->tag = 0;
_global_StaticArray_1_u8Type.size->cases.Static.field0 = 1;
_global_StaticArray_1_u8Type.array_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StaticArray_StaticArray_S_rast_ASTType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_rast_ASTType.size->tag = 2;
_global_StaticArray_StaticArray_S_rast_ASTType.array_type=
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
,0),(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
; }
void operatorValidationInit() { 
;
;
};
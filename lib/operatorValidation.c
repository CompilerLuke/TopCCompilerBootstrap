struct error_Thrower_VTABLE rast_AST_VTABLE_FOR_error_Thrower;struct error_CompilerError* operatorValidation_validate(struct validator_State* operatorValidation_state, struct ast_OperatorKind operatorValidation_kind, struct ast_AST* operatorValidation_node, struct _global_Context* c){;
;
;
struct error_CompilerError* d =validator_State_validate_nodes(operatorValidation_state,_global_StaticArray_StaticArray_S_rast_ASTInit((operatorValidation_node)->nodes.data, (operatorValidation_node)->nodes.length),c);if(d != NULL){struct error_CompilerError* operatorValidation_e = d;

return operatorValidation_e;
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
struct error_CompilerError* h =types_CompilerType_duck_type(&(operatorValidation_op_t),operatorValidation__type,error_ThrowerFromStruct(operatorValidation_node,&rast_AST_VTABLE_FOR_error_Thrower,_global_TypeFromStruct(ast_AST_get_type(NULL,c),&rStructType_VTABLE_FOR_Type,rStructType_VTABLE_FOR_Type.type, &_global_StructType_toString, &_global_StructType_get_size), &ast_AST_get_filename, &ast_AST_get_line, &ast_AST_get_column),c);if(h != NULL){struct error_CompilerError* operatorValidation_e = h;

return operatorValidation_e;
;
;}
else if(1){
;}
;
}
;
(operatorValidation_node)->_type=operatorValidation_op_t;;
;return NULL;
;}

void operatorValidationInitTypes() { 
 
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.size->tag = 1;
_global_Array_hashMap_HashMap_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.size->tag = 2;
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo_Type.array_type=
_global_TypeFromStruct(
hashMap_HashBucket_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Array_scope_DeclInfoType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_scope_DeclInfoType.size->tag = 1;
_global_Array_scope_DeclInfoType.array_type=
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_DeclInfoType_fields
,2
);
scope_DeclInfoType.package = _global_StringInit(5, "scope");
scope_DeclInfoType.name = _global_StringInit(8, "DeclInfo");
scope_DeclInfoType.size = sizeof(struct scope_DeclInfo);
scope_DeclInfoType_fields[0].name = _global_StringInit(5, "_type");
scope_DeclInfoType_fields[0].offset = offsetof(struct scope_DeclInfo, _type);
scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
&types_CompilerType_Type
,
&rInterfaceType_VTABLE_FOR_Type
,
rInterfaceType_VTABLE_FOR_Type.type
, &_global_InterfaceType_toString
, &_global_InterfaceType_get_size
)
;
scope_DeclInfoType_fields[1].name = _global_StringInit(9, "is_global");
scope_DeclInfoType_fields[1].offset = offsetof(struct scope_DeclInfo, is_global);
scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_Maybe_rscope_DeclInfoType.p_type =
_global_TypeFromStruct(
scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rscope_DeclInfoType.nullable = 1;hashMap_HashBucket_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
hashMap_HashBucket_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashBucket_scope_DeclInfoType_fields
,2
);
hashMap_HashBucket_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashBucket_scope_DeclInfoType.name = _global_StringInit(25, "HashBucket_scope_DeclInfo");
hashMap_HashBucket_scope_DeclInfoType.size = sizeof(struct hashMap_HashBucket_scope_DeclInfo);
hashMap_HashBucket_scope_DeclInfoType_fields[0].name = _global_StringInit(4, "keys");
hashMap_HashBucket_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, keys);
hashMap_HashBucket_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_string_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
hashMap_HashBucket_scope_DeclInfoType_fields[1].name = _global_StringInit(6, "values");
hashMap_HashBucket_scope_DeclInfoType_fields[1].offset = offsetof(struct hashMap_HashBucket_scope_DeclInfo, values);
hashMap_HashBucket_scope_DeclInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;hashMap_HashMap_scope_DeclInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
hashMap_HashMap_scope_DeclInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
hashMap_HashMap_scope_DeclInfoType_fields
,1
);
hashMap_HashMap_scope_DeclInfoType.package = _global_StringInit(7, "hashMap");
hashMap_HashMap_scope_DeclInfoType.name = _global_StringInit(22, "HashMap_scope_DeclInfo");
hashMap_HashMap_scope_DeclInfoType.size = sizeof(struct hashMap_HashMap_scope_DeclInfo);
hashMap_HashMap_scope_DeclInfoType_fields[0].name = _global_StringInit(7, "buckets");
hashMap_HashMap_scope_DeclInfoType_fields[0].offset = offsetof(struct hashMap_HashMap_scope_DeclInfo, buckets);
hashMap_HashMap_scope_DeclInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_hashMap_HashBucket_scope_DeclInfo__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type.p_type =
_global_TypeFromStruct(
hashMap_HashMap_scope_DeclInfo_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rhashMap_HashMap_scope_DeclInfo_Type.nullable = 1;scope_ScopeType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
scope_ScopeType.fields = _global_StaticArray_StaticArray_S_FieldInit(
scope_ScopeType_fields
,1
);
scope_ScopeType.package = _global_StringInit(5, "scope");
scope_ScopeType.name = _global_StringInit(5, "Scope");
scope_ScopeType.size = sizeof(struct scope_Scope);
scope_ScopeType_fields[0].name = _global_StringInit(4, "vars");
scope_ScopeType_fields[0].offset = offsetof(struct scope_Scope, vars);
scope_ScopeType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_hashMap_HashMap_scope_DeclInfo__get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;validator_StateType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
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
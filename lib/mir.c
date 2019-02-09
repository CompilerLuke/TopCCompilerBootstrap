struct _global_String mir_CreateVar_toString(struct mir_CreateVar* mir_self, struct _global_Context* c){;
;return _global_uint_toStringByValue((mir_self)->name,c);
;}
static inline struct _global_String mir_CreateVar_toStringByValue(struct mir_CreateVar d,struct _global_Context* c){
return mir_CreateVar_toString(&d,c);
}
void mirInitTypes() { 
 
mir_ID_Type.name = _global_StringInit(2, "ID");
mir_ID_Type.package = _global_StringInit(3, "mir");
mir_ID_Type.real_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;mir_CreateVarType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
mir_CreateVarType.fields = _global_StaticArray_StaticArray_S_FieldInit(
mir_CreateVarType_fields
,1
);
mir_CreateVarType.package = _global_StringInit(3, "mir");
mir_CreateVarType.name = _global_StringInit(9, "CreateVar");
mir_CreateVarType.size = sizeof(struct mir_CreateVar);
mir_CreateVarType_fields[0].name = _global_StringInit(4, "name");
mir_CreateVarType_fields[0].offset = offsetof(struct mir_CreateVar, name);
mir_CreateVarType_fields[0].field_type = 
_global_TypeFromStruct(
&mir_ID_Type
,
&rAliasType_VTABLE_FOR_Type
,
_global_TypeFromStruct(
_global_AliasType_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
, &_global_AliasType_toString
, &_global_AliasType_get_size
)
; }
void mirInit() { 
;
};
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* h);
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* h);
struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST** _global_self, struct _global_Context* h);

static inline struct ast_AST** _global_Maybe_unwrap_rrast_AST(struct ast_AST***,struct _global_Context* h);

struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST**,struct _global_Context* h);
void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* h);
struct _global_String ast_Payload_toString(struct ast_Payload* ast_self, struct _global_Context* h){;
struct _global_EnumType* ast_payload_type;ast_payload_type = ast_Payload_get_type(NULL,h);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((ast_payload_type)->cases),(unsigned int)(ast_self)->tag,h))).name;
;}
static inline struct _global_String ast_Payload_toStringByValue(struct ast_Payload j,struct _global_Context* h){
return ast_Payload_toString(&j,h);
}struct _global_String ast_AST_get_filename(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_filename;
;}
unsigned int ast_AST_get_line(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_line;
;}
unsigned int ast_AST_get_column(struct ast_AST* ast_self, struct _global_Context* h){;
;return (ast_self)->_column;
;}
void ast_AST_add(struct ast_AST* ast_self, struct ast_AST* ast_node, struct _global_Context* h){;
;
(ast_node)->owner=ast_self;;
_global_Array_append_rast_AST(&((ast_self)->nodes),ast_node,h);
;}
void _global_memcpy_rast_AST(struct ast_AST** _global_target, struct ast_AST** _global_destination, unsigned int _global_length, struct _global_Context* h){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct ast_AST*),h);
;}

static inline struct ast_AST** tmpastw(struct _global_Array_rast_AST** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* h) {
struct ast_AST** j =(*_global_self)->data;
if(j != NULL){struct ast_AST** _global_data = j;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),h);
struct ast_AST** _global_newData;_global_newData = (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),h));;
_global_memcpy_rast_AST(_global_newData,_global_data,(*_global_self)->length,h);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,h);
return _global_newData;}else if(j == NULL){return (struct ast_AST**)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct ast_AST*),h));}
}
void _global_Array_reserve_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_newSize, struct _global_Context* h){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(h)->allocator,h);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpastw(&_global_self,&_global_newSize,&_global_allocator, h);;
;}
struct ast_AST** _global_Maybe_unwrap_rrast_ASTByValue(struct ast_AST** _global_self, struct _global_Context* h){;
struct ast_AST** _global_x;;
struct ast_AST** j =_global_self;if(j != NULL){_global_x = j;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),h);
;}
;
;return _global_x;
;}
static inline struct ast_AST** _global_Maybe_unwrap_rrast_AST(struct ast_AST*** k,struct _global_Context* h){
return _global_Maybe_unwrap_rrast_ASTByValue(*k,h);
}void _global_Array_append_rast_AST(struct _global_Array_rast_AST* _global_self, struct ast_AST* _global_value, struct _global_Context* h){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_rast_AST(_global_self,1,h);
;}
else{_global_Array_reserve_rast_AST(_global_self,(_global_self)->capacity*2,h);
;};
;};
*(((_global_Maybe_unwrap_rrast_ASTByValue((_global_self)->data,h) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}

void astInitTypes() { 
 typesInitTypes();
ast_Add.tag = 0;
ast_Mul.tag = 1;
ast_Div.tag = 2;
struct _global_Case* c =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 3);
c[0].name = _global_StringInit(3, "Add");
c[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[1].name = _global_StringInit(3, "Mul");
c[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[2].name = _global_StringInit(3, "Div");
c[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
ast_OperatorKindType.tag_field.name = _global_StringInit(3, "tag");

ast_OperatorKindType.tag_field.offset = offsetof(struct ast_OperatorKind, tag);
ast_OperatorKindType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

ast_OperatorKindType.size = sizeof(struct ast_OperatorKind);

ast_OperatorKindType.package = _global_StringInit(3, "ast");
ast_OperatorKindType.name = _global_StringInit(12, "OperatorKind");
ast_OperatorKindType.cases.data = c;
ast_OperatorKindType.cases.length = 3;
ast_ReadInfoType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 2);
ast_ReadInfoType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ReadInfoType_fields
,2
);
ast_ReadInfoType.package = _global_StringInit(3, "ast");
ast_ReadInfoType.name = _global_StringInit(8, "ReadInfo");
ast_ReadInfoType.size = sizeof(struct ast_ReadInfo);
ast_ReadInfoType_fields[0].name = _global_StringInit(9, "is_global");
ast_ReadInfoType_fields[0].offset = offsetof(struct ast_ReadInfo, is_global);
ast_ReadInfoType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;
ast_ReadInfoType_fields[1].name = _global_StringInit(4, "name");
ast_ReadInfoType_fields[1].offset = offsetof(struct ast_ReadInfo, name);
ast_ReadInfoType_fields[1].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;ast_Root.tag = 0;
ast_FuncCall.tag = 6;
ast_CreateAssign.tag = 7;
ast_Create.tag = 8;
ast_Assign.tag = 9;
ast_If.tag = 10;
ast_Block.tag = 11;
ast_IfCondition.tag = 12;
ast_Else.tag = 13;
struct _global_Case* y =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 14);
y[0].name = _global_StringInit(4, "Root");
y[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[1].name = _global_StringInit(3, "Int");
y[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; y[1].args.data[0].offset = offsetof(struct ast_Payload_Int, field0);
y[2].name = _global_StringInit(5, "Float");
y[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[2].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; y[2].args.data[0].offset = offsetof(struct ast_Payload_Float, field0);
y[3].name = _global_StringInit(4, "Bool");
y[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[3].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
; y[3].args.data[0].offset = offsetof(struct ast_Payload_Bool, field0);
y[4].name = _global_StringInit(8, "Operator");
y[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[4].args.data[0].arg_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
; y[4].args.data[0].offset = offsetof(struct ast_Payload_Operator, field0);
y[5].name = _global_StringInit(10, "Identifier");
y[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
y[5].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
ast_ReadInfo_get_type(NULL,(&_global_context))
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
; y[5].args.data[0].offset = offsetof(struct ast_Payload_Identifier, field0);
y[6].name = _global_StringInit(8, "FuncCall");
y[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[7].name = _global_StringInit(12, "CreateAssign");
y[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[8].name = _global_StringInit(6, "Create");
y[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[9].name = _global_StringInit(6, "Assign");
y[9].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[10].name = _global_StringInit(2, "If");
y[10].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[11].name = _global_StringInit(5, "Block");
y[11].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[12].name = _global_StringInit(11, "IfCondition");
y[12].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
y[13].name = _global_StringInit(4, "Else");
y[13].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
ast_PayloadType.tag_field.name = _global_StringInit(3, "tag");

ast_PayloadType.tag_field.offset = offsetof(struct ast_Payload, tag);
ast_PayloadType.tag_field.field_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;

ast_PayloadType.size = sizeof(struct ast_Payload);

ast_PayloadType.package = _global_StringInit(3, "ast");
ast_PayloadType.name = _global_StringInit(7, "Payload");
ast_PayloadType.cases.data = y;
ast_PayloadType.cases.length = 14;
_global_Array_rast_ASTType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_rast_ASTType.size->tag = 1;
_global_Array_rast_ASTType.array_type=
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
;ast_ASTType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
ast_ASTType.fields = _global_StaticArray_StaticArray_S_FieldInit(
ast_ASTType_fields
,7
);
ast_ASTType.package = _global_StringInit(3, "ast");
ast_ASTType.name = _global_StringInit(3, "AST");
ast_ASTType.size = sizeof(struct ast_AST);
ast_ASTType_fields[0].name = _global_StringInit(7, "payload");
ast_ASTType_fields[0].offset = offsetof(struct ast_AST, payload);
ast_ASTType_fields[0].field_type = 
_global_TypeFromStruct(
ast_Payload_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
ast_ASTType_fields[1].name = _global_StringInit(5, "nodes");
ast_ASTType_fields[1].offset = offsetof(struct ast_AST, nodes);
ast_ASTType_fields[1].field_type = 
_global_TypeFromStruct(
_global_Array_rast_AST_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
ast_ASTType_fields[2].name = _global_StringInit(5, "_type");
ast_ASTType_fields[2].offset = offsetof(struct ast_AST, _type);
ast_ASTType_fields[2].field_type = 
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
ast_ASTType_fields[3].name = _global_StringInit(5, "owner");
ast_ASTType_fields[3].offset = offsetof(struct ast_AST, owner);
ast_ASTType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Maybe_rast_AST_get_type(NULL,(&_global_context))
,
&rPointerType_VTABLE_FOR_Type
,
rPointerType_VTABLE_FOR_Type.type
, &_global_PointerType_toString
, &_global_PointerType_get_size
)
;
ast_ASTType_fields[4].name = _global_StringInit(9, "_filename");
ast_ASTType_fields[4].offset = offsetof(struct ast_AST, _filename);
ast_ASTType_fields[4].field_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;
ast_ASTType_fields[5].name = _global_StringInit(5, "_line");
ast_ASTType_fields[5].offset = offsetof(struct ast_AST, _line);
ast_ASTType_fields[5].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;
ast_ASTType_fields[6].name = _global_StringInit(7, "_column");
ast_ASTType_fields[6].offset = offsetof(struct ast_AST, _column);
ast_ASTType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Maybe_rrast_ASTType.p_type =
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
;
_global_Maybe_rrast_ASTType.nullable = 1;_global_Maybe_rast_ASTType.p_type =
_global_TypeFromStruct(
ast_AST_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rast_ASTType.nullable = 1; }
void astInit() { 
typesInit();;
;
;
};
void _global_memcpy_operatorParser_OpDesc(struct operatorParser_OpDesc* _global_target, struct operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
void _global_memcpy_____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_target, struct _global_Array_operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
struct _global_String* _global_StaticArray_op_get_5_string(struct _global_StaticArray_5_string* _global_self, unsigned int _global_index, struct _global_Context* k);
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k);
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k);

static inline struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc**,struct _global_Context* k);

struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc*,struct _global_Context* k);
struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc* _global_self, struct _global_Context* k);

static inline struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDesc(struct operatorParser_OpDesc**,struct _global_Context* k);

struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc*,struct _global_Context* k);
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
_Bool _global_StaticArray_contains_5_string(struct _global_StaticArray_5_string* _global_self, struct _global_String _global_elem, struct _global_Context* k);
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k);
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* k);
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k);
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k);
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k);
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k);
void _global_Array_append_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct operatorParser_OpDesc _global_value, struct _global_Context* k);
void _global_Array_append_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Array_operatorParser_OpDesc _global_value, struct _global_Context* k);
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k);
_Bool operatorParser_is_unary(struct parser_Parser* operatorParser_self, struct _global_Context* k){;
struct lexer_Token operatorParser_token;operatorParser_token = parser_Parser_behind(operatorParser_self,k);;
struct _global_StaticArray_5_string operatorParser_unary_symbols;operatorParser_unary_symbols = _global_StaticArray_5_stringInit(_global_StringInit(1,"("),_global_StringInit(1,")"),_global_StringInit(2,":="),_global_StringInit(1,":"),_global_StringInit(1,"\n"));;
;struct lexer_TokenType l =(operatorParser_token).kind;
if(l.tag==5){return _global_StaticArray_contains_5_string(&(operatorParser_unary_symbols),(operatorParser_token).value,k);}else if(l.tag==3){return 1;}else if(l.tag==6){return 1;}else if(l.tag==4){return 1;}else if(1){return 0;};
;}
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
unsigned int operatorParser_takes;operatorParser_takes = ((operatorParser_self)->unary ? 1:(2));;
;if((((operatorParser_p)->current_node)->nodes).length<operatorParser_takes){;
return error_make_Error_rparser_Parser(operatorParser_p,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(31,"Not enough values for operator "),(print_obj_toString_ast_OperatorKind((operatorParser_self)->kind,k)),k),_global_StringInit(0,""),k),k);}
else{struct ast_AST* operatorParser_op;operatorParser_op = ast_make_AST_rparser_Parser(operatorParser_p,ast_Operator((operatorParser_self)->kind,k),k);;
if((operatorParser_self)->unary){;
ast_AST_add(operatorParser_op,_global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k),k);
;}
else{struct ast_AST* operatorParser_b;operatorParser_b = _global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k);;
struct ast_AST* operatorParser_a;operatorParser_a = _global_Array_pop_rast_AST(&(((operatorParser_p)->current_node)->nodes),k);;
ast_AST_add(operatorParser_op,operatorParser_a,k);
ast_AST_add(operatorParser_op,operatorParser_b,k);
;};
ast_AST_add((operatorParser_p)->current_node,operatorParser_op,k);
return NULL;};
;}
struct operatorParser_OpStack operatorParser_make_OpStack(struct _global_Context* k){;return operatorParser_OpStackInit(_global_Array_____operatorParser_OpDescInit(0, 0, NULL, NULL));
;}
struct error_CompilerError* operatorParser_OpStack_push_op(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct operatorParser_OpDesc operatorParser_desc, struct _global_Context* k){;
;
;
struct _global_Array_operatorParser_OpDesc* operatorParser_ops;operatorParser_ops = &(*(_global_Array_op_get_____operatorParser_OpDesc(&((operatorParser_self)->scopes),(unsigned int)((operatorParser_self)->scopes).length-1,k)));;
;while((operatorParser_ops)->length>0){struct operatorParser_OpDesc operatorParser_current;operatorParser_current = *(_global_Array_op_get_operatorParser_OpDesc((struct _global_Array_operatorParser_OpDesc*)operatorParser_ops,(unsigned int)(operatorParser_ops)->length-1,k));;_Bool operatorParser_same;operatorParser_same = (operatorParser_current).precedence==(operatorParser_desc).precedence&&(operatorParser_current).left_a;;_Bool operatorParser_greater;operatorParser_greater = (operatorParser_current).precedence>(operatorParser_desc).precedence;;if(operatorParser_greater||operatorParser_same){;
struct error_CompilerError* l =operatorParser_OpDesc_add_to(&(operatorParser_current),operatorParser_p,k);if(l != NULL){struct error_CompilerError* operatorParser_e = l;

return operatorParser_e;
;
;}
else if(1){
;}
;
_global_Array_pop_operatorParser_OpDesc(operatorParser_ops,k);
;}
else{break;;
;};};
_global_Array_append_operatorParser_OpDesc(operatorParser_ops,operatorParser_desc,k);
;return NULL;
;}
struct error_CompilerError* operatorParser_parse_operator(struct parser_Parser* operatorParser_self, struct _global_String operatorParser_kind, struct _global_Context* k){;
;
;struct _global_String l =operatorParser_kind;
if(_global_String_op_eqByValue(l,_global_StringInit(1,"+"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Add,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"*"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Mul,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"/"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Div,1),k);}else if(1){return error_make_Error_rparser_Parser(operatorParser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unknown operator "),(operatorParser_kind),k),_global_StringInit(0,""),k),k);};
;}
void operatorParser_OpStack_push(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
_global_Array_append_____operatorParser_OpDesc(&((operatorParser_self)->scopes),_global_Array_operatorParser_OpDescInit(0, 0, NULL, NULL),k);
;}
struct error_CompilerError* operatorParser_OpStack_pop(struct operatorParser_OpStack* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
struct _global_Array_operatorParser_OpDesc operatorParser_op_left;operatorParser_op_left = _global_Array_pop_____operatorParser_OpDesc(&((operatorParser_self)->scopes),k);;
struct _global_Range l =_global_RangeInit(0,(operatorParser_op_left).length);
for (unsigned int m = l.start; m < l.end; m++) {
unsigned int operatorParser_i;operatorParser_i = m;
;struct error_CompilerError* n =operatorParser_OpDesc_add_to(&(*(_global_Array_op_get_operatorParser_OpDesc(&(operatorParser_op_left),(unsigned int)(operatorParser_op_left).length-operatorParser_i-1,k))),operatorParser_p,k);if(n != NULL){struct error_CompilerError* operatorParser_e = n;

return operatorParser_e;
;
;}
else if(1){
;}
;
}
;
;return NULL;
;}
void _global_memcpy_operatorParser_OpDesc(struct operatorParser_OpDesc* _global_target, struct operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct operatorParser_OpDesc),k);
;}
void _global_memcpy_____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_target, struct _global_Array_operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct _global_Array_operatorParser_OpDesc),k);
;}
struct _global_String* _global_StaticArray_op_get_5_string(struct _global_StaticArray_5_string* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<5,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((k)->longterm_storage,(uint64_t)sizeof(struct ast_AST),k));;
*(_global_pointer)=_global_value;;
;return _global_pointer;
;}
struct ast_AST** _global_Array_op_get_rast_AST(struct _global_Array_rast_AST* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_rrast_ASTByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDescByValue(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
struct _global_Array_operatorParser_OpDesc* _global_x;;
struct _global_Array_operatorParser_OpDesc* l =_global_self;if(l != NULL){_global_x = l;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),k);
;}
;
;return _global_x;
;}
static inline struct _global_Array_operatorParser_OpDesc* _global_Maybe_unwrap_r____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc** m,struct _global_Context* k){
return _global_Maybe_unwrap_r____operatorParser_OpDescByValue(*m,k);
}struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDescByValue(struct operatorParser_OpDesc* _global_self, struct _global_Context* k){;
struct operatorParser_OpDesc* _global_x;;
struct operatorParser_OpDesc* l =_global_self;if(l != NULL){_global_x = l;

;}
else if(1){
_global_panic(_global_StringInit(38,"Trying to unwrap maybe, which was None"),k);
;}
;
;return _global_x;
;}
static inline struct operatorParser_OpDesc* _global_Maybe_unwrap_roperatorParser_OpDesc(struct operatorParser_OpDesc** m,struct _global_Context* k){
return _global_Maybe_unwrap_roperatorParser_OpDescByValue(*m,k);
}
static inline struct operatorParser_OpDesc* tmpoperatorParsery(struct _global_Array_operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
struct operatorParser_OpDesc* l =(*_global_self)->data;
if(l != NULL){struct operatorParser_OpDesc* _global_data = l;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),k);
struct operatorParser_OpDesc* _global_newData;_global_newData = (struct operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct operatorParser_OpDesc),k));;
_global_memcpy_operatorParser_OpDesc(_global_newData,_global_data,(*_global_self)->length,k);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,k);
return _global_newData;}else if(l == NULL){return (struct operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct operatorParser_OpDesc),k));}
}
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(k)->allocator,k);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpoperatorParsery(&_global_self,&_global_newSize,&_global_allocator, k);;
;}

static inline struct _global_Array_operatorParser_OpDesc* tmpoperatorParserz(struct _global_Array_____operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
struct _global_Array_operatorParser_OpDesc* l =(*_global_self)->data;
if(l != NULL){struct _global_Array_operatorParser_OpDesc* _global_data = l;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),k);
struct _global_Array_operatorParser_OpDesc* _global_newData;_global_newData = (struct _global_Array_operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_operatorParser_OpDesc),k));;
_global_memcpy_____operatorParser_OpDesc(_global_newData,_global_data,(*_global_self)->length,k);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,k);
return _global_newData;}else if(l == NULL){return (struct _global_Array_operatorParser_OpDesc*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct _global_Array_operatorParser_OpDesc),k));}
}
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(k)->allocator,k);;
(_global_self)->allocator=_global_allocator;;
(_global_self)->capacity=_global_newSize;;
(_global_self)->data=tmpoperatorParserz(&_global_self,&_global_newSize,&_global_allocator, k);;
;}
_Bool _global_StaticArray_contains_5_string(struct _global_StaticArray_5_string* _global_self, struct _global_String _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<5){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_5_string(_global_self,(unsigned int)_global_i,k))),&(_global_elem),k)){;
return 1;
;
;};_global_i=_global_i+1;;};
;return 0;
;}
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(k);;
print_type_to_string(_global_TypeFromStruct(ast_OperatorKind_get_type(NULL,k),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),k);
;return stringBuilder_StringBuilder_toString(&(print_s),k);
;}
struct error_CompilerError* error_make_Error_rparser_Parser(struct parser_Parser* error_self, struct _global_String error_mesg, struct _global_Context* k){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(parser_Parser_get_filename(error_self,k),parser_Parser_get_line(error_self,k),error_mesg,parser_Parser_get_column(error_self,k)),k);
;}
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator=(k)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_CompilerTypeFromStruct(types_make_Void(k),&rtypes_Void_VTABLE_FOR_types_CompilerType,rtypes_Void_VTABLE_FOR_types_CompilerType.type, &types_Void_toString, &types_Void_duck_type, &types_Void_equals, &types_Void_calc_size),NULL,parser_Parser_get_filename(ast_t,k),parser_Parser_get_line(ast_t,k),parser_Parser_get_column(ast_t,k)),k);
;}
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct ast_AST* _global_tmp;_global_tmp = *(_global_Array_op_get_rast_AST(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_r____operatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return (_global_Maybe_unwrap_roperatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)_global_index);
;}
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}
void _global_Array_append_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct operatorParser_OpDesc _global_value, struct _global_Context* k){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_operatorParser_OpDesc(_global_self,1,k);
;}
else{_global_Array_reserve_operatorParser_OpDesc(_global_self,(_global_self)->capacity*2,k);
;};
;};
*(((_global_Maybe_unwrap_roperatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
void _global_Array_append_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Array_operatorParser_OpDesc _global_value, struct _global_Context* k){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_____operatorParser_OpDesc(_global_self,1,k);
;}
else{_global_Array_reserve_____operatorParser_OpDesc(_global_self,(_global_self)->capacity*2,k);
;};
;};
*(((_global_Maybe_unwrap_r____operatorParser_OpDescByValue((_global_self)->data,k) + (int64_t)(_global_self)->length)))=_global_value;;
(_global_self)->length=_global_newLength;;
;}
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct _global_Array_operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_____operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length=(_global_self)->length-1;;
;return _global_tmp;
;}

void operatorParserInitTypes() { 
 printInitTypes();
_global_Array_____operatorParser_OpDescType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_____operatorParser_OpDescType.size->tag = 1;
_global_Array_____operatorParser_OpDescType.array_type=
_global_TypeFromStruct(
_global_Array_operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;_global_Array_operatorParser_OpDescType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_operatorParser_OpDescType.size->tag = 1;
_global_Array_operatorParser_OpDescType.array_type=
_global_TypeFromStruct(
operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;operatorParser_OpDescType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
operatorParser_OpDescType.fields = _global_StaticArray_StaticArray_S_FieldInit(
operatorParser_OpDescType_fields
,4
);
operatorParser_OpDescType.package = _global_StringInit(14, "operatorParser");
operatorParser_OpDescType.name = _global_StringInit(6, "OpDesc");
operatorParser_OpDescType.size = sizeof(struct operatorParser_OpDesc);
operatorParser_OpDescType_fields[0].name = _global_StringInit(5, "unary");
operatorParser_OpDescType_fields[0].offset = offsetof(struct operatorParser_OpDesc, unary);
operatorParser_OpDescType_fields[0].field_type = 
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
operatorParser_OpDescType_fields[1].name = _global_StringInit(10, "precedence");
operatorParser_OpDescType_fields[1].offset = offsetof(struct operatorParser_OpDesc, precedence);
operatorParser_OpDescType_fields[1].field_type = 
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
operatorParser_OpDescType_fields[2].name = _global_StringInit(4, "kind");
operatorParser_OpDescType_fields[2].offset = offsetof(struct operatorParser_OpDesc, kind);
operatorParser_OpDescType_fields[2].field_type = 
_global_TypeFromStruct(
ast_OperatorKind_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
operatorParser_OpDescType_fields[3].name = _global_StringInit(6, "left_a");
operatorParser_OpDescType_fields[3].offset = offsetof(struct operatorParser_OpDesc, left_a);
operatorParser_OpDescType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Bool_get_type(NULL,(&_global_context))
,
&rBoolType_VTABLE_FOR_Type
,
rBoolType_VTABLE_FOR_Type.type
, &_global_BoolType_toString
, &_global_BoolType_get_size
)
;_global_Maybe_roperatorParser_OpDescType.p_type =
_global_TypeFromStruct(
operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_roperatorParser_OpDescType.nullable = 1;_global_Maybe_r____operatorParser_OpDescType.p_type =
_global_TypeFromStruct(
_global_Array_operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
_global_Maybe_r____operatorParser_OpDescType.nullable = 1;operatorParser_OpStackType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 1);
operatorParser_OpStackType.fields = _global_StaticArray_StaticArray_S_FieldInit(
operatorParser_OpStackType_fields
,1
);
operatorParser_OpStackType.package = _global_StringInit(14, "operatorParser");
operatorParser_OpStackType.name = _global_StringInit(7, "OpStack");
operatorParser_OpStackType.size = sizeof(struct operatorParser_OpStack);
operatorParser_OpStackType_fields[0].name = _global_StringInit(6, "scopes");
operatorParser_OpStackType_fields[0].offset = offsetof(struct operatorParser_OpStack, scopes);
operatorParser_OpStackType_fields[0].field_type = 
_global_TypeFromStruct(
_global_Array_____operatorParser_OpDesc_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;parser_ParserType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
parser_ParserType.fields = _global_StaticArray_StaticArray_S_FieldInit(
parser_ParserType_fields
,7
);
parser_ParserType.package = _global_StringInit(6, "parser");
parser_ParserType.name = _global_StringInit(6, "Parser");
parser_ParserType.size = sizeof(struct parser_Parser);
parser_ParserType_fields[0].name = _global_StringInit(6, "tokens");
parser_ParserType_fields[0].offset = offsetof(struct parser_Parser, tokens);
parser_ParserType_fields[0].field_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
parser_ParserType_fields[1].name = _global_StringInit(8, "filename");
parser_ParserType_fields[1].offset = offsetof(struct parser_Parser, filename);
parser_ParserType_fields[1].field_type = 
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
parser_ParserType_fields[2].name = _global_StringInit(12, "current_node");
parser_ParserType_fields[2].offset = offsetof(struct parser_Parser, current_node);
parser_ParserType_fields[2].field_type = 
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
parser_ParserType_fields[3].name = _global_StringInit(4, "iter");
parser_ParserType_fields[3].offset = offsetof(struct parser_Parser, iter);
parser_ParserType_fields[3].field_type = 
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
parser_ParserType_fields[4].name = _global_StringInit(8, "op_stack");
parser_ParserType_fields[4].offset = offsetof(struct parser_Parser, op_stack);
parser_ParserType_fields[4].field_type = 
_global_TypeFromStruct(
operatorParser_OpStack_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
parser_ParserType_fields[5].name = _global_StringInit(9, "num_paren");
parser_ParserType_fields[5].offset = offsetof(struct parser_Parser, num_paren);
parser_ParserType_fields[5].field_type = 
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
parser_ParserType_fields[6].name = _global_StringInit(10, "num_indent");
parser_ParserType_fields[6].offset = offsetof(struct parser_Parser, num_indent);
parser_ParserType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StaticArray_5_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_5_stringType.size->tag = 0;
_global_StaticArray_5_stringType.size->cases.Static.field0 = 5;
_global_StaticArray_5_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
; }
void operatorParserInit() { 
;
;
printInit();;
;
};
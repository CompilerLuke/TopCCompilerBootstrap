void _global_memcpy_operatorParser_OpDesc(struct operatorParser_OpDesc* _global_target, struct operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
void _global_memcpy_____operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_target, struct _global_Array_operatorParser_OpDesc* _global_destination, unsigned int _global_length, struct _global_Context* k);
struct _global_String* _global_StaticArray_op_get_11_string(struct _global_StaticArray_11_string* _global_self, unsigned int _global_index, struct _global_Context* k);
unsigned char* _global_StaticArray_op_get_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned int _global_index, struct _global_Context* k);
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k);
void _global_Array_reserve_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
void _global_Array_reserve_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_newSize, struct _global_Context* k);
_Bool _global_StaticArray_contains_11_string(struct _global_StaticArray_11_string* _global_self, struct _global_String _global_elem, struct _global_Context* k);
_Bool _global_StaticArray_contains_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned char _global_elem, struct _global_Context* k);
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* k);
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k);
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
struct _global_StaticArray_11_string operatorParser_unary_symbols;operatorParser_unary_symbols = _global_StaticArray_11_stringInit(_global_StringInit(1,"("),_global_StringInit(1,")"),_global_StringInit(2,":="),_global_StringInit(1,":"),_global_StringInit(1,"\n"),_global_StringInit(1,","),_global_StringInit(2,"+="),_global_StringInit(2,"-="),_global_StringInit(2,"*="),_global_StringInit(2,"/="),_global_StringInit(2,"%="));;
struct _global_StaticArray_4_u8 operatorParser_unary_kinds;operatorParser_unary_kinds = _global_StaticArray_4_u8Init((lexer_Operator).tag,(lexer_Indent).tag,(lexer_Invalid).tag,(lexer_Keyword).tag);;
;struct lexer_TokenType l =(operatorParser_token).kind;
if(l.tag==5){return _global_StaticArray_contains_11_string(&(operatorParser_unary_symbols),(operatorParser_token).value,k);}else if(1){return _global_StaticArray_contains_4_u8(&(operatorParser_unary_kinds),((operatorParser_token).kind).tag,k);};
;}
struct error_CompilerError* operatorParser_OpDesc_add_to(struct operatorParser_OpDesc* operatorParser_self, struct parser_Parser* operatorParser_p, struct _global_Context* k){;
;
unsigned int operatorParser_takes;operatorParser_takes = ((operatorParser_self)->unary ? 1:(2));;
unsigned int operatorParser_active_index;operatorParser_active_index = *(_global_Array_op_get_uint(&((operatorParser_p)->active_index),(unsigned int)((operatorParser_p)->active_index).length-1,k));;
;if(((((operatorParser_p)->current_node)->nodes).length-operatorParser_active_index)<operatorParser_takes){;
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
struct error_CompilerError* l =operatorParser_OpDesc_add_to(&(operatorParser_current),operatorParser_p,k);if(l != NULL){struct error_CompilerError* operatorParser__x = l;

return operatorParser__x;
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
if(_global_String_op_eqByValue(l,_global_StringInit(1,"+"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Add,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"-"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,10,ast_Sub,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"*"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Mul,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"<"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,5,ast_LT,1),k);}else if(_global_String_op_eqByValue(l,_global_StringInit(1,"/"),NULL)){return operatorParser_OpStack_push_op(&((operatorParser_self)->op_stack),operatorParser_self,operatorParser_OpDescInit(0,20,ast_Div,1),k);}else if(1){return error_make_Error_rparser_Parser(operatorParser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(17,"Unknown operator "),(operatorParser_kind),k),_global_StringInit(0,""),k),k);};
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
;struct error_CompilerError* n =operatorParser_OpDesc_add_to(&(*(_global_Array_op_get_operatorParser_OpDesc(&(operatorParser_op_left),(unsigned int)(operatorParser_op_left).length-operatorParser_i-1,k))),operatorParser_p,k);if(n != NULL){struct error_CompilerError* operatorParser__x = n;

return operatorParser__x;
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
struct _global_String* _global_StaticArray_op_get_11_string(struct _global_StaticArray_11_string* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<11,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
unsigned char* _global_StaticArray_op_get_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<4,_global_StringInit(13,"Out of bounds"),k);
;return ((_global_self)->data + (int64_t)_global_index);
;}
struct ast_AST* _global_box_longterm_ast_AST(struct ast_AST _global_value, struct _global_Context* k){;
struct ast_AST* _global_pointer;_global_pointer = (struct ast_AST*)(_global_Allocator_alloc((k)->longterm_storage,(uint64_t)sizeof(struct ast_AST),k));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}

static inline struct operatorParser_OpDesc* tmpoperatorParsers(struct _global_Array_operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
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
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpoperatorParsers(&_global_self,&_global_newSize,&_global_allocator, k);;
;}

static inline struct _global_Array_operatorParser_OpDesc* tmpoperatorParsert(struct _global_Array_____operatorParser_OpDesc** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* k) {
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
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpoperatorParsert(&_global_self,&_global_newSize,&_global_allocator, k);;
;}
_Bool _global_StaticArray_contains_11_string(struct _global_StaticArray_11_string* _global_self, struct _global_String _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<11){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_11_string(_global_self,(unsigned int)_global_i,k))),&(_global_elem),k)){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
_Bool _global_StaticArray_contains_4_u8(struct _global_StaticArray_4_u8* _global_self, unsigned char _global_elem, struct _global_Context* k){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<4){if(*(&(*(_global_StaticArray_op_get_4_u8(_global_self,(unsigned int)_global_i,k))))==*(&(_global_elem))){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
unsigned int* _global_Array_op_get_uint(struct _global_Array_uint* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((unsigned int*)(_global_self)->data + (int64_t)_global_index);
;}
struct _global_String print_obj_toString_ast_OperatorKind(struct ast_OperatorKind print_t, struct _global_Context* k){;
struct stringBuilder_StringBuilder print_s;print_s = stringBuilder_make_StringBuilder(k);;
print_type_to_string(_global_TypeFromStruct(ast_OperatorKind_get_type(NULL,k),&rEnumType_VTABLE_FOR_Type,rEnumType_VTABLE_FOR_Type.type, &_global_EnumType_toString, &_global_EnumType_get_size),(void*)&(print_t),_global_StringInit(0,""),&(print_s),k);
;return stringBuilder_StringBuilder_toString(&(print_s),k);
;}
struct ast_AST* ast_make_AST_rparser_Parser(struct parser_Parser* ast_t, struct ast_Payload ast_payload, struct _global_Context* k){;
;
struct _global_Array_rast_AST ast_nodes;ast_nodes = _global_Array_rast_ASTInit(0, 0, NULL, NULL);;
(ast_nodes).allocator = (k)->longterm_storage;;
;return _global_box_longterm_ast_AST(ast_ASTInit(ast_payload,ast_nodes,types_Void,NULL,parser_Parser_get_filename(ast_t,k),parser_Parser_get_line(ast_t,k),parser_Parser_get_column(ast_t,k)),k);
;}
struct ast_AST* _global_Array_pop_rast_AST(struct _global_Array_rast_AST* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct ast_AST* _global_tmp;_global_tmp = *(_global_Array_op_get_rast_AST(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}
struct _global_Array_operatorParser_OpDesc* _global_Array_op_get_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((struct _global_Array_operatorParser_OpDesc*)(_global_self)->data + (int64_t)_global_index);
;}
struct operatorParser_OpDesc* _global_Array_op_get_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, unsigned int _global_index, struct _global_Context* k){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),k);
;return ((struct operatorParser_OpDesc*)(_global_self)->data + (int64_t)_global_index);
;}
struct operatorParser_OpDesc _global_Array_pop_operatorParser_OpDesc(struct _global_Array_operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
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
*((((struct operatorParser_OpDesc*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
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
*((((struct _global_Array_operatorParser_OpDesc*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
struct _global_Array_operatorParser_OpDesc _global_Array_pop_____operatorParser_OpDesc(struct _global_Array_____operatorParser_OpDesc* _global_self, struct _global_Context* k){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),k);
;};
struct _global_Array_operatorParser_OpDesc _global_tmp;_global_tmp = *(_global_Array_op_get_____operatorParser_OpDesc(_global_self,(unsigned int)(_global_self)->length-1,k));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}

void operatorParserInitTypes() { 
 printInitTypes();
_global_StaticArray_11_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_11_stringType.size->tag = 0;
_global_StaticArray_11_stringType.size->cases.Static.field0 = 11;
_global_StaticArray_11_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;_global_StaticArray_4_u8Type.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_4_u8Type.size->tag = 0;
_global_StaticArray_4_u8Type.size->cases.Static.field0 = 4;
_global_StaticArray_4_u8Type.array_type = 
_global_TypeFromStruct(
_global_u8_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
; }
void operatorParserInit() { 
;
;
printInit();;
;
};
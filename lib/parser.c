void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G);
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G);
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G);
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G);
struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* G){;
;
struct parser_Parser parser_p;parser_p = parser_ParserInit(parser_tokens,parser_filename,(struct ast_AST*)0,0,operatorParser_make_OpStack(G),_global_Array_uintInit(0, 0, NULL, NULL),0,0,_global_Array_uintInit(0, 0, NULL, NULL),_global_Array_uintInit(0, 0, NULL, NULL));;
(parser_p).current_node = ast_make_AST_rparser_Parser(&(parser_p),ast_Root,G);;
;return parser_Parser_parse(&(parser_p),G);
;}
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_self)->filename;
;}
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_Parser_current(parser_self,G)).line;
;}
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* G){;
;return (parser_Parser_current(parser_self,G)).column;
;}
unsigned int parser_Parser_get_active_index(struct parser_Parser* parser_self, struct _global_Context* G){;
;return *(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G));
;}
void parser_Parser_set_active_index(struct parser_Parser* parser_self, unsigned int parser_val, struct _global_Context* G){;
;
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = parser_val;;
;}
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* G){;
;if((parser_self)->iter+1<((parser_self)->tokens).length){;
return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter+1,G));}
else{struct lexer_Token parser_be;parser_be = parser_Parser_behind(parser_self,G);;
return lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),(parser_be).line,(parser_be).column);};
;}
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* G){;
;return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter,G));
;}
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* G){;
;return ((parser_self)->iter<1 ? lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),0,0):(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter-1,G))));
;}
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* G){;
struct lexer_Token parser_t;parser_t = parser_Parser_peek(parser_self,G);;
(parser_self)->iter = (parser_self)->iter+1;;
;return parser_t;
;}
struct error_CompilerError* parser_Parser_eval_till_end(struct parser_Parser* parser_self, struct _global_Context* G){;
unsigned int parser_indent;parser_indent = (parser_self)->num_indent;;
unsigned int parser_paren;parser_paren = (parser_self)->num_paren;;
;while(!(parser_Parser_is_end(parser_self,G))){parser_Parser_next(parser_self,G);struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return parser__x;
;
;}
else if(1){
;}
;};
;return NULL;
;}
struct error_CompilerError* parser_Parser_comma(struct parser_Parser* parser_self, struct _global_Context* G){;
struct error_CompilerError* H =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return parser__x;
;
;}
else if(1){
;}
;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = ast_AST_length((parser_self)->current_node,G);;
;return NULL;
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparsery(struct _global_Result_rerror_CompilerError_Result_T J) {
struct _global_Result_rerror_CompilerError_rast_AST H;H.tag = J.tag;H.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(J.cases);return H;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserz(struct _global_Result_Result_E_rast_AST L) {
struct _global_Result_rerror_CompilerError_rast_AST K;K.tag = L.tag;K.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(L.cases);return K;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop_last(struct parser_Parser* parser_self, struct _global_Context* G){;
if((((parser_self)->current_node)->nodes).length==0){;
return tmpparsery(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,_global_StringInit(10,"Unexpected"),G),G));
;
;};
;return tmpparserz(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
;}
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* G){;
;return parser_Parser_eval_not_func_call(parser_self,0,G);
;}

static inline struct error_CompilerError* tmpparserF(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
if((*parser_self)->num_paren>0){;
(*parser_self)->num_paren = (*parser_self)->num_paren-1;;
return NULL;}
else{return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected )"),G);}
}

static inline struct error_CompilerError* tmpparserC(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String J =(*parser_token).value;
if(_global_String_op_eqByValue(J,_global_StringInit(4,"true"),NULL)||_global_String_op_eqByValue(J,_global_StringInit(5,"false"),NULL)){return basicTypes_parse_bool_literal(*parser_self,(*parser_token).value,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(2,"if"),NULL)){return ifStatement_if_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"else"),NULL)){return ifStatement_else_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(5,"while"),NULL)){return whileStatement_while_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(3,"def"),NULL)){return funcParser_parse_funcDef(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"type"),NULL)){return structParser_parse_struct(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserD(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String K =(*parser_token).value;
if(_global_String_op_eqByValue(K,_global_StringInit(1,"("),NULL)){return (operatorParser_is_unary(*parser_self,G) ? tuple_parse_tuple(*parser_self,G):(funcCall_parse_funcCall(*parser_self,G)));}else if(_global_String_op_eqByValue(K,_global_StringInit(2,":="),NULL)){return varParser_parse_create_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"="),NULL)){return varParser_parse_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"+="),NULL)){return varParser_parse_add_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"-="),NULL)){return varParser_parse_sub_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,","),NULL)){return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected ,"),G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"\n"),NULL)){return NULL;}else if(_global_String_op_eqByValue(K,_global_StringInit(1,")"),NULL)){return tmpparserF(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserB(struct parser_Parser** parser_self,_Bool* parser_ignore_func_call,struct lexer_Token* parser_token,struct error_CompilerError** parser_value, struct _global_Context* G) {
struct lexer_TokenType H =(*parser_token).kind;
if(H.tag==3){return operatorParser_parse_operator(*parser_self,(*parser_token).value,G);}else if(H.tag==0){return basicTypes_parse_int_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==1){return basicTypes_parse_float_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==2){return varParser_parse_identifier(*parser_self,(*parser_token).value,G);}else if(H.tag==6){if(_global_String_op_eqByValue((parser_Parser_peek(*parser_self,G)).value,_global_StringInit(1,"\n"),G)){;
parser_Parser_next(*parser_self,G);
;}
else{(*parser_self)->num_indent = ((*parser_token).value).length;;
;};
return NULL;}else if(H.tag==7){return tmpparserC(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==5){return tmpparserD(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==8){return stringParser_parse_string(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((*parser_token).kind),G),G),_global_StringInit(19," token, not handled"),G),G);}
}
struct error_CompilerError* parser_Parser_eval_not_func_call(struct parser_Parser* parser_self, _Bool parser_ignore_func_call, struct _global_Context* G){;
;
struct lexer_Token parser_token;parser_token = parser_Parser_current(parser_self,G);;
_global_Array_append_uint(&((parser_self)->paren_stack),(parser_self)->num_paren,G);
_global_Array_append_uint(&((parser_self)->indent_stack),(parser_self)->num_indent,G);
struct error_CompilerError* parser_value;parser_value = tmpparserB(&parser_self,&parser_ignore_func_call,&parser_token,&parser_value, G);;
_global_Array_pop_uint(&((parser_self)->paren_stack),G);
_global_Array_pop_uint(&((parser_self)->indent_stack),G);
;return parser_value;
;}
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* G){;
;
ast_AST_add((parser_self)->current_node,parser_node,G);
(parser_self)->current_node = parser_node;;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
_global_Array_append_uint(&((parser_self)->active_index),0,G);
;}
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* G){;
struct ast_AST* parser_owner;;
struct ast_AST* H =((parser_self)->current_node)->owner;if(H != NULL){parser_owner = H;

;}
else if(1){
_global_panic(_global_StringInit(52,"Tried to pop current node which didn't have an owner"),G);
;}
;
struct error_CompilerError* J =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(J != NULL){struct error_CompilerError* parser__x = J;

return parser__x;
;
;}
else if(1){
;}
;
_global_Array_pop_uint(&((parser_self)->active_index),G);
(parser_self)->current_node = parser_owner;;
;return NULL;
;}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop(struct parser_Parser* parser_self, struct _global_String parser_mesg, struct _global_Context* G){;
;
if((((parser_self)->current_node)->nodes).length==0){;
return tmpparsery(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(5,"pop: "),(parser_mesg),G),_global_StringInit(0,""),G),G),G));
;
;};
;return tmpparserz(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
;}
unsigned int parser_Parser_push_paren(struct parser_Parser* parser_self, struct _global_Context* G){;
(parser_self)->num_paren = (parser_self)->num_paren+1;;
;return (parser_self)->num_paren-1;
;}
struct error_CompilerError* parser_Parser_expect_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
;return (((parser_Parser_current(parser_self,G)).kind).tag!=(parser_typ).tag ? error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(12,"Expect tag: "),(parser_mesg),G),_global_StringInit(0,""),G),G):(NULL));
;}
struct error_CompilerError* parser_Parser_expect_next_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
parser_Parser_next(parser_self,G);
;return parser_Parser_expect_tag(parser_self,parser_typ,parser_mesg,G);
;}
struct error_CompilerError* parser_Parser_expect_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
;return (_global_String_op_neByValue((parser_Parser_current(parser_self,G)).value,parser_tok,G) ? error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Expect token: "),(parser_mesg),G),_global_StringInit(0,""),G),G):(NULL));
;}
struct error_CompilerError* parser_Parser_expect_next_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
;
;
parser_Parser_next(parser_self,G);
;return parser_Parser_expect_token(parser_self,parser_tok,parser_mesg,G);
;}
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, struct _global_Context* G){;
unsigned int parser_num_indent;parser_num_indent = *(_global_Array_op_get_uint(&((parser_self)->indent_stack),(unsigned int)((parser_self)->indent_stack).length-1,G));;
unsigned int parser_num_paren;parser_num_paren = *(_global_Array_op_get_uint(&((parser_self)->paren_stack),(unsigned int)((parser_self)->paren_stack).length-1,G));;
if(parser_num_paren>(parser_self)->num_paren){;
return 1;
;
;};
;struct lexer_TokenType H =(parser_Parser_current(parser_self,G)).kind;
if(H.tag==6){return (parser_self)->num_indent<=parser_num_indent;}else if(1){return 0;};
;}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* G){;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
;while((parser_self)->iter<((parser_self)->tokens).length){struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

return tmpparsery(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
;
;}
else if(1){
;}
;parser_Parser_next(parser_self,G);};
(parser_self)->iter = ((parser_self)->tokens).length-1;;
struct error_CompilerError* J =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(J != NULL){struct error_CompilerError* parser__x = J;

return tmpparsery(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
;
;}
else if(1){
;}
;
;return tmpparserz(_global_Ok_Result_E_rast_AST((parser_self)->current_node,G));
;}
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(unsigned int),G);
;}

static inline unsigned int* tmpparserG(struct _global_Array_uint** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* G) {
unsigned int* H =(*_global_self)->data;
if(H != NULL){unsigned int* _global_data = H;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),G);
unsigned int* _global_newData;_global_newData = (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));;
_global_memcpy_uint(_global_newData,_global_data,(*_global_self)->length,G);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,G);
return _global_newData;}else if(H == NULL){return (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));}
}
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(G)->allocator,G);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmpparserG(&_global_self,&_global_newSize,&_global_allocator, G);;
;}
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),G);
;return ((_global_self)->data + (int64_t)_global_index);
;}
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_uint(_global_self,1,G);
;}
else{_global_Array_reserve_uint(_global_self,(_global_self)->capacity*2,G);
;};
;};
*((((unsigned int*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G){;
if((_global_self)->length==0){;
_global_panic(_global_StringInit(25,"trying to pop empty array"),G);
;};
unsigned int _global_tmp;_global_tmp = *(_global_Array_op_get_uint(_global_self,(unsigned int)(_global_self)->length-1,G));;
(_global_self)->length = (_global_self)->length-1;;
;return _global_tmp;
;}

void parserInitTypes() { 
 astInitTypes();operatorParserInitTypes();basicTypesInitTypes();varParserInitTypes();tupleInitTypes();funcCallInitTypes();ifStatementInitTypes();whileStatementInitTypes();funcParserInitTypes();stringParserInitTypes();structParserInitTypes();
struct _global_Case* k =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
k[0].name = _global_StringInit(2, "Ok");
k[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[0].args.data[0].arg_type = 
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
; k[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; k[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Error, field0);
_global_Result_Result_E_rast_ASTType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E_rast_ASTType.tag_field.offset = offsetof(struct _global_Result_Result_E_rast_AST, tag);
_global_Result_Result_E_rast_ASTType.tag_field.field_type = 
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

_global_Result_Result_E_rast_ASTType.size = sizeof(struct _global_Result_Result_E_rast_AST);

_global_Result_Result_E_rast_ASTType.package = _global_StringInit(7, "_global");
_global_Result_Result_E_rast_ASTType.name = _global_StringInit(24, "Result_Result_E_rast_AST");
_global_Result_Result_E_rast_ASTType.cases.data = k;
_global_Result_Result_E_rast_ASTType.cases.length = 2;
 }
void parserInit() { 
astInit();;
;
operatorParserInit();;
;
basicTypesInit();;
;
varParserInit();;
;
tupleInit();;
;
funcCallInit();;
;
ifStatementInit();;
;
whileStatementInit();;
;
funcParserInit();;
;
stringParserInit();;
;
structParserInit();;
;
;
};
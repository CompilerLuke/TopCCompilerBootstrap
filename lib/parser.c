struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* r);
struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* r){;
;
struct parser_Parser parser_p;parser_p = parser_ParserInit(parser_tokens,parser_filename,(struct ast_AST*)0,0,operatorParser_make_OpStack(r),0,0);;
(parser_p).current_node=ast_make_AST_rparser_Parser(&(parser_p),ast_Root,r);;
;return parser_Parser_parse(&(parser_p),r);
;}
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_self)->filename;
;}
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_Parser_current(parser_self,r)).line;
;}
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* r){;
;return (parser_Parser_current(parser_self,r)).column;
;}
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* r){;
;if((parser_self)->iter+1<((parser_self)->tokens).length){;
return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter+1,r));}
else{struct lexer_Token parser_be;parser_be = parser_Parser_behind(parser_self,r);;
return lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),(parser_be).line,(parser_be).column);};
;}
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* r){;
;return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter,r));
;}
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* r){;
;return ((parser_self)->iter<1 ? lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),0,0):(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter-1,r))));
;}
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* r){;
struct lexer_Token parser_t;parser_t = parser_Parser_peek(parser_self,r);;
(parser_self)->iter=(parser_self)->iter+1;;
;return parser_t;
;}

static inline struct error_CompilerError* tmpparserF(struct parser_Parser* *parser_self,struct lexer_Token *parser_token, struct _global_Context* r) {
if((*parser_self)->num_paren==0){;
return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected )"),r);}
else{(*parser_self)->num_paren=(*parser_self)->num_paren-1;;
return NULL;}
}

static inline struct error_CompilerError* tmpparserC(struct parser_Parser** parser_self,struct lexer_Token* parser_token, struct _global_Context* r) {
struct _global_String t =(*parser_token).value;
if(_global_String_op_eqByValue(t,_global_StringInit(4,"true"),NULL)||_global_String_op_eqByValue(t,_global_StringInit(5,"false"),NULL)){return basicTypes_parse_bool_literal(*parser_self,(*parser_token).value,r);}else if(_global_String_op_eqByValue(t,_global_StringInit(2,"if"),NULL)){return ifStatement_if_expr(*parser_self,r);}else if(_global_String_op_eqByValue(t,_global_StringInit(4,"else"),NULL)){return ifStatement_else_expr(*parser_self,r);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),r),_global_StringInit(19," token, not handled"),r),r);}
}

static inline struct error_CompilerError* tmpparserD(struct parser_Parser** parser_self,struct lexer_Token* parser_token, struct _global_Context* r) {
struct _global_String v =(*parser_token).value;
if(_global_String_op_eqByValue(v,_global_StringInit(1,"("),NULL)){return (operatorParser_is_unary(*parser_self,r) ? tuple_parse_tuple(*parser_self,r):(funcCall_parse_funcCall(*parser_self,r)));}else if(_global_String_op_eqByValue(v,_global_StringInit(2,":="),NULL)){return varParser_parse_create_assign(*parser_self,r);}else if(_global_String_op_eqByValue(v,_global_StringInit(1,"\n"),NULL)){return NULL;}else if(_global_String_op_eqByValue(v,_global_StringInit(1,")"),NULL)){return tmpparserF(parser_self,parser_token, r);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),r),_global_StringInit(19," token, not handled"),r),r);}
}
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* r){;
struct lexer_Token parser_token;parser_token = parser_Parser_current(parser_self,r);;
;struct lexer_TokenType s =(parser_token).kind;
if(s.tag==3){return operatorParser_parse_operator(parser_self,(parser_token).value,r);}else if(s.tag==0){return basicTypes_parse_int_literal(parser_self,(parser_token).value,r);}else if(s.tag==1){return basicTypes_parse_float_literal(parser_self,(parser_token).value,r);}else if(s.tag==2){return varParser_parse_identifier(parser_self,(parser_token).value,r);}else if(s.tag==6){(parser_self)->num_indent=((parser_token).value).length;;
return NULL;}else if(s.tag==7){return tmpparserC(&parser_self,&parser_token, r);}else if(s.tag==5){return tmpparserD(&parser_self,&parser_token, r);}else if(1){return error_make_Error_rparser_Parser(parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((parser_token).kind),r),r),_global_StringInit(19," token, not handled"),r),r);};
;}
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* r){;
;
ast_AST_add((parser_self)->current_node,parser_node,r);
(parser_self)->current_node=parser_node;;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,r);
;}
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* r){;
struct ast_AST* parser_owner;;
struct ast_AST* s =((parser_self)->current_node)->owner;if(s != NULL){parser_owner = s;

;}
else if(1){
_global_panic(_global_StringInit(52,"Tried to pop current node which didn't have an owner"),r);
;}
;
struct error_CompilerError* t =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,r);if(t != NULL){struct error_CompilerError* parser_e = t;

return parser_e;
;
;}
else if(1){
;}
;
(parser_self)->current_node=parser_owner;;
;return NULL;
;}
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, unsigned int parser_num_indent, struct _global_Context* r){;
;
;struct lexer_TokenType s =(parser_Parser_current(parser_self,r)).kind;
if(s.tag==6){return (parser_self)->num_indent<=parser_num_indent;}else if(1){return 0;};
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserG(struct _global_Result_rerror_CompilerError_Result_T v) {
struct _global_Result_rerror_CompilerError_rast_AST t;t.tag = v.tag;t.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(v.cases);return t;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserH(struct _global_Result_rerror_CompilerError_Result_T y) {
struct _global_Result_rerror_CompilerError_rast_AST x;x.tag = y.tag;x.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(y.cases);return x;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserJ(struct _global_Result_Result_E_rast_AST B) {
struct _global_Result_rerror_CompilerError_rast_AST z;z.tag = B.tag;z.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(B.cases);return z;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* r){;
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,r);
;while((parser_self)->iter<((parser_self)->tokens).length){struct error_CompilerError* s =parser_Parser_eval(parser_self,r);if(s != NULL){struct error_CompilerError* parser_e = s;

return tmpparserG(_global_Error_rerror_CompilerError_Result_T(parser_e,r));
;
;}
else if(1){
;}
;parser_Parser_next(parser_self,r);};
(parser_self)->iter=((parser_self)->tokens).length-1;;
struct error_CompilerError* w =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,r);if(w != NULL){struct error_CompilerError* parser_e = w;

return tmpparserH(_global_Error_rerror_CompilerError_Result_T(parser_e,r));
;
;}
else if(1){
;}
;
;return tmpparserJ(_global_Ok_Result_E_rast_AST((parser_self)->current_node,r));
;}
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* r){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),r);
;return ((_global_self)->data + (int64_t)_global_index);
;}

void parserInitTypes() { 
 astInitTypes();operatorParserInitTypes();basicTypesInitTypes();varParserInitTypes();tupleInitTypes();funcCallInitTypes();ifStatementInitTypes();
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
; k[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Ok, field0);
k[1].name = _global_StringInit(5, "Error");
k[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
k[1].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_boxPointerType(_global_PointerTypeInit(
_global_TypeFromStruct(
error_CompilerError_get_type(NULL,(&_global_context))
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
; k[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST_Error, field0);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_rast_ASTType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_rast_AST, tag);
_global_Result_rerror_CompilerError_rast_ASTType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError_rast_ASTType.size = sizeof(struct _global_Result_rerror_CompilerError_rast_AST);

_global_Result_rerror_CompilerError_rast_ASTType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_rast_ASTType.name = _global_StringInit(36, "Result_rerror_CompilerError_rast_AST");
_global_Result_rerror_CompilerError_rast_ASTType.cases.data = k;
_global_Result_rerror_CompilerError_rast_ASTType.cases.length = 2;
struct _global_Case* t =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
t[0].name = _global_StringInit(2, "Ok");
t[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[0].args.data[0].arg_type = 
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
; t[0].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Ok, field0);
t[1].name = _global_StringInit(5, "Error");
t[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
t[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; t[1].args.data[0].offset = offsetof(struct _global_Result_Result_E_rast_AST_Error, field0);
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
_global_Result_Result_E_rast_ASTType.cases.data = t;
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
;
};
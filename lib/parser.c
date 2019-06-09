void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G);
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G);
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G);
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G);
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G);
struct _global_Result_rerror_CompilerError_rast_AST parser_parse(struct _global_StaticArray_StaticArray_S_lexer_Token parser_tokens, struct _global_String parser_filename, struct _global_Context* G){;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 29 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct parser_Parser parser_p;parser_p = parser_ParserInit(parser_tokens,parser_filename,(struct ast_AST*)0,0,operatorParser_make_OpStack(G),_global_Array_uintInit(0, 0, NULL, NULL),0,0,_global_Array_uintInit(0, 0, NULL, NULL),_global_Array_uintInit(0, 0, NULL, NULL));;
#line 30 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_p).current_node = ast_make_AST_rparser_Parser(&(parser_p),ast_Root,G);;
#line 43 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_Parser_parse(&(parser_p),G);
#line 45 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct _global_String parser_Parser_get_filename(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (parser_self)->filename;
#line 47 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
unsigned int parser_Parser_get_line(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (parser_Parser_current(parser_self,G)).line;
#line 48 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
unsigned int parser_Parser_get_column(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (parser_Parser_current(parser_self,G)).column;
#line 49 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
unsigned int parser_Parser_get_active_index(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 51 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return *(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G));
#line 52 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
void parser_Parser_set_active_index(struct parser_Parser* parser_self, unsigned int parser_val, struct _global_Context* G){;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 54 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = parser_val;;
#line 55 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct lexer_Token parser_Parser_peek(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;if((parser_self)->iter+1<((parser_self)->tokens).length){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter+1,G));}
else{struct lexer_Token parser_be;parser_be = parser_Parser_behind(parser_self,G);;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),(parser_be).line,(parser_be).column);};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct lexer_Token parser_Parser_current(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 68 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return *(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter,G));
#line 69 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct lexer_Token parser_Parser_behind(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 71 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return ((parser_self)->iter<1 ? lexer_TokenInit(lexer_Invalid,_global_StringInit(0,""),0,0):(*(_global_StaticArray_op_get_StaticArray_S_lexer_Token(&((parser_self)->tokens),(unsigned int)(parser_self)->iter-1,G))));
#line 72 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct lexer_Token parser_Parser_next(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 82 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct lexer_Token parser_t;parser_t = parser_Parser_peek(parser_self,G);;
#line 83 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_self)->iter = (parser_self)->iter+1;;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_t;
#line 85 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_eval_till_end(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 87 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
unsigned int parser_indent;parser_indent = (parser_self)->num_indent;;
#line 88 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
unsigned int parser_paren;parser_paren = (parser_self)->num_paren;;
#line 89 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;while(!(parser_Parser_is_end(parser_self,G))){parser_Parser_next(parser_self,G);struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return parser__x;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 94 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;};
#line 91 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return NULL;
#line 95 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* parser_Parser_comma(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct error_CompilerError* H =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return parser__x;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
#line 99 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
*(_global_Array_op_get_uint(&((parser_self)->active_index),(unsigned int)((parser_self)->active_index).length-1,G)) = ast_AST_length((parser_self)->current_node,G);;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return NULL;
#line 101 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserT(struct _global_Result_rerror_CompilerError_Result_T J) {
struct _global_Result_rerror_CompilerError_rast_AST H;H.tag = J.tag;H.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(J.cases);return H;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserV(struct _global_Result_Result_E_rast_AST L) {
struct _global_Result_rerror_CompilerError_rast_AST K;K.tag = L.tag;K.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(L.cases);return K;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop_last(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 103 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
if((((parser_self)->current_node)->nodes).length==0){;
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return tmpparserT(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,_global_StringInit(10,"Unexpected"),G),G));
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;};
#line 104 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return tmpparserV(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
#line 107 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
struct error_CompilerError* parser_Parser_eval(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 109 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_Parser_eval_not_func_call(parser_self,0,G);
#line 110 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}

static inline struct error_CompilerError* tmpparserX(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String J =(*parser_token).value;
if(_global_String_op_eqByValue(J,_global_StringInit(4,"true"),NULL)||_global_String_op_eqByValue(J,_global_StringInit(5,"false"),NULL)){return basicTypes_parse_bool_literal(*parser_self,(*parser_token).value,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(2,"if"),NULL)){return ifStatement_if_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"else"),NULL)){return ifStatement_else_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(5,"while"),NULL)){return whileStatement_while_expr(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(3,"def"),NULL)){return funcParser_parse_funcDef(*parser_self,G);}else if(_global_String_op_eqByValue(J,_global_StringInit(4,"type"),NULL)){return structParser_parse_struct(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserY(struct parser_Parser* *parser_self,_Bool *parser_ignore_func_call,struct lexer_Token *parser_token,struct error_CompilerError* *parser_value, struct _global_Context* G) {
struct _global_String K =(*parser_token).value;
if(_global_String_op_eqByValue(K,_global_StringInit(1,"("),NULL)){return (operatorParser_is_unary(*parser_self,G) ? tuple_parse_tuple(*parser_self,G):(funcCall_parse_funcCall(*parser_self,G)));}else if(_global_String_op_eqByValue(K,_global_StringInit(2,":="),NULL)){return varParser_parse_create_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"="),NULL)){return varParser_parse_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"+="),NULL)){return varParser_parse_add_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(2,"-="),NULL)){return varParser_parse_sub_assign(*parser_self,G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,","),NULL)){return error_make_Error_rparser_Parser(*parser_self,_global_StringInit(12,"Unexpected ,"),G);}else if(_global_String_op_eqByValue(K,_global_StringInit(1,"\n"),NULL)){return NULL;}else if(_global_String_op_eqByValue(K,_global_StringInit(1,")"),NULL)){(*parser_self)->num_paren = (*parser_self)->num_paren-1;;
#line 156 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return NULL;}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),((*parser_token).value),G),_global_StringInit(19," token, not handled"),G),G);}
}

static inline struct error_CompilerError* tmpparserW(struct parser_Parser** parser_self,_Bool* parser_ignore_func_call,struct lexer_Token* parser_token,struct error_CompilerError** parser_value, struct _global_Context* G) {
struct lexer_TokenType H =(*parser_token).kind;
if(H.tag==3){return operatorParser_parse_operator(*parser_self,(*parser_token).value,G);}else if(H.tag==0){return basicTypes_parse_int_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==1){return basicTypes_parse_float_literal(*parser_self,(*parser_token).value,G);}else if(H.tag==2){return varParser_parse_identifier(*parser_self,(*parser_token).value,G);}else if(H.tag==6){if(_global_String_op_eqByValue((parser_Parser_peek(*parser_self,G)).value,_global_StringInit(1,"\n"),G)){;
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
parser_Parser_next(*parser_self,G);
#line 125 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
else{(*parser_self)->num_indent = ((*parser_token).value).length;;
#line 127 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;};
#line 124 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return NULL;}else if(H.tag==7){return tmpparserX(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==5){return tmpparserY(parser_self,parser_ignore_func_call,parser_token,parser_value, G);}else if(H.tag==8){return stringParser_parse_string(*parser_self,G);}else if(1){return error_make_Error_rparser_Parser(*parser_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((*parser_token).kind),G),G),_global_StringInit(19," token, not handled"),G),G);}
}
struct error_CompilerError* parser_Parser_eval_not_func_call(struct parser_Parser* parser_self, _Bool parser_ignore_func_call, struct _global_Context* G){;
#line 112 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 112 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct lexer_Token parser_token;parser_token = parser_Parser_current(parser_self,G);;
#line 113 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_append_uint(&((parser_self)->paren_stack),(parser_self)->num_paren,G);
#line 115 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_append_uint(&((parser_self)->indent_stack),(parser_self)->num_indent,G);
#line 116 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct error_CompilerError* parser_value;parser_value = tmpparserW(&parser_self,&parser_ignore_func_call,&parser_token,&parser_value, G);;
#line 118 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_pop_uint(&((parser_self)->paren_stack),G);
#line 167 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_pop_uint(&((parser_self)->indent_stack),G);
#line 168 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_value;
#line 170 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
void parser_Parser_push_current_node(struct parser_Parser* parser_self, struct ast_AST* parser_node, struct _global_Context* G){;
#line 172 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 172 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
ast_AST_add((parser_self)->current_node,parser_node,G);
#line 173 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_self)->current_node = parser_node;;
#line 174 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
#line 176 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_append_uint(&((parser_self)->active_index),0,G);
#line 177 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_pop_current_node(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 179 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct ast_AST* parser_owner;;
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct ast_AST* H =((parser_self)->current_node)->owner;if(H != NULL){parser_owner = H;

#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_panic(_global_StringInit(52,"Tried to pop current node which didn't have an owner"),G);
#line 181 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 181 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 180 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct error_CompilerError* J =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(J != NULL){struct error_CompilerError* parser__x = J;

#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return parser__x;
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 183 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
_global_Array_pop_uint(&((parser_self)->active_index),G);
#line 184 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_self)->current_node = parser_owner;;
#line 185 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return NULL;
#line 187 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserZ(struct _global_Result_rerror_CompilerError_Result_T J) {
struct _global_Result_rerror_CompilerError_rast_AST H;H.tag = J.tag;H.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(J.cases);return H;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserbb(struct _global_Result_Result_E_rast_AST L) {
struct _global_Result_rerror_CompilerError_rast_AST K;K.tag = L.tag;K.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(L.cases);return K;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_pop(struct parser_Parser* parser_self, struct _global_String parser_mesg, struct _global_Context* G){;
#line 189 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 189 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
if((((parser_self)->current_node)->nodes).length==0){;
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return tmpparserZ(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rparser_Parser(parser_self,parser_mesg,G),G));
#line 191 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 191 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;};
#line 190 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return tmpparserbb(_global_Ok_Result_E_rast_AST(_global_Array_pop_rast_AST(&(((parser_self)->current_node)->nodes),G),G));
#line 193 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
unsigned int parser_Parser_push_paren(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 195 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_self)->num_paren = (parser_self)->num_paren+1;;
#line 196 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (parser_self)->num_paren-1;
#line 197 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_expect_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
#line 199 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 199 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 199 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (((parser_Parser_current(parser_self,G)).kind).tag!=(parser_typ).tag ? error_make_Error_rparser_Parser(parser_self,parser_mesg,G):(NULL));
#line 200 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_expect_next_tag(struct parser_Parser* parser_self, struct lexer_TokenType parser_typ, struct _global_String parser_mesg, struct _global_Context* G){;
#line 205 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 205 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 205 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
parser_Parser_next(parser_self,G);
#line 206 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_Parser_expect_tag(parser_self,parser_typ,parser_mesg,G);
#line 207 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_expect_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
#line 209 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 209 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 209 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return (_global_String_op_neByValue((parser_Parser_current(parser_self,G)).value,parser_tok,G) ? error_make_Error_rparser_Parser(parser_self,parser_mesg,G):(NULL));
#line 210 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
struct error_CompilerError* parser_Parser_expect_next_token(struct parser_Parser* parser_self, struct _global_String parser_tok, struct _global_String parser_mesg, struct _global_Context* G){;
#line 215 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 215 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 215 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
parser_Parser_next(parser_self,G);
#line 216 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return parser_Parser_expect_token(parser_self,parser_tok,parser_mesg,G);
#line 217 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
_Bool parser_Parser_is_end(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 219 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
unsigned int parser_num_indent;parser_num_indent = *(_global_Array_op_get_uint(&((parser_self)->indent_stack),(unsigned int)((parser_self)->indent_stack).length-1,G));;
#line 220 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
unsigned int parser_num_paren;parser_num_paren = *(_global_Array_op_get_uint(&((parser_self)->paren_stack),(unsigned int)((parser_self)->paren_stack).length-1,G));;
#line 221 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
if(parser_num_paren>(parser_self)->num_paren){;
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return 1;
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;};
#line 223 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;struct lexer_TokenType H =(parser_Parser_current(parser_self,G)).kind;
if(H.tag==6){return (parser_self)->num_indent<=parser_num_indent;}else if(1){return 0;};
#line 224 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserbc(struct _global_Result_rerror_CompilerError_Result_T K) {
struct _global_Result_rerror_CompilerError_rast_AST J;J.tag = K.tag;J.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(K.cases);return J;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserbd(struct _global_Result_rerror_CompilerError_Result_T N) {
struct _global_Result_rerror_CompilerError_rast_AST M;M.tag = N.tag;M.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(N.cases);return M;
}
static inline struct _global_Result_rerror_CompilerError_rast_AST tmpparserbf(struct _global_Result_Result_E_rast_AST Q) {
struct _global_Result_rerror_CompilerError_rast_AST P;P.tag = Q.tag;P.cases = *(union _global_Result_rerror_CompilerError_rast_AST_cases*) &(Q.cases);return P;
}
struct _global_Result_rerror_CompilerError_rast_AST parser_Parser_parse(struct parser_Parser* parser_self, struct _global_Context* G){;
#line 228 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
operatorParser_OpStack_push(&((parser_self)->op_stack),parser_self,G);
#line 229 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;while((parser_self)->iter<((parser_self)->tokens).length){struct error_CompilerError* H =parser_Parser_eval(parser_self,G);if(H != NULL){struct error_CompilerError* parser__x = H;

#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return tmpparserbc(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 232 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;parser_Parser_next(parser_self,G);};
#line 231 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
(parser_self)->iter = ((parser_self)->tokens).length-1;;
#line 235 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
struct error_CompilerError* L =operatorParser_OpStack_pop(&((parser_self)->op_stack),parser_self,G);if(L != NULL){struct error_CompilerError* parser__x = L;

#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
return tmpparserbd(_global_Error_rerror_CompilerError_Result_T(parser__x,G));
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
else if(1){
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;}
#line 237 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 236 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;return tmpparserbf(_global_Ok_Result_E_rast_AST((parser_self)->current_node,G));
#line 238 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/.top"
;}
void _global_memcpy_uint(unsigned int* _global_target, unsigned int* _global_destination, unsigned int _global_length, struct _global_Context* G){;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(unsigned int),G);
#line 9 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/memory.top"
;}

static inline unsigned int* tmpparserbg(struct _global_Array_uint** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* G) {
unsigned int* H =(*_global_self)->data;
if(H != NULL){unsigned int* _global_data = H;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),G);
#line 82 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int* _global_newData;_global_newData = (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));;
#line 84 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_memcpy_uint(_global_newData,_global_data,(*_global_self)->length,G);
#line 85 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,G);
#line 87 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
return _global_newData;}else if(H == NULL){return (unsigned int*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(unsigned int),G));}
}
void _global_Array_reserve_uint(struct _global_Array_uint* _global_self, unsigned int _global_newSize, struct _global_Context* G){;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 75 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(G)->allocator,G);;
#line 76 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->allocator = _global_allocator;;
#line 78 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->capacity = _global_newSize;;
#line 79 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->data = tmpparserbg(&_global_self,&_global_newSize,&_global_allocator, G);;
#line 80 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
struct lexer_Token* _global_StaticArray_op_get_StaticArray_S_lexer_Token(struct _global_StaticArray_StaticArray_S_lexer_Token* _global_self, unsigned int _global_index, struct _global_Context* G){;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),G);
#line 6 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;return ((_global_self)->data + (int64_t)_global_index);
#line 7 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/array.top"
;}
void _global_Array_append_uint(struct _global_Array_uint* _global_self, unsigned int _global_value, struct _global_Context* G){;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;
#line 97 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
#line 98 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if(_global_newLength>(_global_self)->capacity){;
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->capacity==0){;
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_Array_reserve_uint(_global_self,1,G);
#line 101 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
else{_global_Array_reserve_uint(_global_self,(_global_self)->capacity*2,G);
#line 103 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 100 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 99 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
*((((unsigned int*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
#line 105 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = _global_newLength;;
#line 106 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;}
unsigned int _global_Array_pop_uint(struct _global_Array_uint* _global_self, struct _global_Context* G){;
#line 57 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
if((_global_self)->length==0){;
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
_global_panic(_global_StringInit(25,"trying to pop empty array"),G);
#line 59 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;};
#line 58 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
unsigned int _global_tmp;_global_tmp = *(_global_Array_op_get_uint(_global_self,(unsigned int)(_global_self)->length-1,G));;
#line 61 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
(_global_self)->length = (_global_self)->length-1;;
#line 62 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
;return _global_tmp;
#line 63 "C:\\Users\\User\\Desktop\\TopCCompiler\\TopCompiler\\TopRuntime/src/_global/dynamic_array.top"
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
#line 1 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 3 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
operatorParserInit();;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 4 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
basicTypesInit();;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 5 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
varParserInit();;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 6 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
tupleInit();;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 7 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
funcCallInit();;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 8 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
ifStatementInit();;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 9 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
whileStatementInit();;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 10 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
funcParserInit();;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 11 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
stringParserInit();;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 12 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
structParserInit();;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
#line 13 "C:\\Users\\User\\Desktop\\TopCCompilerBootstrap/src/parser/parser.top"
;
};
void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* C);
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* C);
struct _global_String* _global_StaticArray_op_get_7_string(struct _global_StaticArray_7_string* _global_self, unsigned int _global_index, struct _global_Context* C);
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* C);
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* C);
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* C);
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* C);
_Bool _global_StaticArray_contains_7_string(struct _global_StaticArray_7_string* _global_self, struct _global_String _global_elem, struct _global_Context* C);
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* C);
struct _global_String lexer_TokenType_toString(struct lexer_TokenType* lexer_self, struct _global_Context* C){;
struct _global_EnumType* lexer_enum_type;lexer_enum_type = lexer_TokenType_get_type(NULL,C);;
;return (*(_global_StaticArray_op_get_StaticArray_S_Case(&((lexer_enum_type)->cases),(unsigned int)(lexer_self)->tag,C))).name;
;}
static inline struct _global_String lexer_TokenType_toStringByValue(struct lexer_TokenType D,struct _global_Context* C){
return lexer_TokenType_toString(&D,C);
}struct _global_String lexer_Token_toString(struct lexer_Token* lexer_self, struct _global_Context* C){;
;return _global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(0,""),lexer_TokenType_toStringByValue(((lexer_self)->kind),C),C),_global_StringInit(3," : "),C),((lexer_self)->value),C),_global_StringInit(0,""),C);
;}
static inline struct _global_String lexer_Token_toStringByValue(struct lexer_Token D,struct _global_Context* C){
return lexer_Token_toString(&D,C);
}unsigned int lexer_Tok_length(struct lexer_Tok* lexer_self, struct _global_Context* C){;
;return (lexer_self)->end-(lexer_self)->start;
;}
struct _global_String lexer_Tok_slice(struct lexer_Tok* lexer_self, struct _global_String lexer_s, struct _global_Context* C){;
;
;return _global_String_sliceByValue(lexer_s,(lexer_self)->start,(lexer_self)->end,C);
;}
void lexer_Tok_clear(struct lexer_Tok* lexer_self, struct _global_Context* C){;
(lexer_self)->active = 0;;
(lexer_self)->end = (lexer_self)->start;;
;}
void lexer_Tok_include(struct lexer_Tok* lexer_self, unsigned int lexer_i, struct _global_Context* C){;
;
if(!((lexer_self)->active)){;
(lexer_self)->active = 1;;
(lexer_self)->start = lexer_i;;
;};
(lexer_self)->end = lexer_i+1;;
;}
struct _global_String lexer_Lexer_get_filename(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->filename;
;}
unsigned int lexer_Lexer_get_line(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->line;
;}
char lexer_Lexer_current(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C));
;}
char lexer_Lexer_advance(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
(lexer_self)->i = (lexer_self)->i+1;;
;return ((lexer_self)->i<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i,C)):('\0'));
;}
char lexer_Lexer_next(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return ((lexer_self)->i+1<((lexer_self)->src).length ? *(_global_String_op_getByValue((lexer_self)->src,(unsigned int)(lexer_self)->i+1,C)):('\0'));
;}
struct _global_String lexer_char_array_toString(struct _global_StaticArray_StaticArray_S_char lexer_arr, struct _global_Context* C){;
char* lexer_buffer;lexer_buffer = _global_longterm_alloc_char((uint64_t)(lexer_arr).length+1,C);;
_global_memcpy_char(lexer_buffer,(lexer_arr).data,(lexer_arr).length,C);
*(((lexer_buffer + (int64_t)(lexer_arr).length))) = _global_null_terminated;;
;return _global_make_String((lexer_arr).length,lexer_buffer,C);
;}
struct error_CompilerError* lexer_Lexer_reset_tok(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
if(lexer_Tok_length(&((lexer_self)->tok),C)>0){;
struct lexer_TokenType lexer_kind;struct _global_String lexer_value;struct plexer_TokenTypecstringp D;D = lexer_determine_token(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);lexer_kind=D.field0;lexer_value=D.field1;;
if((lexer_kind).tag==(lexer_Invalid).tag){;
return error_make_Error_rlexer_Lexer(lexer_self,_global_String_op_addByValue(_global_String_op_addByValue(_global_StringInit(14,"Unknown token "),(lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C)),C),_global_StringInit(0,""),C),C);
;
;};
lexer_Lexer_append_token(lexer_self,lexer_kind,lexer_value,C);
;};
lexer_Tok_clear(&((lexer_self)->tok),C);
;return NULL;
;}
unsigned int lexer_Lexer_get_column(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;return (lexer_self)->column;
;}
_Bool lexer_is_digit(char lexer_c, struct _global_Context* C){;
;return ((int)'0')<=((int)lexer_c)&&((int)lexer_c)<=((int)'9');
;}
static inline struct _global_Maybe_plexer_TokenTypecstringp tmplexerc(struct _global_Maybe_Maybe_T H) {
struct _global_Maybe_plexer_TokenTypecstringp G;G.tag = H.tag;G.cases = *(union _global_Maybe_plexer_TokenTypecstringp_cases*) &(H.cases);return G;
}
struct _global_Maybe_plexer_TokenTypecstringp lexer_is_number(struct _global_String lexer_s, struct _global_Context* C){;
_Bool lexer_dot;lexer_dot = 0;;
struct _global_Range D =_global_RangeInit(0,(lexer_s).length);
for (unsigned int F = D.start; F < D.end; F++) {
unsigned int lexer_i;lexer_i = F;
;if(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C))=='.'){;
if(lexer_dot){;
return tmplexerc(_global_None);
;
;};
lexer_dot = 1;;
;}else if(!(lexer_is_digit(*(_global_String_op_getByValue(lexer_s,(unsigned int)lexer_i,C)),C))){;
return tmplexerc(_global_None);
;
;};
}
;
;return (lexer_dot ? _global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Float,lexer_s),C):(_global_Some_plexer_TokenTypecstringp(plexer_TokenTypecstringpInit(lexer_Integer,lexer_s),C)));
;}
_Bool lexer_is_identifier(struct _global_String lexer_s, struct _global_Context* C){;
;return 1;
;}
struct _global_StaticArray_7_string lexer_keywords;_Bool lexer_is_keyword(struct _global_String lexer_s, struct _global_Context* C){;
;return _global_StaticArray_contains_7_string(&(lexer_keywords),lexer_s,C);
;}
struct plexer_TokenTypecstringp lexer_determine_token(struct _global_String lexer_s, struct _global_Context* C){;
_global_log_string(lexer_s,C);
;struct _global_Maybe_plexer_TokenTypecstringp D =lexer_is_number(lexer_s,C);
if(D.tag==0){struct plexer_TokenTypecstringp lexer_token = D.cases.Some.field0;
return lexer_token;}else if(1){return (lexer_is_keyword(lexer_s,C) ? plexer_TokenTypecstringpInit(lexer_Keyword,lexer_s) : ((lexer_is_identifier(lexer_s,C))) ? plexer_TokenTypecstringpInit(lexer_Identifier,lexer_s):(plexer_TokenTypecstringpInit(lexer_Invalid,lexer_s)));};
;}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_lex(struct _global_String lexer_src, struct _global_String lexer_filename, struct _global_Context* C){;
;
struct _global_Array_lexer_Token lexer_tokens;lexer_tokens = _global_Array_lexer_TokenInit(0, 0, NULL, NULL);;
(lexer_tokens).allocator = (C)->longterm_storage;;
struct lexer_Lexer lexer_lexer;lexer_lexer = lexer_LexerInit(lexer_TokInit(0,0,0),lexer_src,0,lexer_tokens,lexer_filename,1,0);;
;return lexer_Lexer_lex(&(lexer_lexer),C);
;}
void lexer_Lexer_append_token(struct lexer_Lexer* lexer_self, struct lexer_TokenType lexer_kind, struct _global_String lexer_value, struct _global_Context* C){;
;
;
unsigned int lexer_column;lexer_column = (lexer_self)->column-((lexer_value).length/2);;
if(lexer_column>0){;
lexer_column = lexer_column-1;;
;};
struct lexer_Token lexer_tok;lexer_tok = lexer_TokenInit(lexer_kind,lexer_value,(lexer_self)->line,lexer_column);;
_global_Array_append_lexer_Token(&((lexer_self)->tokens),lexer_tok,C);
;}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerd(struct _global_Result_rerror_CompilerError_Result_T H) {
struct _global_Result_rerror_CompilerError___lexer_Token G;G.tag = H.tag;G.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(H.cases);return G;
}
static inline struct _global_Result_rerror_CompilerError___lexer_Token tmplexerf(struct _global_Result_Result_E___lexer_Token bl) {
struct _global_Result_rerror_CompilerError___lexer_Token bk;bk.tag = bl.tag;bk.cases = *(union _global_Result_rerror_CompilerError___lexer_Token_cases*) &(bl.cases);return bk;
}
struct _global_Result_rerror_CompilerError___lexer_Token lexer_Lexer_lex(struct lexer_Lexer* lexer_self, struct _global_Context* C){;
;while((lexer_self)->i<((lexer_self)->src).length){char lexer_t;lexer_t = lexer_Lexer_current(lexer_self,C);;(lexer_self)->column = (lexer_self)->column+1;;char D =lexer_t;if(D=='('){
struct error_CompilerError* F =lexer_Lexer_reset_tok(lexer_self,C);if(F != NULL){struct error_CompilerError* lexer__x = F;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"("),C);
;}
else if(D==')'){
struct error_CompilerError* J =lexer_Lexer_reset_tok(lexer_self,C);if(J != NULL){struct error_CompilerError* lexer__x = J;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,")"),C);
;}
else if(D=='='){
struct error_CompilerError* K =lexer_Lexer_reset_tok(lexer_self,C);if(K != NULL){struct error_CompilerError* lexer__x = K;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"="),C);
;}
else if(D==' '){
struct error_CompilerError* L =lexer_Lexer_reset_tok(lexer_self,C);if(L != NULL){struct error_CompilerError* lexer__x = L;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;}
else if(D==':'){
struct error_CompilerError* M =lexer_Lexer_reset_tok(lexer_self,C);if(M != NULL){struct error_CompilerError* lexer__x = M;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char N =lexer_Lexer_next(lexer_self,C);if(N=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,":="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,":"),C);
;}
;
;}
else if(D=='\n'||D=='\r'){
struct error_CompilerError* P =lexer_Lexer_reset_tok(lexer_self,C);if(P != NULL){struct error_CompilerError* lexer__x = P;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
struct stringBuilder_StringBuilder lexer_s;lexer_s = stringBuilder_make_StringBuilder(C);;
((lexer_s).chars).allocator = (C)->longterm_storage;;
(lexer_self)->line = (lexer_self)->line+1;;
(lexer_self)->column = 0;;
;while(lexer_Lexer_next(lexer_self,C)==' '){lexer_Lexer_advance(lexer_self,C);_global_Array_append_char(&((lexer_s).chars),' ',C);(lexer_self)->column = (lexer_self)->column+1;;};
_global_Array_append_char(&((lexer_s).chars),'\0',C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_make_String(((lexer_s).chars).length-1,_global_Maybe_unwrap_rcharByValue(((lexer_s).chars).data,C),C),C);
;}
else if(D=='+'){
struct error_CompilerError* Q =lexer_Lexer_reset_tok(lexer_self,C);if(Q != NULL){struct error_CompilerError* lexer__x = Q;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char R =lexer_Lexer_next(lexer_self,C);if(R=='+'){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(2,"++"),C);
;}
else if(R=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"+="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"+"),C);
;}
;
;}
else if(D=='-'){
struct error_CompilerError* S =lexer_Lexer_reset_tok(lexer_self,C);if(S != NULL){struct error_CompilerError* lexer__x = S;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char T =lexer_Lexer_next(lexer_self,C);if(T=='='){
lexer_Lexer_advance(lexer_self,C);
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(2,"-="),C);
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"-"),C);
;}
;
;}
else if(D=='*'){
struct error_CompilerError* V =lexer_Lexer_reset_tok(lexer_self,C);if(V != NULL){struct error_CompilerError* lexer__x = V;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"*"),C);
;}
else if(D=='<'){
struct error_CompilerError* W =lexer_Lexer_reset_tok(lexer_self,C);if(W != NULL){struct error_CompilerError* lexer__x = W;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"<"),C);
;}
else if(D==','){
struct error_CompilerError* X =lexer_Lexer_reset_tok(lexer_self,C);if(X != NULL){struct error_CompilerError* lexer__x = X;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,","),C);
;}
else if(D=='"'){
struct error_CompilerError* Y =lexer_Lexer_reset_tok(lexer_self,C);if(Y != NULL){struct error_CompilerError* lexer__x = Y;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;while((lexer_self)->i<((lexer_self)->src).length&&!(lexer_Lexer_next(lexer_self,C)=='"')){lexer_Lexer_advance(lexer_self,C);lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);};
lexer_Lexer_append_token(lexer_self,lexer_String,lexer_Tok_slice(&((lexer_self)->tok),(lexer_self)->src,C),C);
lexer_Tok_clear(&((lexer_self)->tok),C);
lexer_Lexer_advance(lexer_self,C);
;}
else if(D=='/'){
struct error_CompilerError* Z =lexer_Lexer_reset_tok(lexer_self,C);if(Z != NULL){struct error_CompilerError* lexer__x = Z;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
char bb =lexer_Lexer_next(lexer_self,C);if(bb=='/'){
struct error_CompilerError* bc =lexer_Lexer_reset_tok(lexer_self,C);if(bc != NULL){struct error_CompilerError* lexer__x = bc;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
;while(!(lexer_Lexer_current(lexer_self,C)=='\n')){lexer_Lexer_advance(lexer_self,C);};
;}
else if(bb=='*'){
struct error_CompilerError* bd =lexer_Lexer_reset_tok(lexer_self,C);if(bd != NULL){struct error_CompilerError* lexer__x = bd;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
unsigned int lexer_num;lexer_num = 1;;
;while(lexer_num>0){char bf =lexer_Lexer_advance(lexer_self,C);if(bf=='*'){
char bg =lexer_Lexer_next(lexer_self,C);if(bg=='/'){
lexer_num = lexer_num-1;;
lexer_Lexer_advance(lexer_self,C);
;}
else if(1){
;}
;
;}
else if(bf=='/'){
char bh =lexer_Lexer_next(lexer_self,C);if(bh=='*'){
lexer_num = lexer_num+1;;
lexer_Lexer_advance(lexer_self,C);
;}
else if(1){
;}
;
;}
else if(bf=='\0'){
return tmplexerd(_global_Error_rerror_CompilerError_Result_T(error_make_Error_rlexer_Lexer(lexer_self,_global_StringInit(12,"Expecting */"),C),C));
;
;}
else if(1){
;}
;};
;}
else if(1){
lexer_Lexer_append_token(lexer_self,lexer_Operator,_global_StringInit(1,"/"),C);
;}
;
;}
else if(1){
lexer_Tok_include(&((lexer_self)->tok),(lexer_self)->i,C);
;}
;lexer_Lexer_advance(lexer_self,C);};
struct error_CompilerError* bj =lexer_Lexer_reset_tok(lexer_self,C);if(bj != NULL){struct error_CompilerError* lexer__x = bj;

return tmplexerd(_global_Error_rerror_CompilerError_Result_T(lexer__x,C));
;
;}
else if(1){
;}
;
lexer_Lexer_append_token(lexer_self,lexer_Symbol,_global_StringInit(1,"\n"),C);
lexer_Lexer_append_token(lexer_self,lexer_Indent,_global_StringInit(0,""),C);
struct _global_Array_lexer_Token lexer_ts;lexer_ts = (lexer_self)->tokens;;
;return tmplexerf(_global_Ok_Result_E___lexer_Token((_global_StaticArray_StaticArray_S_lexer_TokenInit(lexer_ts.data, lexer_ts.length)),C));
;}
void _global_memcpy_lexer_Token(struct lexer_Token* _global_target, struct lexer_Token* _global_destination, unsigned int _global_length, struct _global_Context* C){;
;
;
_global_c_memcpy((void*)_global_target,(void*)_global_destination,(uint64_t)_global_length*sizeof(struct lexer_Token),C);
;}
struct error_CompilerError* _global_box_longterm_error_CompilerError(struct error_CompilerError _global_value, struct _global_Context* C){;
struct error_CompilerError* _global_pointer;_global_pointer = (struct error_CompilerError*)(_global_Allocator_alloc((C)->longterm_storage,(uint64_t)sizeof(struct error_CompilerError),C));;
*(_global_pointer) = _global_value;;
;return _global_pointer;
;}
struct _global_String* _global_StaticArray_op_get_7_string(struct _global_StaticArray_7_string* _global_self, unsigned int _global_index, struct _global_Context* C){;
;
_global_assert(_global_index<7,_global_StringInit(13,"Out of bounds"),C);
;return ((_global_self)->data + (int64_t)_global_index);
;}

static inline struct lexer_Token* tmplexerg(struct _global_Array_lexer_Token** _global_self,unsigned int* _global_newSize,struct _global_Allocator** _global_allocator, struct _global_Context* C) {
struct lexer_Token* D =(*_global_self)->data;
if(D != NULL){struct lexer_Token* _global_data = D;
_global_assert(*_global_newSize>=(*_global_self)->length,_global_StringInit(16,"Truncating array"),C);
struct lexer_Token* _global_newData;_global_newData = (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));;
_global_memcpy_lexer_Token(_global_newData,_global_data,(*_global_self)->length,C);
_global_Allocator_dealloc(*_global_allocator,(void*)_global_data,C);
return _global_newData;}else if(D == NULL){return (struct lexer_Token*)(_global_Allocator_alloc(*_global_allocator,(uint64_t)(*_global_self)->capacity*sizeof(struct lexer_Token),C));}
}
void _global_Array_reserve_lexer_Token(struct _global_Array_lexer_Token* _global_self, unsigned int _global_newSize, struct _global_Context* C){;
;
struct _global_Allocator* _global_allocator;_global_allocator = _global_Maybe_default_rAllocatorByValue((_global_self)->allocator,(C)->allocator,C);;
(_global_self)->allocator = _global_allocator;;
(_global_self)->capacity = _global_newSize;;
(_global_self)->data = tmplexerg(&_global_self,&_global_newSize,&_global_allocator, C);;
;}
struct _global_Case* _global_StaticArray_op_get_StaticArray_S_Case(struct _global_StaticArray_StaticArray_S_Case* _global_self, unsigned int _global_index, struct _global_Context* C){;
;
_global_assert(_global_index<(_global_self)->length,_global_StringInit(13,"Out of bounds"),C);
;return ((_global_self)->data + (int64_t)_global_index);
;}
char* _global_longterm_alloc_char(uint64_t _global_num, struct _global_Context* C){;
;return (char*)(_global_Allocator_alloc((C)->longterm_storage,_global_num*(uint64_t)sizeof(char),C));
;}
struct error_CompilerError* error_make_Error_rlexer_Lexer(struct lexer_Lexer* error_self, struct _global_String error_mesg, struct _global_Context* C){;
;
;return _global_box_longterm_error_CompilerError(error_CompilerErrorInit(lexer_Lexer_get_filename(error_self,C),lexer_Lexer_get_line(error_self,C),error_mesg,lexer_Lexer_get_column(error_self,C)),C);
;}
_Bool _global_StaticArray_contains_7_string(struct _global_StaticArray_7_string* _global_self, struct _global_String _global_elem, struct _global_Context* C){;
;
unsigned int _global_i;_global_i = 0;;
;while(_global_i<7){if(_global_String_op_eq(&(*(_global_StaticArray_op_get_7_string(_global_self,(unsigned int)_global_i,C))),&(_global_elem),C)){;
return 1;
;
;};_global_i = _global_i+1;;};
;return 0;
;}
void _global_Array_append_lexer_Token(struct _global_Array_lexer_Token* _global_self, struct lexer_Token _global_value, struct _global_Context* C){;
;
unsigned int _global_newLength;_global_newLength = (_global_self)->length+1;;
if(_global_newLength>(_global_self)->capacity){;
if((_global_self)->capacity==0){;
_global_Array_reserve_lexer_Token(_global_self,1,C);
;}
else{_global_Array_reserve_lexer_Token(_global_self,(_global_self)->capacity*2,C);
;};
;};
*((((struct lexer_Token*)(_global_self)->data + (int64_t)(_global_self)->length))) = _global_value;;
(_global_self)->length = _global_newLength;;
;}

void lexerInitTypes() { 
 errorInitTypes();
lexer_Integer.tag = 0;
lexer_Float.tag = 1;
lexer_Identifier.tag = 2;
lexer_Operator.tag = 3;
lexer_Invalid.tag = 4;
lexer_Symbol.tag = 5;
lexer_Indent.tag = 6;
lexer_Keyword.tag = 7;
lexer_String.tag = 8;
struct _global_Case* c =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 9);
c[0].name = _global_StringInit(7, "Integer");
c[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[1].name = _global_StringInit(5, "Float");
c[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[2].name = _global_StringInit(10, "Identifier");
c[2].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[3].name = _global_StringInit(8, "Operator");
c[3].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[4].name = _global_StringInit(7, "Invalid");
c[4].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[5].name = _global_StringInit(6, "Symbol");
c[5].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[6].name = _global_StringInit(6, "Indent");
c[6].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[7].name = _global_StringInit(7, "Keyword");
c[7].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
c[8].name = _global_StringInit(6, "String");
c[8].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
lexer_TokenTypeType.tag_field.name = _global_StringInit(3, "tag");

lexer_TokenTypeType.tag_field.offset = offsetof(struct lexer_TokenType, tag);
lexer_TokenTypeType.tag_field.field_type = 
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

lexer_TokenTypeType.size = sizeof(struct lexer_TokenType);

lexer_TokenTypeType.package = _global_StringInit(5, "lexer");
lexer_TokenTypeType.name = _global_StringInit(9, "TokenType");
lexer_TokenTypeType.cases.data = c;
lexer_TokenTypeType.cases.length = 9;
lexer_TokenType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 4);
lexer_TokenType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_TokenType_fields
,4
);
lexer_TokenType.package = _global_StringInit(5, "lexer");
lexer_TokenType.name = _global_StringInit(5, "Token");
lexer_TokenType.size = sizeof(struct lexer_Token);
lexer_TokenType_fields[0].name = _global_StringInit(4, "kind");
lexer_TokenType_fields[0].offset = offsetof(struct lexer_Token, kind);
lexer_TokenType_fields[0].field_type = 
_global_TypeFromStruct(
lexer_TokenType_get_type(NULL,(&_global_context))
,
&rEnumType_VTABLE_FOR_Type
,
rEnumType_VTABLE_FOR_Type.type
, &_global_EnumType_toString
, &_global_EnumType_get_size
)
;
lexer_TokenType_fields[1].name = _global_StringInit(5, "value");
lexer_TokenType_fields[1].offset = offsetof(struct lexer_Token, value);
lexer_TokenType_fields[1].field_type = 
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
lexer_TokenType_fields[2].name = _global_StringInit(4, "line");
lexer_TokenType_fields[2].offset = offsetof(struct lexer_Token, line);
lexer_TokenType_fields[2].field_type = 
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
lexer_TokenType_fields[3].name = _global_StringInit(6, "column");
lexer_TokenType_fields[3].offset = offsetof(struct lexer_Token, column);
lexer_TokenType_fields[3].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;lexer_TokType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 3);
lexer_TokType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_TokType_fields
,3
);
lexer_TokType.package = _global_StringInit(5, "lexer");
lexer_TokType.name = _global_StringInit(3, "Tok");
lexer_TokType.size = sizeof(struct lexer_Tok);
lexer_TokType_fields[0].name = _global_StringInit(6, "active");
lexer_TokType_fields[0].offset = offsetof(struct lexer_Tok, active);
lexer_TokType_fields[0].field_type = 
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
lexer_TokType_fields[1].name = _global_StringInit(5, "start");
lexer_TokType_fields[1].offset = offsetof(struct lexer_Tok, start);
lexer_TokType_fields[1].field_type = 
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
lexer_TokType_fields[2].name = _global_StringInit(3, "end");
lexer_TokType_fields[2].offset = offsetof(struct lexer_Tok, end);
lexer_TokType_fields[2].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_Array_lexer_TokenType.size = malloc(sizeof(struct _global_ArraySize));
_global_Array_lexer_TokenType.size->tag = 1;
_global_Array_lexer_TokenType.array_type=
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;_global_Maybe_rlexer_TokenType.p_type =
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rlexer_TokenType.nullable = 1;lexer_LexerType_fields = (struct _global_Field*) malloc(sizeof(struct _global_Field) * 7);
lexer_LexerType.fields = _global_StaticArray_StaticArray_S_FieldInit(
lexer_LexerType_fields
,7
);
lexer_LexerType.package = _global_StringInit(5, "lexer");
lexer_LexerType.name = _global_StringInit(5, "Lexer");
lexer_LexerType.size = sizeof(struct lexer_Lexer);
lexer_LexerType_fields[0].name = _global_StringInit(3, "tok");
lexer_LexerType_fields[0].offset = offsetof(struct lexer_Lexer, tok);
lexer_LexerType_fields[0].field_type = 
_global_TypeFromStruct(
lexer_Tok_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
lexer_LexerType_fields[1].name = _global_StringInit(3, "src");
lexer_LexerType_fields[1].offset = offsetof(struct lexer_Lexer, src);
lexer_LexerType_fields[1].field_type = 
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
lexer_LexerType_fields[2].name = _global_StringInit(1, "i");
lexer_LexerType_fields[2].offset = offsetof(struct lexer_Lexer, i);
lexer_LexerType_fields[2].field_type = 
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
lexer_LexerType_fields[3].name = _global_StringInit(6, "tokens");
lexer_LexerType_fields[3].offset = offsetof(struct lexer_Lexer, tokens);
lexer_LexerType_fields[3].field_type = 
_global_TypeFromStruct(
_global_Array_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
;
lexer_LexerType_fields[4].name = _global_StringInit(8, "filename");
lexer_LexerType_fields[4].offset = offsetof(struct lexer_Lexer, filename);
lexer_LexerType_fields[4].field_type = 
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
lexer_LexerType_fields[5].name = _global_StringInit(4, "line");
lexer_LexerType_fields[5].offset = offsetof(struct lexer_Lexer, line);
lexer_LexerType_fields[5].field_type = 
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
lexer_LexerType_fields[6].name = _global_StringInit(6, "column");
lexer_LexerType_fields[6].offset = offsetof(struct lexer_Lexer, column);
lexer_LexerType_fields[6].field_type = 
_global_TypeFromStruct(
_global_uint_get_type(NULL,(&_global_context))
,
&rIntType_VTABLE_FOR_Type
,
rIntType_VTABLE_FOR_Type.type
, &_global_IntType_toString
, &_global_IntType_get_size
)
;_global_StaticArray_StaticArray_S_charType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_charType.size->tag = 2;
_global_StaticArray_StaticArray_S_charType.array_type=
_global_TypeFromStruct(
_global_char_get_type(NULL,(&_global_context))
,
&rCharType_VTABLE_FOR_Type
,
rCharType_VTABLE_FOR_Type.type
, &_global_CharType_toString
, &_global_CharType_get_size
)
;_global_Maybe_rerror_CompilerErrorType.p_type =
_global_TypeFromStruct(
error_CompilerError_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;
_global_Maybe_rerror_CompilerErrorType.nullable = 1;struct _global_Case* p =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
p[0].name = _global_StringInit(4, "Some");
p[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
p[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; p[0].args.data[0].offset = offsetof(struct _global_Maybe_plexer_TokenTypecstringp_Some, field0);
p[1].name = _global_StringInit(4, "None");
p[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 0), 0);
_global_Maybe_plexer_TokenTypecstringpType.tag_field.name = _global_StringInit(3, "tag");

_global_Maybe_plexer_TokenTypecstringpType.tag_field.offset = offsetof(struct _global_Maybe_plexer_TokenTypecstringp, tag);
_global_Maybe_plexer_TokenTypecstringpType.tag_field.field_type = 
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

_global_Maybe_plexer_TokenTypecstringpType.size = sizeof(struct _global_Maybe_plexer_TokenTypecstringp);

_global_Maybe_plexer_TokenTypecstringpType.package = _global_StringInit(7, "_global");
_global_Maybe_plexer_TokenTypecstringpType.name = _global_StringInit(30, "Maybe_plexer_TokenTypecstringp");
_global_Maybe_plexer_TokenTypecstringpType.cases.data = p;
_global_Maybe_plexer_TokenTypecstringpType.cases.length = 2;
_global_StaticArray_StaticArray_S_lexer_TokenType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_StaticArray_S_lexer_TokenType.size->tag = 2;
_global_StaticArray_StaticArray_S_lexer_TokenType.array_type=
_global_TypeFromStruct(
lexer_Token_get_type(NULL,(&_global_context))
,
&rStructType_VTABLE_FOR_Type
,
rStructType_VTABLE_FOR_Type.type
, &_global_StructType_toString
, &_global_StructType_get_size
)
;struct _global_Case* z =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
z[0].name = _global_StringInit(2, "Ok");
z[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
z[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; z[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Ok, field0);
z[1].name = _global_StringInit(5, "Error");
z[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
z[1].args.data[0].arg_type = 
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
; z[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token_Error, field0);
_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError___lexer_Token, tag);
_global_Result_rerror_CompilerError___lexer_TokenType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError___lexer_TokenType.size = sizeof(struct _global_Result_rerror_CompilerError___lexer_Token);

_global_Result_rerror_CompilerError___lexer_TokenType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError___lexer_TokenType.name = _global_StringInit(41, "Result_rerror_CompilerError___lexer_Token");
_global_Result_rerror_CompilerError___lexer_TokenType.cases.data = z;
_global_Result_rerror_CompilerError___lexer_TokenType.cases.length = 2;
_global_StaticArray_7_stringType.size = malloc(sizeof(struct _global_ArraySize));
_global_StaticArray_7_stringType.size->tag = 0;
_global_StaticArray_7_stringType.size->cases.Static.field0 = 7;
_global_StaticArray_7_stringType.array_type = 
_global_TypeFromStruct(
_global_String_get_type(NULL,(&_global_context))
,
&rStringType_VTABLE_FOR_Type
,
rStringType_VTABLE_FOR_Type.type
, &_global_StringType_toString
, &_global_StringType_get_size
)
;struct _global_Case* S =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
S[0].name = _global_StringInit(2, "Ok");
S[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
S[0].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; S[0].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Ok, field0);
S[1].name = _global_StringInit(5, "Error");
S[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
S[1].args.data[0].arg_type = 
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
; S[1].args.data[0].offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T_Error, field0);
_global_Result_rerror_CompilerError_Result_TType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_rerror_CompilerError_Result_TType.tag_field.offset = offsetof(struct _global_Result_rerror_CompilerError_Result_T, tag);
_global_Result_rerror_CompilerError_Result_TType.tag_field.field_type = 
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

_global_Result_rerror_CompilerError_Result_TType.size = sizeof(struct _global_Result_rerror_CompilerError_Result_T);

_global_Result_rerror_CompilerError_Result_TType.package = _global_StringInit(7, "_global");
_global_Result_rerror_CompilerError_Result_TType.name = _global_StringInit(36, "Result_rerror_CompilerError_Result_T");
_global_Result_rerror_CompilerError_Result_TType.cases.data = S;
_global_Result_rerror_CompilerError_Result_TType.cases.length = 2;
struct _global_Case* bc =
(struct _global_Case*) malloc(sizeof(struct _global_Case) * 2);
bc[0].name = _global_StringInit(2, "Ok");
bc[0].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bc[0].args.data[0].arg_type = 
_global_TypeFromStruct(
_global_StaticArray_StaticArray_S_lexer_Token_get_type(NULL,(&_global_context))
,
&rArrayType_VTABLE_FOR_Type
,
rArrayType_VTABLE_FOR_Type.type
, &_global_ArrayType_toString
, &_global_ArrayType_get_size
)
; bc[0].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Ok, field0);
bc[1].name = _global_StringInit(5, "Error");
bc[1].args = _global_StaticArray_StaticArray_S_CaseArgInit(malloc(sizeof(struct _global_CaseArg) * 1), 1);
bc[1].args.data[0].arg_type = 
_global_TypeFromStruct(
&None_Type
,
&rNoneType_VTABLE_FOR_Type
,
rNoneType_VTABLE_FOR_Type.type
, &_global_NoneType_toString
, &_global_NoneType_get_size
)
; bc[1].args.data[0].offset = offsetof(struct _global_Result_Result_E___lexer_Token_Error, field0);
_global_Result_Result_E___lexer_TokenType.tag_field.name = _global_StringInit(3, "tag");

_global_Result_Result_E___lexer_TokenType.tag_field.offset = offsetof(struct _global_Result_Result_E___lexer_Token, tag);
_global_Result_Result_E___lexer_TokenType.tag_field.field_type = 
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

_global_Result_Result_E___lexer_TokenType.size = sizeof(struct _global_Result_Result_E___lexer_Token);

_global_Result_Result_E___lexer_TokenType.package = _global_StringInit(7, "_global");
_global_Result_Result_E___lexer_TokenType.name = _global_StringInit(29, "Result_Result_E___lexer_Token");
_global_Result_Result_E___lexer_TokenType.cases.data = bc;
_global_Result_Result_E___lexer_TokenType.cases.length = 2;
 }
void lexerInit() { 
errorInit();;
;
;
lexer_keywords = _global_StaticArray_7_stringInit(_global_StringInit(4,"true"),_global_StringInit(5,"false"),_global_StringInit(2,"if"),_global_StringInit(4,"else"),_global_StringInit(5,"while"),_global_StringInit(3,"def"),_global_StringInit(4,"type"));;
;
};